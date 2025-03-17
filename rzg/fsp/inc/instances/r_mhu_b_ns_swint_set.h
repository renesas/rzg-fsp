/*
* Copyright (c) 2020 - 2024 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

#ifndef R_MHU_B_NS_SWINT_SET_H
#define R_MHU_B_NS_SWINT_SET_H

/*******************************************************************************************************************//**
 * @addtogroup MHU_B_NS_SWINT_SET
 * @{
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Includes
 **********************************************************************************************************************/
#include "r_mhu_ns_swint_set_api.h"
#include "r_mhu_b_ns_swint_set_cfg.h"

/* Common macro for FSP header files. There is also a corresponding FSP_FOOTER macro at the end of this file. */
FSP_HEADER

/***********************************************************************************************************************
 * Macro definitions
 **********************************************************************************************************************/

/*************************************************************************************************
 * Type defines
 *************************************************************************************************/

/** Channel control block. DO NOT INITIALIZE.  Initialization occurs when @ref mhu_ns_swint_set_api_t::open is called. */
typedef struct st_mhu_b_ns_swint_set_instance_ctrl
{
    uint32_t open;                         ///< Indicates whether the open() API has been successfully called.
    mhu_ns_swint_set_cfg_t const * p_cfg;  ///< Pointer to instance configuration
    R_MHU_SWINT0_Type            * p_regs; ///< Base register for this channel

    uint32_t channel;                      ///< channel
} mhu_b_ns_swint_set_instance_ctrl_t;

/**********************************************************************************************************************
 * Exported global variables
 **********************************************************************************************************************/

/** @cond INC_HEADER_DEFS_SEC */
/** Filled in Interface API structure for this Instance. */
extern const mhu_ns_swint_set_api_t g_mhu_ns_swint_set_on_mhu_b_ns_swint_set;

/** @endcond */

/***********************************************************************************************************************
 * Public APIs
 **********************************************************************************************************************/
fsp_err_t R_MHU_B_NS_SWINT_SET_Open(mhu_ns_swint_set_ctrl_t * p_ctrl, mhu_ns_swint_set_cfg_t const * const p_cfg);

fsp_err_t R_MHU_B_NS_SWINT_SET_InterruptSet(mhu_ns_swint_set_ctrl_t * const p_ctrl);

fsp_err_t R_MHU_B_NS_SWINT_SET_Close(mhu_ns_swint_set_ctrl_t * const p_ctrl);

/*******************************************************************************************************************//**
 * @} (end ingroup MHU_B_NS_SWINT_SET)
 **********************************************************************************************************************/

/** Common macro for FSP header files. There is also a corresponding FSP_HEADER macro at the top of this file. */
FSP_FOOTER

#endif
