/*
* Copyright (c) 2020 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/*******************************************************************************************************************//**
 * @addtogroup INTC_NMI
 * @{
 **********************************************************************************************************************/

#ifndef R_INTC_NMI_H
#define R_INTC_NMI_H

/***********************************************************************************************************************
 * Includes
 **********************************************************************************************************************/
#include "bsp_api.h"
#include "r_external_irq_api.h"

/* Common macro for FSP header files. There is also a corresponding FSP_FOOTER macro at the end of this file. */
FSP_HEADER

/***********************************************************************************************************************
 * Macro definitions
 **********************************************************************************************************************/

/*********************************************************************************************************************
 * Typedef definitions
 *********************************************************************************************************************/

/** INTC_NMI private control block. DO NOT MODIFY. Initialization occurs when R_INTC_NMI_ExternalIrqOpen is called. */
typedef struct st_intc_nmi_instance_ctrl
{
    uint32_t  open;                                             ///< Used to determine if channel control block is in use
    IRQn_Type irq;                                              ///< NVIC Interrupt number
    uint8_t   channel;                                          ///< Channel

#if BSP_TZ_SECURE_BUILD
    external_irq_callback_args_t * p_callback_memory;           // Pointer to non-secure memory that can be used to pass arguments to a callback in non-secure memory.
#endif
    void (* p_callback)(external_irq_callback_args_t * p_args); // Pointer to callback that is called when an edge is detected on the external irq pin.

    /** Placeholder for user data.  Passed to the user callback in ::external_irq_callback_args_t. */
    void const * p_context;
} intc_nmi_instance_ctrl_t;

/**********************************************************************************************************************
 * Exported global variables
 **********************************************************************************************************************/

/** @cond INC_HEADER_DEFS_SEC */
/** Filled in Interface API structure for this Instance. */
extern const external_irq_api_t g_external_irq_on_intc_nmi;

/** @endcond */

/***********************************************************************************************************************
 * Public APIs
 **********************************************************************************************************************/
fsp_err_t R_INTC_NMI_ExternalIrqOpen(external_irq_ctrl_t * const p_api_ctrl, external_irq_cfg_t const * const p_cfg);

fsp_err_t R_INTC_NMI_ExternalIrqEnable(external_irq_ctrl_t * const p_api_ctrl);

fsp_err_t R_INTC_NMI_ExternalIrqDisable(external_irq_ctrl_t * const p_api_ctrl);

fsp_err_t R_INTC_NMI_ExternalIrqCallbackSet(external_irq_ctrl_t * const p_api_ctrl,
                                            void (                    * p_callback)(
                                                external_irq_callback_args_t *),
                                            void const * const                   p_context,
                                            external_irq_callback_args_t * const p_callback_memory);

fsp_err_t R_INTC_NMI_ExternalIrqClose(external_irq_ctrl_t * const p_api_ctrl);

/*******************************************************************************************************************//**
 * @} (end defgroup INTC_NMI)
 **********************************************************************************************************************/

/* Common macro for FSP header files. There is also a corresponding FSP_HEADER macro at the top of this file. */
FSP_FOOTER

#endif                                 // R_INTC_NMI_H
