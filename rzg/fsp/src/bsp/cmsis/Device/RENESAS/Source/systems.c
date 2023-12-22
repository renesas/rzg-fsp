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

/**********************************************************************************************************************
 * File Name    : systems.c
 * Version      : 1.00
 * Description  : Initialize the MCU and the runtime environment for Secure.
 *********************************************************************************************************************/

/*******************************************************************************************************************//**
 * @addtogroup BSP_MCU
 * @{
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Includes   <System Includes> , "Project Includes"
 **********************************************************************************************************************/
#include <string.h>
#include "bsp_api.h"
#include "../../../../mcu/all/bsp_irqs.h"
#include "../../../../mcu/all/bsp_clocks.h"
#include "../../../../mcu/all/bsp_security.h"

/***********************************************************************************************************************
 * Macro definitions
 **********************************************************************************************************************/
#if defined(__ICCARM__)
 #define BSP_PRV_SECURE_STACK_LIMIT    ((uint32_t) __section_begin(".s_stack"))
 #define BSP_PRV_SECURE_STACK_TOP      ((uint32_t) __section_end(".s_stack"))
#elif defined(__ARMCC_VERSION)
 #define BSP_PRV_STACK_LIMIT           ((uint32_t) &Image$$STACK$$ZI$$Base)
 #define BSP_PRV_STACK_TOP             ((uint32_t) &Image$$STACK$$ZI$$Base + \
                                        (uint32_t) &Image$$STACK$$ZI$$Length)
#elif defined(__GNUC__)
 #define BSP_PRV_SECURE_STACK_LIMIT    ((uint32_t) &__S_StackLimit)
 #define BSP_PRV_SECURE_STACK_TOP      ((uint32_t) &__S_StackTop)
#endif

/***********************************************************************************************************************
 * NVIC CM33 Reset
 *
 * @param
 **********************************************************************************************************************/
#define R_BSP_NVIC_CM33_RESET()     {SCB->AIRCR = (uint32_t) ((0x5FAUL << SCB_AIRCR_VECTKEY_Pos) |    \
                                                              (SCB->AIRCR & SCB_AIRCR_PRIGROUP_Msk) | \
                                                              SCB_AIRCR_SYSRESETREQ_Msk);             \
}

/***********************************************************************************************************************
 * Wait CM33 Reset
 *
 * @param
 **********************************************************************************************************************/
#ifndef R_BSP_WAIT_CM33_RESET
 #define R_BSP_WAIT_CM33_RESET()    {while ((R_SYSC->SYS_LP_CM33CTL0 & R_SYSC_SYS_LP_CM33CTL0_SYSRESETREQ_Msk) == 0U) \
                                     { /* wait */};                                                                   \
}
#endif

/***********************************************************************************************************************
 * Typedef definitions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Exported global variables (to be accessed by other files)
 **********************************************************************************************************************/

#if defined(__ARMCC_VERSION)
extern uint32_t Image$$BSS$$ZI$$Base;
extern uint32_t Image$$BSS$$ZI$$Length;
extern uint32_t Load$$DATA$$Base;
extern uint32_t Image$$DATA$$Base;
extern uint32_t Image$$DATA$$Length;
extern uint32_t Image$$STACK$$ZI$$Base;
extern uint32_t Image$$STACK$$ZI$$Length;
#elif defined(__GNUC__)

/* Generated by linker. */
extern uint32_t __S_StackLimit;
extern uint32_t __S_StackTop;
#elif defined(__ICCARM__)
 #pragma section=".s_stack"
#endif

extern void * __Secure_Vectors[];

extern void R_BSP_SecurityInit(void);
extern void Reset_Handler_S(void);

#if !BSP_NONSECURE_TRANSITION
extern void Reset_Handler_NS(void);

#endif

/***********************************************************************************************************************
 * Private global variables and functions
 **********************************************************************************************************************/
static void warm_reset_sub(void);
static void entry_function_sub(void);

/*******************************************************************************************************************//**
 * Initialize the MPU and the runtime environment.
 **********************************************************************************************************************/
void SystemInit_S (void)
{
/* Set the Secure VTOR to the vector table address based on the build. */
#if FSP_PRIV_TZ_USE_SECURE_REGS
    SCB->VTOR = (uint32_t) &__Secure_Vectors;
#endif

    /* Configure system clocks. */
    bsp_clock_init();

    /* Set the main stack pointer to BSP_PRV_SECURE_STACK_TOP */
    __set_MSP(BSP_PRV_SECURE_STACK_TOP);

    /* Use CM33 stack monitor. */
    __set_MSPLIM(BSP_PRV_SECURE_STACK_LIMIT);

    /* Initialize security features. */
    R_BSP_SecurityInit();

    /* Initialize trigger NVIC interrupts. */
    bsp_irq_cfg_s();

    /* Enter non-secure code */
#if BSP_NONSECURE_TRANSITION
    R_BSP_NonSecureEnter();
#else
    Reset_Handler_NS();
#endif
}

/*******************************************************************************************************************//**
 * In the Cortex-M33 CPU core of this device, the secure vector address must be set to SYS_CM33_CFG2
 * before WarmReset is executed.
 * Also, the non-secure vector address must be set to SYS_CM33_CFG3 before WarmReset is executed.
 * The Cortex-M33's program works on the assumption that the appropriate vector address values have been set
 * in SYS_CM33_CFG2 and SYS_CM33_CFG3 in the Cortex-A55 program.
 **********************************************************************************************************************/
__attribute__((naked)) void Warm_Reset_S (void)
{
    /* Set the main stack pointer to BSP_PRV_SECURE_STACK_TOP */
    __asm volatile ("msr msp, %0"
                    :
                    : "r" (BSP_PRV_SECURE_STACK_TOP)
                    :
                    );

    __asm volatile ("b.w %0"
                    :
                    : "i" (&warm_reset_sub)
                    :
                    );
}

static void warm_reset_sub (void)
{
    /* Set Secure vector address to SYSC */
    R_BSP_SECURE_VECTOR_SET((uint32_t) &__Secure_Vectors);

    /* CM33 reset */
    R_BSP_NVIC_CM33_RESET();

    /* Wait CM33 reset */
    R_BSP_WAIT_CM33_RESET();

    /* Disable IM33 */
    R_BSP_IM33_DISABLE();

    __asm volatile ("wfi");

    while (1)
    {
        ;
    }
}

/*******************************************************************************************************************//**
 * Entry function when debugging RAM load using a debugger
 **********************************************************************************************************************/
__attribute__((naked)) void Entry_Function_S (void)
{
    /* Set the main stack pointer to BSP_PRV_SECURE_STACK_TOP */
    __asm volatile ("msr msp, %0"
                    :
                    : "r" (BSP_PRV_SECURE_STACK_TOP)
                    :
                    );

    __asm volatile ("b.w %0"
                    :
                    : "i" (&entry_function_sub)
                    :
                    );
}

static void entry_function_sub (void)
{
    /* Set Secure vector address to SYSC */
    R_BSP_SECURE_VECTOR_SET((uint32_t) &__Secure_Vectors);

    __asm volatile ("b.w %0"
                    :
                    : "i" (&Reset_Handler_S)
                    :
                    );
}

/*******************************************************************************************************************//**
 * Same function as Warm_Reset_S. Used as an entry function at XSPI boot.
 **********************************************************************************************************************/
__attribute__((naked)) void XSPI_Boot_Entry (void)
{
    /* Set the main stack pointer to BSP_PRV_SECURE_STACK_TOP */
    __asm volatile ("msr msp, %0"
                    :
                    : "r" (BSP_PRV_SECURE_STACK_TOP)
                    :
                    );

    __asm volatile ("b.w %0"
                    :
                    : "i" (&entry_function_sub)
                    :
                    );
}

/** @} (end addtogroup BSP_MCU) */
