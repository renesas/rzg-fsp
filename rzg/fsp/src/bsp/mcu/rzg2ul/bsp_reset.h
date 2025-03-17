/*
* Copyright (c) 2020 - 2024 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/**********************************************************************************************************************
 * File Name    : bsp_reset.h
 * Version      : 1.00
 * Description  : bsp_reset header
 *********************************************************************************************************************/

#ifndef BSP_RESET_H
#define BSP_RESET_H

/**********************************************************************************************************************
 * Macro definitions
 *********************************************************************************************************************/
#define BSP_PRV_SCB_AIRCR_VECTKEY    (0x5FAUL)

#define R_BSP_SECURE_VECTOR_SET(vector)    {R_SYSC->SYS_CM33_CFG2 = (vector);}

#define R_BSP_NVIC_CM33_RESET()            {SCB->AIRCR =                                                           \
                                                (uint32_t) ((BSP_PRV_SCB_AIRCR_VECTKEY << SCB_AIRCR_VECTKEY_Pos) | \
                                                            (SCB->AIRCR & SCB_AIRCR_PRIGROUP_Msk) |                \
                                                            SCB_AIRCR_SYSRESETREQ_Msk);                            \
}

#define R_BSP_WAIT_CM33_RESET()            {while ((R_SYSC->SYS_LP_CM33CTL0 & R_SYSC_SYS_LP_CM33CTL0_SYSRESETREQ_Msk) == \
                                                   0U)                                                                   \
                                            { /* wait */};                                                               \
}

#define R_BSP_CM33_WARMRESET()             {R_BSP_NVIC_CM33_RESET(); \
                                            R_BSP_WAIT_CM33_RESET(); \
                                            R_BSP_IM33_DISABLE();    \
}

#define BSP_SLEEP_SET_SLEEP_REQ()      /* DO NOTHING */
#define BSP_SLEEP_CLEAR_SLEEP_REQ()    /* DO NOTHING */

/**********************************************************************************************************************
 * Typedef definitions
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Exported global variables
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Exported global functions (to be accessed by other files)
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * @addtogroup BSP_MPU_RZG2UL
 * @{
 *********************************************************************************************************************/

/** @} (end addtogroup BSP_MPU_RZG2UL) */

#endif                                 /* BSP_RESET_H */
