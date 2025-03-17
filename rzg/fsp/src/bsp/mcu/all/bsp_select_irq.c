/*
* Copyright (c) 2020 - 2024 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/**********************************************************************************************************************
 * File Name    : bsp_select_irq.c
 * Version      : 1.00
 * Description  : bsp_select_irq source code
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Includes   <System Includes> , "Project Includes"
 *********************************************************************************************************************/
#include "bsp_api.h"

/**********************************************************************************************************************
 * Macro definitions
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Typedef definitions
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Exported global variables (to be accessed by other files)
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Private global variables and functions
 *********************************************************************************************************************/

#define BSP_PRV_SELECT_IRQ_MIN         (353)
#define BSP_PRV_SELECT_IRQ_MAX         (BSP_PRV_SELECT_IRQ_MIN + 127)

#define BSP_PRV_SELECT_IRQ_PER_REG     (3U)
#define BSP_PRV_SELECT_IRQ_PER_BIT     (10U)

#define BSP_PRV_SELECT_IRQSEL_MASK     (0x3FFU)
#define BSP_PRV_SELECT_IRQSEL_CLEAR    (0x3FFU)

/******************************************************************************************************************//**
 * @addtogroup BSP_MCU
 *
 * @{
 *********************************************************************************************************************/

#if defined(BSP_FEATURE_ICU_HAS_SELECT_INT)

/******************************************************************************************************************//**
 * Set SELECT Interrupt for Cortex-M33.
 *
 * @param[in]  irq          The target SPI number
 * @param[in]  irqsel       The source of the event signal
 *
 * @retval     FSP_SUCCESS
 *********************************************************************************************************************/
fsp_err_t R_BSP_CM33SelectIrqSet (IRQn_Type irq, IRQSELn_Type irqsel)
{
    volatile uint32_t * intm33selx_addr = &R_INTC->INTM33SEL0;
    uint32_t            intm33selx_value;
    uint32_t            nregs;
    uint32_t            shift;
 #if BSP_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(irq < BSP_PRV_SELECT_IRQ_MIN);
    FSP_ASSERT(BSP_PRV_SELECT_IRQ_MAX < irq);
 #endif

    FSP_CRITICAL_SECTION_DEFINE;

    nregs = ((uint32_t) (irq - BSP_PRV_SELECT_IRQ_MIN)) / BSP_PRV_SELECT_IRQ_PER_REG;
    shift = (((uint32_t) (irq - BSP_PRV_SELECT_IRQ_MIN)) % BSP_PRV_SELECT_IRQ_PER_REG) * BSP_PRV_SELECT_IRQ_PER_BIT;

    intm33selx_addr += nregs;

    FSP_CRITICAL_SECTION_ENTER;

    /* Read original value */
    intm33selx_value = *intm33selx_addr;

    /* Clear specified field */
    intm33selx_value &= ~(BSP_PRV_SELECT_IRQSEL_MASK << shift);

    /* Set specified numnber */
    intm33selx_value |= (irqsel << shift);

    /* Write modified value */
    *intm33selx_addr = intm33selx_value;

    FSP_CRITICAL_SECTION_EXIT;

    return FSP_SUCCESS;
}

#endif

/** @} (end addtogroup BSP_MCU) */
