/*
* Copyright (c) 2020 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/***********************************************************************************************************************
 * Includes
 **********************************************************************************************************************/
#include "r_crc.h"
#include <string.h>

/***********************************************************************************************************************
 * Macro definitions
 **********************************************************************************************************************/

/* "CRC" in ASCII, used to determine if channel is open. */
#define CRC_OPEN    (0x00435243ULL)

/***********************************************************************************************************************
 * Typedef definitions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Private function prototypes
 **********************************************************************************************************************/
static void crc_calculate_polynomial(crc_instance_ctrl_t * const p_instance_ctrl,
                                     crc_input_t * const         p_crc_input,
                                     uint32_t                  * calculatedValue);

static void     crc_seed_value_update(crc_instance_ctrl_t * const p_instance_ctrl, uint32_t crc_seed);
static uint32_t crc_calculated_value_get(crc_instance_ctrl_t * const p_instance_ctrl);

#if CRC_CFG_PARAM_CHECKING_ENABLE
static fsp_err_t r_crc_open_cfg_check(crc_cfg_t const * const p_cfg);

#endif

/***********************************************************************************************************************
 * Private global variables
 **********************************************************************************************************************/

/* Filled in Interface API structure for this Instance. */
const crc_api_t g_crc_on_crc =
{
    .open         = R_CRC_Open,
    .close        = R_CRC_Close,
    .calculate    = R_CRC_Calculate,
    .crcResultGet = R_CRC_CalculatedValueGet,
    .snoopEnable  = R_CRC_SnoopEnable,
    .snoopDisable = R_CRC_SnoopDisable,
};

/*******************************************************************************************************************//**
 * @addtogroup CRC
 * @{
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Functions
 **********************************************************************************************************************/

/*******************************************************************************************************************//**
 * Open the CRC driver module
 *
 * Implements @ref crc_api_t::open
 *
 * Open the CRC driver module and initialize the driver control block according to the passed-in
 * configuration structure.
 *
 * @retval FSP_SUCCESS             Configuration was successful.
 * @retval FSP_ERR_ASSERTION       p_ctrl or p_cfg is NULL.
 * @retval FSP_ERR_ALREADY_OPEN    Module already open
 * @retval FSP_ERR_UNSUPPORTED     Hardware not support this feature.
 **********************************************************************************************************************/
fsp_err_t R_CRC_Open (crc_ctrl_t * const p_ctrl, crc_cfg_t const * const p_cfg)
{
    crc_instance_ctrl_t * p_instance_ctrl = (crc_instance_ctrl_t *) p_ctrl;

#if CRC_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(p_ctrl);

    /* Verify the configuration parameters are valid */
    fsp_err_t err = r_crc_open_cfg_check(p_cfg);
    FSP_ERROR_RETURN(FSP_SUCCESS == err, err);

    /* Verify the control block has not already been initialized. */
    FSP_ERROR_RETURN(CRC_OPEN != p_instance_ctrl->open, FSP_ERR_ALREADY_OPEN);
#endif

    /* Save the configuration  */
    p_instance_ctrl->p_cfg = p_cfg;

    /* Mark driver as initialized by setting the open value to the ASCII equivalent of "CRC" */
    p_instance_ctrl->open = CRC_OPEN;

    /* Power on CRC */
    R_BSP_MODULE_START(FSP_IP_CRC, 0);

    uint8_t crccr0 = 0;
#if BSP_FEATURE_CRC_HAS_CRCCR0_LMS

    /* Set bit order value */
    crccr0 = (uint8_t) (p_instance_ctrl->p_cfg->bit_order << R_CRC_CRCCR0_LMS_Pos);
#endif

    /* Set CRC polynomial */
    crccr0 |= (uint8_t) (p_instance_ctrl->p_cfg->polynomial << R_CRC_CRCCR0_GPS_Pos);

    /* Set DORCLR to clear CRCDOR */
    crccr0 |= (uint8_t) (1 << R_CRC_CRCCR0_DORCLR_Pos);

    R_CRC->CRCCR0 = crccr0;

#if BSP_FEATURE_CRC_HAS_SNOOP

    /* Disable snooping */
    R_CRC->CRCCR1 = 0;
#endif

    return FSP_SUCCESS;
}

/*******************************************************************************************************************//**
 * Close the CRC module driver.
 *
 * Implements @ref crc_api_t::close
 *
 * @retval FSP_SUCCESS             Configuration was successful.
 * @retval FSP_ERR_ASSERTION       p_ctrl is NULL.
 * @retval FSP_ERR_NOT_OPEN        The driver is not opened.
 *
 **********************************************************************************************************************/
fsp_err_t R_CRC_Close (crc_ctrl_t * const p_ctrl)
{
    crc_instance_ctrl_t * p_instance_ctrl = (crc_instance_ctrl_t *) p_ctrl;

#if CRC_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(p_ctrl);
    FSP_ERROR_RETURN(CRC_OPEN == p_instance_ctrl->open, FSP_ERR_NOT_OPEN);
#endif

    R_BSP_MODULE_STOP(FSP_IP_CRC, 0);

    /* Mark driver as closed */
    p_instance_ctrl->open = 0U;

    return FSP_SUCCESS;
}

/*******************************************************************************************************************//**
 * Perform a CRC calculation on a block of 8-bit/32-bit (for 32-bit polynomial) data.
 *
 * Implements @ref crc_api_t::calculate
 *
 * This function performs a CRC calculation on an array of 8-bit/32-bit (for 32-bit polynomial) values and
 * returns an 8-bit/32-bit (for 32-bit polynomial) calculated value
 *
 * @retval FSP_SUCCESS              Calculation successful.
 * @retval FSP_ERR_ASSERTION        Either p_ctrl, inputBuffer, or calculatedValue is NULL.
 * @retval FSP_ERR_INVALID_ARGUMENT length value is NULL, or not 4-byte aligned when 32-bit CRC polynomial function is configured.
 * @retval FSP_ERR_NOT_OPEN         The driver is not opened.
 **********************************************************************************************************************/
fsp_err_t R_CRC_Calculate (crc_ctrl_t * const p_ctrl, crc_input_t * const p_crc_input, uint32_t * calculatedValue)
{
    crc_instance_ctrl_t * p_instance_ctrl = (crc_instance_ctrl_t *) p_ctrl;
#if CRC_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(p_ctrl);
    FSP_ASSERT(p_crc_input->p_input_buffer);
    FSP_ASSERT(calculatedValue);
    FSP_ERROR_RETURN((0UL != p_crc_input->num_bytes), FSP_ERR_INVALID_ARGUMENT);
    FSP_ERROR_RETURN(CRC_OPEN == p_instance_ctrl->open, FSP_ERR_NOT_OPEN);
    if ((p_instance_ctrl->p_cfg->polynomial == CRC_POLYNOMIAL_CRC_32) ||
        (p_instance_ctrl->p_cfg->polynomial == CRC_POLYNOMIAL_CRC_32C))
    {
        FSP_ERROR_RETURN((p_crc_input->num_bytes & 0x03) == 0, FSP_ERR_INVALID_ARGUMENT);
    }
#endif

    /* Calculate CRC value for the input buffer */
    crc_calculate_polynomial(p_instance_ctrl, p_crc_input, calculatedValue);

    return FSP_SUCCESS;
}

/*******************************************************************************************************************//**
 * Return the current calculated value.
 *
 * Implements @ref crc_api_t::crcResultGet
 *
 * CRC calculation operates on a running value. This function returns the current calculated value.
 *
 * @retval FSP_SUCCESS             Return of calculated value successful.
 * @retval FSP_ERR_ASSERTION       Either p_ctrl or calculatedValue is NULL.
 * @retval FSP_ERR_NOT_OPEN        The driver is not opened.
 *
 **********************************************************************************************************************/
fsp_err_t R_CRC_CalculatedValueGet (crc_ctrl_t * const p_ctrl, uint32_t * calculatedValue)
{
    crc_instance_ctrl_t * p_instance_ctrl = (crc_instance_ctrl_t *) p_ctrl;

#if CRC_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(p_ctrl);
    FSP_ASSERT(calculatedValue);
    FSP_ERROR_RETURN(CRC_OPEN == p_instance_ctrl->open, FSP_ERR_NOT_OPEN);
#endif

    /* Based on the selected polynomial, return the calculated CRC value */
    *calculatedValue = crc_calculated_value_get(p_instance_ctrl);

    return FSP_SUCCESS;
}

/*******************************************************************************************************************//**
 * Configure the snoop channel and set the CRC seed.
 *
 *  Implements @ref crc_api_t::snoopEnable
 *
 * The CRC calculator can operate on reads and writes over any of the first ten SCI channels.
 * For example, if set to channel 0, transmit, every byte written out SCI channel 0 is also
 * sent to the CRC calculator as if the value was explicitly written directly to the CRC calculator.
 *
 * @retval FSP_SUCCESS                  Snoop configured successfully.
 * @retval FSP_ERR_ASSERTION            Pointer to control stucture is NULL
 * @retval FSP_ERR_NOT_OPEN             The driver is not opened.
 * @retval FSP_ERR_UNSUPPORTED          SNOOP operation is not supported.
 *
 **********************************************************************************************************************/
fsp_err_t R_CRC_SnoopEnable (crc_ctrl_t * const p_ctrl, uint32_t crc_seed)
{
#if BSP_FEATURE_CRC_HAS_SNOOP
    crc_instance_ctrl_t * p_instance_ctrl = (crc_instance_ctrl_t *) p_ctrl;

 #if CRC_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(p_ctrl);
    FSP_ERROR_RETURN(CRC_OPEN == p_instance_ctrl->open, FSP_ERR_NOT_OPEN);
 #endif

    crc_seed_value_update(p_instance_ctrl, crc_seed);

    /* Set CRC snoop address */
    R_CRC->CRCSAR =
        (uint16_t) ((p_instance_ctrl->p_cfg->snoop_address & R_CRC_CRCSAR_CRCSA_Msk) <<
                    R_CRC_CRCSAR_CRCSA_Pos);

    /*
     * Enable snoop operation and set direction:
     */
    crc_extended_cfg_t * p_extend = (crc_extended_cfg_t *) p_instance_ctrl->p_cfg->p_extend;
    if (p_extend->snoop_direction & CRC_SNOOP_DIRECTION_TRANSMIT)
    {
        R_CRC->CRCCR1 = (uint8_t) ((1UL << R_CRC_CRCCR1_CRCSEN_Pos) | (1UL << R_CRC_CRCCR1_CRCSWR_Pos));
    }
    else
    {
        R_CRC->CRCCR1 = (uint8_t) (1 << R_CRC_CRCCR1_CRCSEN_Pos);
    }

    FSP_REGISTER_READ(R_CRC->CRCCR1_b.CRCSWR);

    return FSP_SUCCESS;
#else
    FSP_PARAMETER_NOT_USED(crc_seed);
    FSP_PARAMETER_NOT_USED(p_ctrl);

    return FSP_ERR_UNSUPPORTED;
#endif
}

/*******************************************************************************************************************//**
 * Disable snooping.
 *
 * Implements @ref crc_api_t::snoopDisable
 *
 * @retval FSP_SUCCESS             Snoop disabled.
 * @retval FSP_ERR_ASSERTION       p_ctrl is NULL.
 * @retval FSP_ERR_NOT_OPEN        The driver is not opened.
 * @retval FSP_ERR_UNSUPPORTED     SNOOP operation is not supported.
 *
 **********************************************************************************************************************/
fsp_err_t R_CRC_SnoopDisable (crc_ctrl_t * const p_ctrl)
{
#if BSP_FEATURE_CRC_HAS_SNOOP
 #if CRC_CFG_PARAM_CHECKING_ENABLE
    crc_instance_ctrl_t * p_instance_ctrl = (crc_instance_ctrl_t *) p_ctrl;
    FSP_ASSERT(p_ctrl);
    FSP_ERROR_RETURN(CRC_OPEN == p_instance_ctrl->open, FSP_ERR_NOT_OPEN);
 #endif
    FSP_PARAMETER_NOT_USED(p_ctrl);

    /* Clear CRCSEN to disable snoop operation */
    R_CRC->CRCCR1 = 0;

    return FSP_SUCCESS;
#else
    FSP_PARAMETER_NOT_USED(p_ctrl);

    return FSP_ERR_UNSUPPORTED;
#endif
}

/** @} (end addtogroup CRC) */

/***********************************************************************************************************************
 * Private Functions
 **********************************************************************************************************************/

/*******************************************************************************************************************//**
 * Update CRC seed value
 *
 * @param[in]  p_instance_ctrl         Pointer to instance control block
 * @param[in]  crc_seed                CRC seed value
 **********************************************************************************************************************/
static void crc_seed_value_update (crc_instance_ctrl_t * const p_instance_ctrl, uint32_t crc_seed)
{
    uint32_t crcdor = 0;

    /* Based on the selected polynomial, set the initial CRC seed value */
    switch (p_instance_ctrl->p_cfg->polynomial)
    {
        case CRC_POLYNOMIAL_CRC_8:
        {
            /* CRC seed is masked to use only the lower 8 bits*/
            /* Set the starting 8-bit CRC Calculated value */
            crcdor          |= (uint32_t) (R_CRC_CRCDOR_BY_CRCDOR_BY_Msk & crc_seed);
            R_CRC->CRCDOR_BY = (uint8_t) crcdor;
            break;
        }

        case CRC_POLYNOMIAL_CRC_16:
        case CRC_POLYNOMIAL_CRC_CCITT:
        {
            /* CRC seed is masked to use only the lower 16 bits*/
            /* Set the starting 16-bit CRC Calculated value. */
            crcdor          |= (uint32_t) (R_CRC_CRCDOR_HA_CRCDOR_HA_Msk & crc_seed);
            R_CRC->CRCDOR_HA = (uint16_t) crcdor;
            break;
        }

        default:
        {
            /* CRC seed uses the 32 bits*/
            R_CRC->CRCDOR = crc_seed;
            break;
        }
    }
}

/*******************************************************************************************************************//**
 * Get CRC value
 *
 * @param[in]  p_instance_ctrl         Pointer to instance control block
 **********************************************************************************************************************/
static uint32_t crc_calculated_value_get (crc_instance_ctrl_t * const p_instance_ctrl)
{
    uint32_t calculatedValue = 0;

    /* Based on the selected polynomial, return the calculated CRC value */
    switch (p_instance_ctrl->p_cfg->polynomial)
    {
        case CRC_POLYNOMIAL_CRC_8:
        {
            /* Set bit order value */
            calculatedValue = (uint32_t) R_CRC->CRCDOR_BY;
            break;
        }

        case CRC_POLYNOMIAL_CRC_16:
        case CRC_POLYNOMIAL_CRC_CCITT:
        {
            /* Set bit order value */
            calculatedValue = (uint32_t) R_CRC->CRCDOR_HA;
            break;
        }

        default:
        {
            /* Set bit order value */
            calculatedValue = R_CRC->CRCDOR;
            break;
        }
    }

    return calculatedValue;
}

/*******************************************************************************************************************//**
 * Perform a CRC calculation on a block of data.
 *
 * @param[in]  p_instance_ctrl         Pointer to instance control block
 * @param[in]  p_crc_input             Pointer to input data structure
 * @param[out] calculatedValue         Pointer to the CRC result
 *
 **********************************************************************************************************************/
static void crc_calculate_polynomial (crc_instance_ctrl_t * const p_instance_ctrl,
                                      crc_input_t * const         p_crc_input,
                                      uint32_t                  * calculatedValue)
{
    uint32_t     i;
    const void * inputBuffer = p_crc_input->p_input_buffer;
    uint32_t     length      = p_crc_input->num_bytes;
    uint32_t     crc_seed    = p_crc_input->crc_seed;
    crc_seed_value_update(p_instance_ctrl, crc_seed);

    /* Write each element of the inputBuffer to the CRC Data Input Register. Each write to the
     * Data Input Register generates a new calculated value in the Data Output Register.  */
    switch (p_instance_ctrl->p_cfg->polynomial)
    {
        case CRC_POLYNOMIAL_CRC_8:
        case CRC_POLYNOMIAL_CRC_16:
        case CRC_POLYNOMIAL_CRC_CCITT:
        {
            const uint8_t * p_data = inputBuffer;
            for (i = (uint32_t) 0; i < length; i++)
            {
                /* CRCDIR is a 32-bit read/write register to write data to for CRC-32 or CRC-32C calculation.
                 * CRCDIR_BY is an 8-bit read/write register to write data to for CRC-8, CRC-16, or CRC-CCITT
                 * calculation. Reference section 40.2.3 "CRC Data Input Register (CRCDIR/CRCDIR_BY)" in the RA6M3
                 * manual R01UH0886EJ0100. Write an 8-bit value to the input register of the CRC Calculator */
                R_CRC->CRCDIR_BY = *p_data;
                p_data           = (p_data + 1UL);
            }

            break;
        }

        default:
        {
            const uint32_t * p_data = inputBuffer;

            for (i = (uint32_t) 0; i < (length / 4); i++)
            {
                /* Write a 32-bit value to the input register of the CRC Calculator */
                R_CRC->CRCDIR = *p_data;
                p_data        = p_data + 1;
            }

            break;
        }
    }

    /* Return the calculated value */
    *calculatedValue = crc_calculated_value_get(p_instance_ctrl);
}

#if CRC_CFG_PARAM_CHECKING_ENABLE

/*******************************************************************************************************************//**
 * Validates the configuration arguments for illegal combinations or options.
 *
 * @param[in]  p_cfg                   Pointer to configuration structure
 *
 * @retval FSP_SUCCESS                     No configuration errors detected
 * @retval FSP_ERR_ASSERTION               An input argument is invalid.
 * @retval FSP_ERR_UNSUPPORTED             Hardware not support this feature.
 **********************************************************************************************************************/
static fsp_err_t r_crc_open_cfg_check (crc_cfg_t const * const p_cfg)
{
    FSP_ASSERT(NULL != p_cfg);

 #if !BSP_FEATURE_CRC_HAS_CRCCR0_LMS

    /* Verify the configuration bit order */
    FSP_ERROR_RETURN(CRC_BIT_ORDER_LMS_LSB == p_cfg->bit_order, FSP_ERR_UNSUPPORTED);
 #endif

    /* Verify the configuration polynomial */
    FSP_ERROR_RETURN((1 << p_cfg->polynomial) & BSP_FEATURE_CRC_POLYNOMIAL_MASK, FSP_ERR_UNSUPPORTED);

    return FSP_SUCCESS;
}

#endif
