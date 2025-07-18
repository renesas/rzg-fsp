/*
* Copyright (c) 2020 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

#ifndef BSP_MCU_API_H
#define BSP_MCU_API_H

/** Common macro for FSP header files. There is also a corresponding FSP_FOOTER macro at the end of this file. */
FSP_HEADER
fsp_err_t R_BSP_GroupIrqWrite(bsp_grp_irq_t irq, void (* p_callback)(bsp_grp_irq_t irq));
void      R_BSP_SoftwareDelay(uint32_t delay, bsp_delay_units_t units);
uint32_t  R_BSP_SlaveAddressConversion(uint32_t original_address);
void      R_BSP_SystemResetStatusGet(void);
void      R_BSP_SystemResetStatusClear(const bsp_system_reset_signal_t signal);
fsp_err_t R_BSP_ClockSelectorSet(fsp_priv_clock_selector_t selector, uint32_t clock_sel);
fsp_err_t R_BSP_ClockDividerSet(fsp_priv_clock_divider_t divider, uint32_t clock_div);

/** Common macro for FSP header files. There is also a corresponding FSP_HEADER macro at the top of this file. */
FSP_FOOTER

#endif
