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

/**********************************************************************************************************************
 * File Name    : accctl_iodefine.h
 * Version      : 1.00
 * Description  : IO define file for accctl.
 *********************************************************************************************************************/

/* ================================================================================================================= */
/* ================                              Device Specific Cluster Section                              ====== */
/* ================================================================================================================= */

/* ================================================================================================================= */
/* ================                            Device Specific Peripheral Section                             ====== */
/* ================================================================================================================= */

#ifndef ACCCTL_IODEFINE_H
#define ACCCTL_IODEFINE_H

typedef struct                         /*!< R_ACCCTL_Type Structure                                                     */
{
    __IOM uint32_t SYS_SLVACCCTL0;
    __IOM uint32_t SYS_SLVACCCTL1;
    __IOM uint32_t SYS_SLVACCCTL2;
    __IOM uint32_t SYS_SLVACCCTL3;
    __IOM uint32_t SYS_SLVACCCTL4;
    __IOM uint32_t SYS_SLVACCCTL5;
    __IOM uint32_t SYS_SLVACCCTL6;
    __IOM uint32_t SYS_SLVACCCTL7;
    __IOM uint32_t SYS_SLVACCCTL8;
    __IOM uint32_t SYS_SLVACCCTL9;
    __IOM uint32_t SYS_SLVACCCTL10;
    __IOM uint32_t SYS_SLVACCCTL11;
    __IOM uint32_t SYS_SLVACCCTL12;
    __IOM uint32_t SYS_SLVACCCTL13;
    __IOM uint32_t SYS_SLVACCCTL14;
    __IOM uint32_t SYS_SLVACCCTL15;
} R_ACCCTL_Type;                       /*!<                                                                             */

/* ================================================================================================================= */
/* ================                          Device Specific Peripheral Address Map                           ====== */
/* ================================================================================================================= */

#define R_ACCCTL_BASE_S    0x51020100  /* Access Control(Secure)*/

/* ================================================================================================================= */
/* ================                                  Peripheral declaration                                   ====== */
/* ================================================================================================================= */

#define R_ACCCTL_S    ((R_ACCCTL_Type *) R_ACCCTL_BASE_S)

#endif                                 /* ACCCTL_IODEFINE_H */
