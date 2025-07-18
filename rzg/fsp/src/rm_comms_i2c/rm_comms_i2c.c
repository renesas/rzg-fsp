/*
* Copyright (c) 2020 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/***********************************************************************************************************************
 * Includes
 **********************************************************************************************************************/
#include "rm_comms_i2c.h"

/***********************************************************************************************************************
 * Macro definitions
 **********************************************************************************************************************/

/* Definitions of Open flag */
#define RM_COMMS_I2C_OPEN    (0x322C3321UL) // Open state

/***********************************************************************************************************************
 * Typedef definitions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Private function prototypes
 **********************************************************************************************************************/

/**********************************************************************************************************************
 * Extern functions
 **********************************************************************************************************************/
extern fsp_err_t rm_comms_i2c_bus_read(rm_comms_ctrl_t * const p_api_ctrl, uint8_t * const p_dest,
                                       uint32_t const bytes);
extern fsp_err_t rm_comms_i2c_bus_write(rm_comms_ctrl_t * const p_api_ctrl, uint8_t * const p_src,
                                        uint32_t const bytes);
extern fsp_err_t rm_comms_i2c_bus_write_read(rm_comms_ctrl_t * const            p_api_ctrl,
                                             rm_comms_write_read_params_t const write_read_params);

/***********************************************************************************************************************
 * Private global variables
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Global variables
 **********************************************************************************************************************/
rm_comms_api_t const g_comms_on_comms_i2c =
{
    .open      = RM_COMMS_I2C_Open,
    .read      = RM_COMMS_I2C_Read,
    .write     = RM_COMMS_I2C_Write,
    .writeRead = RM_COMMS_I2C_WriteRead,
    .close     = RM_COMMS_I2C_Close,
};

/*******************************************************************************************************************//**
 * @addtogroup RM_COMMS_I2C
 * @{
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Functions
 **********************************************************************************************************************/

/*******************************************************************************************************************//**
 * @brief Opens and configures the Communications Middle module. Implements @ref rm_comms_api_t::open.
 *
 * Example:
 * @snippet rm_comms_i2c_example.c RM_COMMS_I2C_Open
 *
 * @retval FSP_SUCCESS                  Communications Middle module successfully configured.
 * @retval FSP_ERR_ASSERTION            Null pointer, or one or more configuration options is invalid.
 * @retval FSP_ERR_ALREADY_OPEN         Module is already open.  This module can only be opened once.
 **********************************************************************************************************************/
fsp_err_t RM_COMMS_I2C_Open (rm_comms_ctrl_t * const p_api_ctrl, rm_comms_cfg_t const * const p_cfg)
{
    rm_comms_i2c_instance_ctrl_t    * p_ctrl = (rm_comms_i2c_instance_ctrl_t *) p_api_ctrl;
    rm_comms_i2c_bus_extended_cfg_t * p_bus;

#if RM_COMMS_I2C_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(NULL != p_ctrl);
    FSP_ASSERT(NULL != p_cfg);
    FSP_ERROR_RETURN(RM_COMMS_I2C_OPEN != p_ctrl->open, FSP_ERR_ALREADY_OPEN);
#endif

    p_ctrl->p_cfg = p_cfg;
    p_bus         = (rm_comms_i2c_bus_extended_cfg_t *) p_cfg->p_extend;

#if RM_COMMS_I2C_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(NULL != p_bus);
    FSP_ASSERT(NULL != p_bus->p_driver_instance);
#endif

    /* Set Bus configuration */
    p_ctrl->p_bus = p_bus;

#if RM_COMMS_I2C_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(NULL != p_cfg->p_lower_level_cfg);
 #if BSP_CFG_RTOS
    if (NULL == p_bus->p_blocking_semaphore)
    {
        FSP_ASSERT(NULL == p_bus->p_bus_recursive_mutex);
    }
 #endif
#endif

    /* Set lower level driver configuration */
    p_ctrl->p_lower_level_cfg = (void *) p_cfg->p_lower_level_cfg;

    /* Set callback and context */
    p_ctrl->p_callback = p_cfg->p_callback;
    p_ctrl->p_context  = p_cfg->p_context;

    /* Set open flag */
    p_ctrl->open = RM_COMMS_I2C_OPEN;

    return FSP_SUCCESS;
}

/*******************************************************************************************************************//**
 * @brief Disables specified Communications Middle module. Implements @ref rm_comms_api_t::close.
 *
 * @retval FSP_SUCCESS              Successfully closed.
 * @retval FSP_ERR_ASSERTION        Null pointer passed as a parameter.
 * @retval FSP_ERR_NOT_OPEN         Module is not open.
 **********************************************************************************************************************/
fsp_err_t RM_COMMS_I2C_Close (rm_comms_ctrl_t * const p_api_ctrl)
{
    rm_comms_i2c_instance_ctrl_t * p_ctrl = (rm_comms_i2c_instance_ctrl_t *) p_api_ctrl;

#if RM_COMMS_I2C_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(NULL != p_ctrl);
    FSP_ERROR_RETURN(RM_COMMS_I2C_OPEN == p_ctrl->open, FSP_ERR_NOT_OPEN);
#endif

    /* Clear current device on bus */
    p_ctrl->p_bus->p_current_ctrl = NULL;

    /* Clear open flag */
    p_ctrl->open = 0;

    return FSP_SUCCESS;
}

/*******************************************************************************************************************//**
 * @brief Performs a read from the I2C device.
 * Implements @ref rm_comms_api_t::read.
 *
 * @retval FSP_SUCCESS              Successfully data decoded.
 * @retval FSP_ERR_ASSERTION        Null pointer passed as a parameter.
 * @retval FSP_ERR_NOT_OPEN         Module is not open.
 **********************************************************************************************************************/
fsp_err_t RM_COMMS_I2C_Read (rm_comms_ctrl_t * const p_api_ctrl, uint8_t * const p_dest, uint32_t const bytes)
{
    fsp_err_t err = FSP_SUCCESS;
    rm_comms_i2c_instance_ctrl_t * p_ctrl = (rm_comms_i2c_instance_ctrl_t *) p_api_ctrl;

#if RM_COMMS_I2C_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(NULL != p_ctrl);
    FSP_ASSERT(NULL != p_dest);
    FSP_ERROR_RETURN(RM_COMMS_I2C_OPEN == p_ctrl->open, FSP_ERR_NOT_OPEN);
#endif

    /* Use I2C driver to read data */
    err = rm_comms_i2c_bus_read(p_ctrl, p_dest, bytes);
    FSP_ERROR_RETURN(FSP_SUCCESS == err, err);

    return FSP_SUCCESS;
}

/*******************************************************************************************************************//**
 * @brief Performs a write from the I2C device.
 * Implements @ref rm_comms_api_t::write.
 *
 * @retval FSP_SUCCESS              Successfully writing data .
 * @retval FSP_ERR_ASSERTION        Null pointer passed as a parameter.
 * @retval FSP_ERR_NOT_OPEN         Module is not open.
 **********************************************************************************************************************/
fsp_err_t RM_COMMS_I2C_Write (rm_comms_ctrl_t * const p_api_ctrl, uint8_t * const p_src, uint32_t const bytes)
{
    fsp_err_t err = FSP_SUCCESS;
    rm_comms_i2c_instance_ctrl_t * p_ctrl = (rm_comms_i2c_instance_ctrl_t *) p_api_ctrl;

#if RM_COMMS_I2C_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(NULL != p_ctrl);
    FSP_ASSERT(NULL != p_src);
    FSP_ERROR_RETURN(RM_COMMS_I2C_OPEN == p_ctrl->open, FSP_ERR_NOT_OPEN);
#endif

    /* Use I2C driver to write data */
    err = rm_comms_i2c_bus_write(p_ctrl, p_src, bytes);
    FSP_ERROR_RETURN(FSP_SUCCESS == err, err);

    return FSP_SUCCESS;
}

/*******************************************************************************************************************//**
 * @brief Performs a write to, then a read from the I2C device.
 * Implements @ref rm_comms_api_t::writeRead.
 *
 * @retval FSP_SUCCESS              Successfully data decoded.
 * @retval FSP_ERR_ASSERTION        Null pointer passed as a parameter.
 * @retval FSP_ERR_NOT_OPEN         Module is not open.
 **********************************************************************************************************************/
fsp_err_t RM_COMMS_I2C_WriteRead (rm_comms_ctrl_t * const            p_api_ctrl,
                                  rm_comms_write_read_params_t const write_read_params)
{
    fsp_err_t err = FSP_SUCCESS;
    rm_comms_i2c_instance_ctrl_t * p_ctrl = (rm_comms_i2c_instance_ctrl_t *) p_api_ctrl;

#if RM_COMMS_I2C_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(NULL != p_ctrl);
    FSP_ASSERT(NULL != write_read_params.p_src);
    FSP_ASSERT(NULL != write_read_params.p_dest);
    FSP_ERROR_RETURN(RM_COMMS_I2C_OPEN == p_ctrl->open, FSP_ERR_NOT_OPEN);
#endif

    /* Write to register and read back data after restart. */
    err = rm_comms_i2c_bus_write_read(p_ctrl, write_read_params);
    FSP_ERROR_RETURN(FSP_SUCCESS == err, err);

    return FSP_SUCCESS;
}

/*******************************************************************************************************************//**
 * @} (end addtogroup COMM_I2C_BUS)
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Private Functions
 **********************************************************************************************************************/

/*******************************************************************************************************************//**
 * Internal Communications Middleware private function.
 **********************************************************************************************************************/
