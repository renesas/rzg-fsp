/***********************************************************************************************************************
 * Copyright [2020-2021] Renesas Electronics Corporation and/or its affiliates.  All Rights Reserved.
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

#ifndef R_MHU_NS_SWINT_GET_H
#define R_MHU_NS_SWINT_GET_H

/*******************************************************************************************************************//**
 * @addtogroup MHU_NS_SWINT_GET
 * @{
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Includes
 **********************************************************************************************************************/
#include "r_mhu_ns_swint_get_api.h"

/* Common macro for FSP header files. There is also a corresponding FSP_FOOTER macro at the end of this file. */
FSP_HEADER

/***********************************************************************************************************************
 * Macro definitions
 **********************************************************************************************************************/

#define MHU_NS_SWINT_GET_CODE_VERSION_MAJOR    (1U)
#define MHU_NS_SWINT_GET_CODE_VERSION_MINOR    (0U)

/*************************************************************************************************
 * Type defines
 *************************************************************************************************/

/** Channel control block. DO NOT INITIALIZE.  Initialization occurs when @ref mhu_ns_swint_get_api_t::open is called. */
typedef struct st_mhu_ns_swint_get_instance_ctrl
{
    uint32_t open;                         ///< Indicates whether the open() API has been successfully called.
    mhu_ns_swint_get_cfg_t const * p_cfg;  ///< Pointer to instance configuration
    R_MHU_SWINT0_Type            * p_regs; ///< Base register for this channel

    uint32_t channel;                      ///< channel

#if BSP_TZ_SECURE_BUILD
    bool callback_is_secure;               ///< p_callback is in secure memory
#endif

    /* Pointer to callback and optional working memory */
    void (* p_callback)(mhu_ns_swint_get_callback_args_t *);
    mhu_ns_swint_get_callback_args_t * p_callback_memory; // Pointer to non-secure memory that can be used to pass arguments to a callback in non-secure memory.
    void const * p_context;                               // Pointer to context to be passed into callback function
} mhu_ns_swint_get_instance_ctrl_t;

/**********************************************************************************************************************
 * Exported global variables
 **********************************************************************************************************************/

/** @cond INC_HEADER_DEFS_SEC */
/** Filled in Interface API structure for this Instance. */
extern const mhu_ns_swint_get_api_t g_mhu_ns_swint_get_on_mhu_ns_swint_get;

/** @endcond */

/***********************************************************************************************************************
 * Public APIs
 **********************************************************************************************************************/
fsp_err_t R_MHU_NS_SWINT_GET_Open(mhu_ns_swint_get_ctrl_t * p_ctrl, mhu_ns_swint_get_cfg_t const * const p_cfg);

fsp_err_t R_MHU_NS_SWINT_GET_Close(mhu_ns_swint_get_ctrl_t * const p_ctrl);

fsp_err_t R_MHU_NS_SWINT_GET_VersionGet(fsp_version_t * p_version);

fsp_err_t R_MHU_NS_SWINT_GET_CallbackSet(mhu_ns_swint_get_ctrl_t * const p_api_ctrl,
                                         void (                        * p_callback)(
                                             mhu_ns_swint_get_callback_args_t *),
                                         void const * const                       p_context,
                                         mhu_ns_swint_get_callback_args_t * const p_callback_memory);

void R_MHU_NS_SWINT_GET_IsrSub(uint32_t irq);

/*******************************************************************************************************************//**
 * @} (end ingroup MHU_NS_SWINT_GET)
 **********************************************************************************************************************/

/** Common macro for FSP header files. There is also a corresponding FSP_HEADER macro at the top of this file. */
FSP_FOOTER

#endif
