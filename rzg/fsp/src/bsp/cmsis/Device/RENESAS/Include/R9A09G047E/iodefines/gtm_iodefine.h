/*
* Copyright (c) 2020 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/**********************************************************************************************************************
 * File Name    : gtm_iodefine.h
 * Version      : 1.00
 * Description  : IO define file for gtm.
 *********************************************************************************************************************/

/* ================================================================================================================= */
/* ================                              Device Specific Cluster Section                              ====== */
/* ================================================================================================================= */

/* ================================================================================================================= */
/* ================                            Device Specific Peripheral Section                             ====== */
/* ================================================================================================================= */

#ifndef GTM_IODEFINE_H
#define GTM_IODEFINE_H

typedef struct
{
    union
    {
        __IOM uint32_t OSTMnCMP;
        struct
        {
            __IOM uint32_t OSTMnCMP : 32;
        } OSTMnCMP_b;
    };

    union
    {
        __IM uint32_t OSTMnCNT;
        struct
        {
            __IM uint32_t OSTMnCNT : 32;
        } OSTMnCNT_b;
    };

    __IM uint8_t RESERVED[8];
    union
    {
        __IM uint8_t OSTMnTE;
        struct
        {
            __IM uint8_t OSTMnTE : 1;
            uint8_t              : 7;
        } OSTMnTE_b;
    };

    __IM uint8_t RESERVED1[3];
    union
    {
        __IOM uint8_t OSTMnTS;
        struct
        {
            __OM uint8_t OSTMnTS : 1;
            uint8_t              : 7;
        } OSTMnTS_b;
    };

    __IM uint8_t RESERVED2[3];
    union
    {
        __IOM uint8_t OSTMnTT;
        struct
        {
            __OM uint8_t OSTMnTT : 1;
            uint8_t              : 7;
        } OSTMnTT_b;
    };

    __IM uint8_t RESERVED3[7];
    union
    {
        __IOM uint8_t OSTMnCTL;
        struct
        {
            __IOM uint8_t OSTMnMD0 : 1;
            __IOM uint8_t OSTMnMD1 : 1;
            uint8_t                : 6;
        } OSTMnCTL_b;
    };
} R_GTM0_Type;

/* =========================================================================================================================== */
/* ================                          Device Specific Peripheral Address Map                           ================ */
/* =========================================================================================================================== */

#define R_GTM0_BASE    0x41800000
#define R_GTM1_BASE    0x41801000
#define R_GTM2_BASE    0x44000000
#define R_GTM3_BASE    0x44001000
#define R_GTM4_BASE    0x42C00000
#define R_GTM5_BASE    0x42C01000
#define R_GTM6_BASE    0x42C02000
#define R_GTM7_BASE    0x42C03000

/* =========================================================================================================================== */
/* ================                                  Peripheral declaration                                   ================ */
/* =========================================================================================================================== */

#define R_GTM0    ((R_GTM0_Type *) R_GTM0_BASE)
#define R_GTM1    ((R_GTM0_Type *) R_GTM1_BASE)
#define R_GTM2    ((R_GTM0_Type *) R_GTM2_BASE)
#define R_GTM3    ((R_GTM0_Type *) R_GTM3_BASE)
#define R_GTM4    ((R_GTM0_Type *) R_GTM4_BASE)
#define R_GTM5    ((R_GTM0_Type *) R_GTM5_BASE)
#define R_GTM6    ((R_GTM0_Type *) R_GTM6_BASE)
#define R_GTM7    ((R_GTM0_Type *) R_GTM7_BASE)

#endif
