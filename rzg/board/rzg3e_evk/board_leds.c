/*
* Copyright (c) 2020 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/***********************************************************************************************************************
 * File Name    : board_leds.c
 * Description  : This module has information about the LEDs on this board.
 **********************************************************************************************************************/

/*******************************************************************************************************************//**
 * @addtogroup BOARD_RZG3E_EVK_LEDS
 *
 * @{
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Includes
 **********************************************************************************************************************/
#include "bsp_api.h"
#if defined(BOARD_RZG3E_EVK)

/***********************************************************************************************************************
 * Macro definitions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Typedef definitions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Private global variables and functions
 *********************************************************************************************************************/

/** Array of Pmod LED to be used on bottom row of Pmod1. */
static const uint16_t g_bsp_prv_leds[] =
{
    (uint16_t) BSP_IO_PORT_06_PIN_05,  ///< LD0 (P65)
    (uint16_t) BSP_IO_PORT_05_PIN_06,  ///< LD1 (P56)
    (uint16_t) BSP_IO_PORT_06_PIN_06,  ///< LD2 (P66)
    (uint16_t) BSP_IO_PORT_06_PIN_04,  ///< LD3 (P64)
};

/***********************************************************************************************************************
 * Exported global variables (to be accessed by other files)
 **********************************************************************************************************************/

/** Structure with LED information for this board. */

const bsp_leds_t g_bsp_leds =
{
    .led_count = (uint16_t) ((sizeof(g_bsp_prv_leds) / sizeof(g_bsp_prv_leds[0]))),
    .p_leds    = &g_bsp_prv_leds[0]
};

/***********************************************************************************************************************
 * Exported global variables (to be accessed by other files)
 **********************************************************************************************************************/

#endif                                 /* BOARD_RZG3E_EVK */

/** @} (end addtogroup BOARD_RZG3E_EVK_LEDS) */
