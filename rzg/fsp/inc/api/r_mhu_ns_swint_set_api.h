/***********************************************************************************************************************
 * Copyright [2020-2022] Renesas Electronics Corporation and/or its affiliates.  All Rights Reserved.
 *
 * This software and documentation are supplied by Renesas Electronics Corporation and/or its affiliates and may only
 * be used with products of Renesas Electronics Corp. and its affiliates ("Renesas").  No other uses are authorized.
 * Renesas products are sold pursuant to Renesas terms and conditions of sale.  Purchasers are solely responsible for
 * the selection and use of Renesas products and Renesas assumes no liability.  No license, express or implied, to any
 * intellectual property right is granted by Renesas.  This software is protected under all applicable laws, including
 * copyright laws. Renesas reserves the right to change or discontinue this software and/or this documentation.
 * THE SOFTWARE AND DOCUMENTATION IS DELIVERED TO YOU "AS IS," AND RENESAS MAKES NO REPRESENTATIONS OR WARRANTIES, AND
 * TO THE FULLEST EXTENT PERMISSIBLE UNDER APPLICABLE LAW, DISCLAIMS ALL WARRANTIES, WHETHER EXPLICITLY OR IMPLICITLY,
 * INCLUDING WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, AND NONINFRINGEMENT, WITH RESPECT TO THE
 * SOFTWARE OR DOCUMENTATION.  RENESAS SHALL HAVE NO LIABILITY ARISING OUT OF ANY SECURITY VULNERABILITY OR BREACH.
 * TO THE MAXIMUM EXTENT PERMITTED BY LAW, IN NO EVENT WILL RENESAS BE LIABLE TO YOU IN CONNECTION WITH THE SOFTWARE OR
 * DOCUMENTATION (OR ANY PERSON OR ENTITY CLAIMING RIGHTS DERIVED FROM YOU) FOR ANY LOSS, DAMAGES, OR CLAIMS WHATSOEVER,
 * INCLUDING, WITHOUT LIMITATION, ANY DIRECT, CONSEQUENTIAL, SPECIAL, INDIRECT, PUNITIVE, OR INCIDENTAL DAMAGES; ANY
 * LOST PROFITS, OTHER ECONOMIC DAMAGE, PROPERTY DAMAGE, OR PERSONAL INJURY; AND EVEN IF RENESAS HAS BEEN ADVISED OF THE
 * POSSIBILITY OF SUCH LOSS, DAMAGES, CLAIMS OR COSTS.
 **********************************************************************************************************************/

#ifndef R_MHU_NS_SWINT_SET_API_H
#define R_MHU_NS_SWINT_SET_API_H

/*******************************************************************************************************************//**
 * @ingroup RENESAS_INTERFACES
 * @defgroup MHU_NS_SWINT_SET_API MHU Interface (Software Interrupt Set)
 * @brief Interface for Message Handling Unit (Software Interrupt Set)
 *
 * @section MHU_NS_SWINT_SET_API_SUMMARY Summary
 * The Message Handling Unit (Software Interrupt Set) interface provides a common API for MHU HAL drivers.
 * The Message Handling Unit (Software Interrupt Set) interface supports:
 *        - Generate software interrupt via MHU.
 *
 * Implemented by:
 * - @ref MHU_NS_SWINT_SET
 *
 * @{
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Includes
 **********************************************************************************************************************/

/* Register definitions, common services and error codes. */
#include "bsp_api.h"

/* Common macro for FSP header files. There is also a corresponding FSP_FOOTER macro at the end of this file. */
FSP_HEADER

/**********************************************************************************************************************
 * Macro definitions
 **********************************************************************************************************************/

/**********************************************************************************************************************
 * Typedef definitions
 **********************************************************************************************************************/

/** MHU callback parameter definition */
typedef struct st_mhu_ns_swint_set_callback_args
{
    /** Placeholder for user data.  Set in @ref mhu_ns_swint_set_api_t::open function in @ref mhu_ns_swint_set_cfg_t. */
    void const * p_context;
    uint32_t     channel;              ///< Channel where the receive interrupt occurred.
} mhu_ns_swint_set_callback_args_t;

/** MHU configuration block */
typedef struct st_mhu_ns_swint_set_cfg
{
    /** Generic configuration */
    uint32_t channel;                  ///< Identifier recognizable by implementation

    /** Placeholder for user data.  Passed to the user callback in @ref timer_callback_args_t. */
    void const * p_context;
} mhu_ns_swint_set_cfg_t;

/** MHU control block.  Allocate an instance specific control block to pass into the MHU API calls.
 * @par Implemented as
 * - mhu_ns_swint_set_instance_ctrl_t
 */
typedef void mhu_ns_swint_set_ctrl_t;

/** Interface definition for MHU */
typedef struct st_mhu_ns_swint_set_api
{
    /** Opens the MHU driver and initializes the hardware.
     * @par Implemented as
     * - @ref R_MHU_NS_SWINT_SET_Open()
     *
     * @param[in] p_ctrl    Pointer to control block. Must be declared by user. Elements are set here.
     * @param[in] p_cfg     Pointer to configuration structure.
     */
    fsp_err_t (* open)(mhu_ns_swint_set_ctrl_t * const p_ctrl, mhu_ns_swint_set_cfg_t const * const p_cfg);

    /** Performs a send operation on an MHU device.
     * @par Implemented as
     * - @ref R_MHU_NS_SWINT_SET_InterruptSet()
     *
     * @param[in] p_ctrl    Pointer to control block set in mhu_ns_swint_set_api_t::open call.
     */
    fsp_err_t (* interruptSet)(mhu_ns_swint_set_ctrl_t * const p_ctrl);

    /** Closes the driver and releases the MHU device.
     * @par Implemented as
     * - @ref R_MHU_NS_SWINT_SET_Close()
     *
     * @param[in] p_ctrl    Pointer to control block set in mhu_ns_swint_set_api_t::open call.
     */
    fsp_err_t (* close)(mhu_ns_swint_set_ctrl_t * const p_ctrl);
} mhu_ns_swint_set_api_t;

/** This structure encompasses everything that is needed to use an instance of this interface. */
typedef struct st_mhu_ns_swint_set_instance
{
    mhu_ns_swint_set_ctrl_t      * p_ctrl; ///< Pointer to the control structure for this instance
    mhu_ns_swint_set_cfg_t const * p_cfg;  ///< Pointer to the configuration structure for this instance
    mhu_ns_swint_set_api_t const * p_api;  ///< Pointer to the API structure for this instance
} mhu_ns_swint_set_instance_t;

/******************************************************************************************************************//**
 * @} (end addtogroup MHU_NS_SWINT_SET_API)
 *********************************************************************************************************************/

/* Common macro for FSP header files. There is also a corresponding FSP_HEADER macro at the top of this file. */
FSP_FOOTER

#endif
