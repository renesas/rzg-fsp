/*
* Copyright (c) 2020 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/**********************************************************************************************************************
 * File Name    : cpg_iodefine.h
 * Version      : 1.00
 * Description  : IO define file for cpg.
 *********************************************************************************************************************/

/* =========================================================================================================================== */
/* ================                              Device Specific Cluster Section                              ================ */
/* =========================================================================================================================== */

/* =========================================================================================================================== */
/* ================                            Device Specific Peripheral Section                             ================ */
/* =========================================================================================================================== */

#ifndef CPG_IODEFINE_H
#define CPG_IODEFINE_H

typedef struct
{
    union
    {
        __IM uint32_t CPG_PLLCM33_MON;
        struct
        {
            __IM uint32_t PLLn_RESETB : 1;
            uint32_t                  : 3;
            __IM uint32_t PLLn_LOCK   : 1;
            uint32_t                  : 27;
        } CPG_PLLCM33_MON_b;
    };
    __IM uint8_t RESERVED[12];
    union
    {
        __IOM uint32_t CPG_PLLCLN_STBY;
        struct
        {
            __IOM uint32_t RESETB      : 1;
            uint32_t                   : 1;
            __IOM uint32_t SSC_EN      : 1;
            uint32_t                   : 1;
            __IOM uint32_t SSC_MODE    : 2;
            uint32_t                   : 10;
            __OM uint32_t RESETB_WEN   : 1;
            uint32_t                   : 1;
            __OM uint32_t SSC_EN_WEN   : 1;
            uint32_t                   : 1;
            __OM uint32_t SSC_MODE_WEN : 1;
            uint32_t                   : 11;
        } CPG_PLLCLN_STBY_b;
    };
    __IM uint8_t RESERVED1[12];
    union
    {
        __IM uint32_t CPG_PLLCLN_MON;
        struct
        {
            __IM uint32_t PLLn_RESETB : 1;
            uint32_t                  : 3;
            __IM uint32_t PLLn_LOCK   : 1;
            uint32_t                  : 27;
        } CPG_PLLCLN_MON_b;
    };
    __IM uint8_t RESERVED2[12];
    union
    {
        __IOM uint32_t CPG_PLLDTY_STBY;
        struct
        {
            __IOM uint32_t RESETB      : 1;
            uint32_t                   : 1;
            __IOM uint32_t SSC_EN      : 1;
            uint32_t                   : 1;
            __IOM uint32_t SSC_MODE    : 2;
            uint32_t                   : 10;
            __OM uint32_t RESETB_WEN   : 1;
            uint32_t                   : 1;
            __OM uint32_t SSC_EN_WEN   : 1;
            uint32_t                   : 1;
            __OM uint32_t SSC_MODE_WEN : 1;
            uint32_t                   : 11;
        } CPG_PLLDTY_STBY_b;
    };
    __IM uint8_t RESERVED3[12];
    union
    {
        __IM uint32_t CPG_PLLDTY_MON;
        struct
        {
            __IM uint32_t PLLn_RESETB : 1;
            uint32_t                  : 3;
            __IM uint32_t PLLn_LOCK   : 1;
            uint32_t                  : 27;
        } CPG_PLLDTY_MON_b;
    };
    __IM uint8_t RESERVED4[12];
    union
    {
        __IOM uint32_t CPG_PLLCA55_STBY;
        struct
        {
            __IOM uint32_t RESETB      : 1;
            uint32_t                   : 1;
            __IOM uint32_t SSC_EN      : 1;
            uint32_t                   : 1;
            __IOM uint32_t SSC_MODE    : 2;
            uint32_t                   : 10;
            __OM uint32_t RESETB_WEN   : 1;
            uint32_t                   : 1;
            __OM uint32_t SSC_EN_WEN   : 1;
            uint32_t                   : 1;
            __OM uint32_t SSC_MODE_WEN : 1;
            uint32_t                   : 11;
        } CPG_PLLCA55_STBY_b;
    };
    union
    {
        __IOM uint32_t CPG_PLLCA55_CLK1;
        struct
        {
            __IOM uint32_t DIV_P : 6;
            __IOM uint32_t DIV_M : 10;
            __IOM uint32_t DIV_K : 16;
        } CPG_PLLCA55_CLK1_b;
    };
    union
    {
        __IOM uint32_t CPG_PLLCA55_CLK2;
        struct
        {
            __IOM uint32_t DIV_S : 3;
            uint32_t             : 5;
            __IOM uint32_t MRR   : 6;
            uint32_t             : 2;
            __IOM uint32_t MFR   : 8;
            uint32_t             : 8;
        } CPG_PLLCA55_CLK2_b;
    };
    __IM uint8_t RESERVED5[4];
    union
    {
        __IM uint32_t CPG_PLLCA55_MON;
        struct
        {
            __IM uint32_t PLLn_RESETB : 1;
            uint32_t                  : 3;
            __IM uint32_t PLLn_LOCK   : 1;
            uint32_t                  : 27;
        } CPG_PLLCA55_MON_b;
    };
    __IM uint8_t RESERVED6[12];
    union
    {
        __IOM uint32_t CPG_PLLVDO_STBY;
        struct
        {
            __IOM uint32_t RESETB      : 1;
            uint32_t                   : 1;
            __IOM uint32_t SSC_EN      : 1;
            uint32_t                   : 1;
            __IOM uint32_t SSC_MODE    : 2;
            uint32_t                   : 10;
            __OM uint32_t RESETB_WEN   : 1;
            uint32_t                   : 1;
            __OM uint32_t SSC_EN_WEN   : 1;
            uint32_t                   : 1;
            __OM uint32_t SSC_MODE_WEN : 1;
            uint32_t                   : 11;
        } CPG_PLLVDO_STBY_b;
    };
    __IM uint8_t RESERVED7[12];
    union
    {
        __IM uint32_t CPG_PLLVDO_MON;
        struct
        {
            __IM uint32_t PLLn_RESETB : 1;
            uint32_t                  : 3;
            __IM uint32_t PLLn_LOCK   : 1;
            uint32_t                  : 27;
        } CPG_PLLVDO_MON_b;
    };
    __IM uint8_t RESERVED8[12];
    union
    {
        __IOM uint32_t CPG_PLLETH_STBY;
        struct
        {
            __IOM uint32_t RESETB      : 1;
            uint32_t                   : 1;
            __IOM uint32_t SSC_EN      : 1;
            uint32_t                   : 1;
            __IOM uint32_t SSC_MODE    : 2;
            uint32_t                   : 10;
            __OM uint32_t RESETB_WEN   : 1;
            uint32_t                   : 1;
            __OM uint32_t SSC_EN_WEN   : 1;
            uint32_t                   : 1;
            __OM uint32_t SSC_MODE_WEN : 1;
            uint32_t                   : 11;
        } CPG_PLLETH_STBY_b;
    };
    __IM uint8_t RESERVED9[12];
    union
    {
        __IM uint32_t CPG_PLLETH_MON;
        struct
        {
            __IM uint32_t PLLn_RESETB : 1;
            uint32_t                  : 3;
            __IM uint32_t PLLn_LOCK   : 1;
            uint32_t                  : 27;
        } CPG_PLLETH_MON_b;
    };
    __IM uint8_t RESERVED10[12];
    union
    {
        __IOM uint32_t CPG_PLLDSI0_STBY;
        struct
        {
            __IOM uint32_t RESETB      : 1;
            uint32_t                   : 1;
            __IOM uint32_t SSC_EN      : 1;
            uint32_t                   : 1;
            __IOM uint32_t SSC_MODE    : 2;
            uint32_t                   : 10;
            __OM uint32_t RESETB_WEN   : 1;
            uint32_t                   : 1;
            __OM uint32_t SSC_EN_WEN   : 1;
            uint32_t                   : 1;
            __OM uint32_t SSC_MODE_WEN : 1;
            uint32_t                   : 11;
        } CPG_PLLDSI0_STBY_b;
    };
    union
    {
        __IOM uint32_t CPG_PLLDSI0_CLK1;
        struct
        {
            __IOM uint32_t DIV_P : 6;
            __IOM uint32_t DIV_M : 10;
            __IOM uint32_t DIV_K : 16;
        } CPG_PLLDSI0_CLK1_b;
    };
    union
    {
        __IOM uint32_t CPG_PLLDSI0_CLK2;
        struct
        {
            __IOM uint32_t DIV_S : 3;
            uint32_t             : 5;
            __IOM uint32_t MRR   : 6;
            uint32_t             : 2;
            __IOM uint32_t MFR   : 8;
            uint32_t             : 8;
        } CPG_PLLDSI0_CLK2_b;
    };
    __IM uint8_t RESERVED11[4];
    union
    {
        __IM uint32_t CPG_PLLDSI0_MON;
        struct
        {
            __IM uint32_t PLLn_RESETB : 1;
            uint32_t                  : 3;
            __IM uint32_t PLLn_LOCK   : 1;
            uint32_t                  : 27;
        } CPG_PLLDSI0_MON_b;
    };
    __IM uint8_t RESERVED12[12];
    union
    {
        __IOM uint32_t CPG_PLLDDR0_STBY;
        struct
        {
            __IOM uint32_t RESETB      : 1;
            uint32_t                   : 1;
            __IOM uint32_t SSC_EN      : 1;
            uint32_t                   : 1;
            __IOM uint32_t SSC_MODE    : 2;
            uint32_t                   : 10;
            __OM uint32_t RESETB_WEN   : 1;
            uint32_t                   : 1;
            __OM uint32_t SSC_EN_WEN   : 1;
            uint32_t                   : 1;
            __OM uint32_t SSC_MODE_WEN : 1;
            uint32_t                   : 11;
        } CPG_PLLDDR0_STBY_b;
    };
    __IM uint8_t RESERVED13[12];
    union
    {
        __IM uint32_t CPG_PLLDDR0_MON;
        struct
        {
            __IM uint32_t PLLn_RESETB : 1;
            uint32_t                  : 3;
            __IM uint32_t PLLn_LOCK   : 1;
            uint32_t                  : 27;
        } CPG_PLLDDR0_MON_b;
    };
    __IM uint8_t RESERVED14[108];
    union
    {
        __IOM uint32_t CPG_PLLDSI1_STBY;
        struct
        {
            __IOM uint32_t RESETB      : 1;
            uint32_t                   : 1;
            __IOM uint32_t SSC_EN      : 1;
            uint32_t                   : 1;
            __IOM uint32_t SSC_MODE    : 2;
            uint32_t                   : 10;
            __OM uint32_t RESETB_WEN   : 1;
            uint32_t                   : 1;
            __OM uint32_t SSC_EN_WEN   : 1;
            uint32_t                   : 1;
            __OM uint32_t SSC_MODE_WEN : 1;
            uint32_t                   : 11;
        } CPG_PLLDSI1_STBY_b;
    };
    union
    {
        __IOM uint32_t CPG_PLLDSI1_CLK1;
        struct
        {
            __IOM uint32_t DIV_P : 6;
            __IOM uint32_t DIV_M : 10;
            __IOM uint32_t DIV_K : 16;
        } CPG_PLLDSI1_CLK1_b;
    };
    union
    {
        __IOM uint32_t CPG_PLLDSI1_CLK2;
        struct
        {
            __IOM uint32_t DIV_S : 3;
            uint32_t             : 5;
            __IOM uint32_t MRR   : 6;
            uint32_t             : 2;
            __IOM uint32_t MFR   : 8;
            uint32_t             : 8;
        } CPG_PLLDSI1_CLK2_b;
    };
    __IM uint8_t RESERVED15[4];
    union
    {
        __IM uint32_t CPG_PLLDSI1_MON;
        struct
        {
            __IM uint32_t PLLn_RESETB : 1;
            uint32_t                  : 3;
            __IM uint32_t PLLn_LOCK   : 1;
            uint32_t                  : 27;
        } CPG_PLLDSI1_MON_b;
    };
    __IM uint8_t RESERVED16[396];
    union
    {
        __IOM uint32_t CPG_SSEL0;
        struct
        {
            __IOM uint32_t SELCTL0   : 1;
            uint32_t                 : 3;
            __IOM uint32_t SELCTL1   : 1;
            uint32_t                 : 3;
            __IOM uint32_t SELCTL2   : 1;
            uint32_t                 : 3;
            __IOM uint32_t SELCTL3   : 1;
            uint32_t                 : 3;
            __OM uint32_t SELCTL0WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t SELCTL1WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t SELCTL2WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t SELCTL3WEN : 1;
            uint32_t                 : 3;
        } CPG_SSEL0_b;
    };
    union
    {
        __IOM uint32_t CPG_SSEL1;
        struct
        {
            __IOM uint32_t SELCTL0   : 1;
            uint32_t                 : 3;
            __IOM uint32_t SELCTL1   : 1;
            uint32_t                 : 3;
            __IOM uint32_t SELCTL2   : 1;
            uint32_t                 : 3;
            __IOM uint32_t SELCTL3   : 1;
            uint32_t                 : 3;
            __OM uint32_t SELCTL0WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t SELCTL1WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t SELCTL2WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t SELCTL3WEN : 1;
            uint32_t                 : 3;
        } CPG_SSEL1_b;
    };
    union
    {
        __IOM uint32_t CPG_SSEL2;
        struct
        {
            __IOM uint32_t SELCTL0   : 1;
            uint32_t                 : 3;
            __IOM uint32_t SELCTL1   : 1;
            uint32_t                 : 3;
            __IOM uint32_t SELCTL2   : 1;
            uint32_t                 : 3;
            __IOM uint32_t SELCTL3   : 1;
            uint32_t                 : 3;
            __OM uint32_t SELCTL0WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t SELCTL1WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t SELCTL2WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t SELCTL3WEN : 1;
            uint32_t                 : 3;
        } CPG_SSEL2_b;
    };
    union
    {
        __IOM uint32_t CPG_SSEL3;
        struct
        {
            __IOM uint32_t SELCTL0   : 1;
            uint32_t                 : 3;
            __IOM uint32_t SELCTL1   : 1;
            uint32_t                 : 3;
            __IOM uint32_t SELCTL2   : 1;
            uint32_t                 : 3;
            __IOM uint32_t SELCTL3   : 1;
            uint32_t                 : 3;
            __OM uint32_t SELCTL0WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t SELCTL1WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t SELCTL2WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t SELCTL3WEN : 1;
            uint32_t                 : 3;
        } CPG_SSEL3_b;
    };
    __IM uint8_t RESERVED17[240];
    union
    {
        __IOM uint32_t CPG_CDDIV0;
        struct
        {
            __IOM uint32_t DIVCTL0   : 3;
            uint32_t                 : 1;
            __IOM uint32_t DIVCTL1   : 3;
            uint32_t                 : 1;
            __IOM uint32_t DIVCTL2   : 3;
            uint32_t                 : 1;
            __IOM uint32_t DIVCTL3   : 3;
            uint32_t                 : 1;
            __OM uint32_t DIVCTL0WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t DIVCTL1WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t DIVCTL2WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t DIVCTL3WEN : 1;
            uint32_t                 : 3;
        } CPG_CDDIV0_b;
    };
    union
    {
        __IOM uint32_t CPG_CDDIV1;
        struct
        {
            __IOM uint32_t DIVCTL0   : 3;
            uint32_t                 : 1;
            __IOM uint32_t DIVCTL1   : 3;
            uint32_t                 : 1;
            __IOM uint32_t DIVCTL2   : 3;
            uint32_t                 : 1;
            __IOM uint32_t DIVCTL3   : 3;
            uint32_t                 : 1;
            __OM uint32_t DIVCTL0WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t DIVCTL1WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t DIVCTL2WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t DIVCTL3WEN : 1;
            uint32_t                 : 3;
        } CPG_CDDIV1_b;
    };
    union
    {
        __IOM uint32_t CPG_CDDIV2;
        struct
        {
            __IOM uint32_t DIVCTL0   : 3;
            uint32_t                 : 1;
            __IOM uint32_t DIVCTL1   : 3;
            uint32_t                 : 1;
            __IOM uint32_t DIVCTL2   : 3;
            uint32_t                 : 1;
            __IOM uint32_t DIVCTL3   : 3;
            uint32_t                 : 1;
            __OM uint32_t DIVCTL0WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t DIVCTL1WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t DIVCTL2WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t DIVCTL3WEN : 1;
            uint32_t                 : 3;
        } CPG_CDDIV2_b;
    };
    union
    {
        __IOM uint32_t CPG_CDDIV3;
        struct
        {
            __IOM uint32_t DIVCTL0   : 3;
            uint32_t                 : 1;
            __IOM uint32_t DIVCTL1   : 3;
            uint32_t                 : 1;
            __IOM uint32_t DIVCTL2   : 3;
            uint32_t                 : 1;
            __IOM uint32_t DIVCTL3   : 3;
            uint32_t                 : 1;
            __OM uint32_t DIVCTL0WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t DIVCTL1WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t DIVCTL2WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t DIVCTL3WEN : 1;
            uint32_t                 : 3;
        } CPG_CDDIV3_b;
    };
    union
    {
        __IOM uint32_t CPG_CDDIV4;
        struct
        {
            __IOM uint32_t DIVCTL0   : 3;
            uint32_t                 : 1;
            __IOM uint32_t DIVCTL1   : 3;
            uint32_t                 : 1;
            __IOM uint32_t DIVCTL2   : 3;
            uint32_t                 : 1;
            __IOM uint32_t DIVCTL3   : 3;
            uint32_t                 : 1;
            __OM uint32_t DIVCTL0WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t DIVCTL1WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t DIVCTL2WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t DIVCTL3WEN : 1;
            uint32_t                 : 3;
        } CPG_CDDIV4_b;
    };
    union
    {
        __IOM uint32_t CPG_CDDIV5;
        struct
        {
            __IOM uint32_t DIVCTL0   : 3;
            uint32_t                 : 1;
            __IOM uint32_t DIVCTL1   : 3;
            uint32_t                 : 1;
            __IOM uint32_t DIVCTL2   : 3;
            uint32_t                 : 1;
            __IOM uint32_t DIVCTL3   : 3;
            uint32_t                 : 1;
            __OM uint32_t DIVCTL0WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t DIVCTL1WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t DIVCTL2WEN : 1;
            uint32_t                 : 3;
            __OM uint32_t DIVCTL3WEN : 1;
            uint32_t                 : 3;
        } CPG_CDDIV5_b;
    };
    __IM uint8_t RESERVED18[232];
    union
    {
        __IOM uint32_t CPG_CSDIV0;
        struct
        {
            __IOM uint32_t DIVCTL0    : 2;
            uint32_t                  : 2;
            __IOM uint32_t DIVCTL1    : 2;
            uint32_t                  : 2;
            __IOM uint32_t DIVCTL2    : 4;
            __IOM uint32_t DIVCTL3    : 4;
            __OM uint32_t  DIVCTL0WEN : 1;
            uint32_t                  : 3;
            __OM uint32_t DIVCTL1WEN  : 1;
            uint32_t                  : 3;
            __OM uint32_t DIVCTL2WEN  : 1;
            uint32_t                  : 3;
            __OM uint32_t DIVCTL3WEN  : 1;
            uint32_t                  : 3;
        } CPG_CSDIV0_b;
    };
    union
    {
        __IOM uint32_t CPG_CSDIV1;
        struct
        {
            __IOM uint32_t DIVCTL0    : 2;
            uint32_t                  : 2;
            __IOM uint32_t DIVCTL1    : 2;
            uint32_t                  : 2;
            __IOM uint32_t DIVCTL2    : 4;
            __IOM uint32_t DIVCTL3    : 4;
            __OM uint32_t  DIVCTL0WEN : 1;
            uint32_t                  : 3;
            __OM uint32_t DIVCTL1WEN  : 1;
            uint32_t                  : 3;
            __OM uint32_t DIVCTL2WEN  : 1;
            uint32_t                  : 3;
            __OM uint32_t DIVCTL3WEN  : 1;
            uint32_t                  : 3;
        } CPG_CSDIV1_b;
    };
    __IM uint8_t RESERVED19[248];
    union
    {
        __IOM uint32_t CPG_CLKON_0;
        struct
        {
            __IOM uint32_t CLK0_ON     : 1;
            __IOM uint32_t CLK1_ON     : 1;
            __IOM uint32_t CLK2_ON     : 1;
            __IOM uint32_t CLK3_ON     : 1;
            __IOM uint32_t CLK4_ON     : 1;
            __IOM uint32_t CLK5_ON     : 1;
            __IOM uint32_t CLK6_ON     : 1;
            __IOM uint32_t CLK7_ON     : 1;
            __IOM uint32_t CLK8_ON     : 1;
            __IOM uint32_t CLK9_ON     : 1;
            __IOM uint32_t CLK10_ON    : 1;
            __IOM uint32_t CLK11_ON    : 1;
            __IOM uint32_t CLK12_ON    : 1;
            __IOM uint32_t CLK13_ON    : 1;
            __IOM uint32_t CLK14_ON    : 1;
            __IOM uint32_t CLK15_ON    : 1;
            __OM uint32_t  CLK0_ONWEN  : 1;
            __OM uint32_t  CLK1_ONWEN  : 1;
            __OM uint32_t  CLK2_ONWEN  : 1;
            __OM uint32_t  CLK3_ONWEN  : 1;
            __OM uint32_t  CLK4_ONWEN  : 1;
            __OM uint32_t  CLK5_ONWEN  : 1;
            __OM uint32_t  CLK6_ONWEN  : 1;
            __OM uint32_t  CLK7_ONWEN  : 1;
            __OM uint32_t  CLK8_ONWEN  : 1;
            __OM uint32_t  CLK9_ONWEN  : 1;
            __OM uint32_t  CLK10_ONWEN : 1;
            __OM uint32_t  CLK11_ONWEN : 1;
            __OM uint32_t  CLK12_ONWEN : 1;
            __OM uint32_t  CLK13_ONWEN : 1;
            __OM uint32_t  CLK14_ONWEN : 1;
            __OM uint32_t  CLK15_ONWEN : 1;
        } CPG_CLKON_0_b;
    };
    union
    {
        __IOM uint32_t CPG_CLKON_1;
        struct
        {
            __IOM uint32_t CLK0_ON     : 1;
            __IOM uint32_t CLK1_ON     : 1;
            __IOM uint32_t CLK2_ON     : 1;
            __IOM uint32_t CLK3_ON     : 1;
            __IOM uint32_t CLK4_ON     : 1;
            __IOM uint32_t CLK5_ON     : 1;
            __IOM uint32_t CLK6_ON     : 1;
            __IOM uint32_t CLK7_ON     : 1;
            __IOM uint32_t CLK8_ON     : 1;
            __IOM uint32_t CLK9_ON     : 1;
            __IOM uint32_t CLK10_ON    : 1;
            __IOM uint32_t CLK11_ON    : 1;
            __IOM uint32_t CLK12_ON    : 1;
            __IOM uint32_t CLK13_ON    : 1;
            __IOM uint32_t CLK14_ON    : 1;
            __IOM uint32_t CLK15_ON    : 1;
            __OM uint32_t  CLK0_ONWEN  : 1;
            __OM uint32_t  CLK1_ONWEN  : 1;
            __OM uint32_t  CLK2_ONWEN  : 1;
            __OM uint32_t  CLK3_ONWEN  : 1;
            __OM uint32_t  CLK4_ONWEN  : 1;
            __OM uint32_t  CLK5_ONWEN  : 1;
            __OM uint32_t  CLK6_ONWEN  : 1;
            __OM uint32_t  CLK7_ONWEN  : 1;
            __OM uint32_t  CLK8_ONWEN  : 1;
            __OM uint32_t  CLK9_ONWEN  : 1;
            __OM uint32_t  CLK10_ONWEN : 1;
            __OM uint32_t  CLK11_ONWEN : 1;
            __OM uint32_t  CLK12_ONWEN : 1;
            __OM uint32_t  CLK13_ONWEN : 1;
            __OM uint32_t  CLK14_ONWEN : 1;
            __OM uint32_t  CLK15_ONWEN : 1;
        } CPG_CLKON_1_b;
    };
    union
    {
        __IOM uint32_t CPG_CLKON_2;
        struct
        {
            __IOM uint32_t CLK0_ON     : 1;
            __IOM uint32_t CLK1_ON     : 1;
            __IOM uint32_t CLK2_ON     : 1;
            __IOM uint32_t CLK3_ON     : 1;
            __IOM uint32_t CLK4_ON     : 1;
            __IOM uint32_t CLK5_ON     : 1;
            __IOM uint32_t CLK6_ON     : 1;
            __IOM uint32_t CLK7_ON     : 1;
            __IOM uint32_t CLK8_ON     : 1;
            __IOM uint32_t CLK9_ON     : 1;
            __IOM uint32_t CLK10_ON    : 1;
            __IOM uint32_t CLK11_ON    : 1;
            __IOM uint32_t CLK12_ON    : 1;
            __IOM uint32_t CLK13_ON    : 1;
            __IOM uint32_t CLK14_ON    : 1;
            __IOM uint32_t CLK15_ON    : 1;
            __OM uint32_t  CLK0_ONWEN  : 1;
            __OM uint32_t  CLK1_ONWEN  : 1;
            __OM uint32_t  CLK2_ONWEN  : 1;
            __OM uint32_t  CLK3_ONWEN  : 1;
            __OM uint32_t  CLK4_ONWEN  : 1;
            __OM uint32_t  CLK5_ONWEN  : 1;
            __OM uint32_t  CLK6_ONWEN  : 1;
            __OM uint32_t  CLK7_ONWEN  : 1;
            __OM uint32_t  CLK8_ONWEN  : 1;
            __OM uint32_t  CLK9_ONWEN  : 1;
            __OM uint32_t  CLK10_ONWEN : 1;
            __OM uint32_t  CLK11_ONWEN : 1;
            __OM uint32_t  CLK12_ONWEN : 1;
            __OM uint32_t  CLK13_ONWEN : 1;
            __OM uint32_t  CLK14_ONWEN : 1;
            __OM uint32_t  CLK15_ONWEN : 1;
        } CPG_CLKON_2_b;
    };
    union
    {
        __IOM uint32_t CPG_CLKON_3;
        struct
        {
            __IOM uint32_t CLK0_ON     : 1;
            __IOM uint32_t CLK1_ON     : 1;
            __IOM uint32_t CLK2_ON     : 1;
            __IOM uint32_t CLK3_ON     : 1;
            __IOM uint32_t CLK4_ON     : 1;
            __IOM uint32_t CLK5_ON     : 1;
            __IOM uint32_t CLK6_ON     : 1;
            __IOM uint32_t CLK7_ON     : 1;
            __IOM uint32_t CLK8_ON     : 1;
            __IOM uint32_t CLK9_ON     : 1;
            __IOM uint32_t CLK10_ON    : 1;
            __IOM uint32_t CLK11_ON    : 1;
            __IOM uint32_t CLK12_ON    : 1;
            __IOM uint32_t CLK13_ON    : 1;
            __IOM uint32_t CLK14_ON    : 1;
            __IOM uint32_t CLK15_ON    : 1;
            __OM uint32_t  CLK0_ONWEN  : 1;
            __OM uint32_t  CLK1_ONWEN  : 1;
            __OM uint32_t  CLK2_ONWEN  : 1;
            __OM uint32_t  CLK3_ONWEN  : 1;
            __OM uint32_t  CLK4_ONWEN  : 1;
            __OM uint32_t  CLK5_ONWEN  : 1;
            __OM uint32_t  CLK6_ONWEN  : 1;
            __OM uint32_t  CLK7_ONWEN  : 1;
            __OM uint32_t  CLK8_ONWEN  : 1;
            __OM uint32_t  CLK9_ONWEN  : 1;
            __OM uint32_t  CLK10_ONWEN : 1;
            __OM uint32_t  CLK11_ONWEN : 1;
            __OM uint32_t  CLK12_ONWEN : 1;
            __OM uint32_t  CLK13_ONWEN : 1;
            __OM uint32_t  CLK14_ONWEN : 1;
            __OM uint32_t  CLK15_ONWEN : 1;
        } CPG_CLKON_3_b;
    };
    union
    {
        __IOM uint32_t CPG_CLKON_4;
        struct
        {
            __IOM uint32_t CLK0_ON     : 1;
            __IOM uint32_t CLK1_ON     : 1;
            __IOM uint32_t CLK2_ON     : 1;
            __IOM uint32_t CLK3_ON     : 1;
            __IOM uint32_t CLK4_ON     : 1;
            __IOM uint32_t CLK5_ON     : 1;
            __IOM uint32_t CLK6_ON     : 1;
            __IOM uint32_t CLK7_ON     : 1;
            __IOM uint32_t CLK8_ON     : 1;
            __IOM uint32_t CLK9_ON     : 1;
            __IOM uint32_t CLK10_ON    : 1;
            __IOM uint32_t CLK11_ON    : 1;
            __IOM uint32_t CLK12_ON    : 1;
            __IOM uint32_t CLK13_ON    : 1;
            __IOM uint32_t CLK14_ON    : 1;
            __IOM uint32_t CLK15_ON    : 1;
            __OM uint32_t  CLK0_ONWEN  : 1;
            __OM uint32_t  CLK1_ONWEN  : 1;
            __OM uint32_t  CLK2_ONWEN  : 1;
            __OM uint32_t  CLK3_ONWEN  : 1;
            __OM uint32_t  CLK4_ONWEN  : 1;
            __OM uint32_t  CLK5_ONWEN  : 1;
            __OM uint32_t  CLK6_ONWEN  : 1;
            __OM uint32_t  CLK7_ONWEN  : 1;
            __OM uint32_t  CLK8_ONWEN  : 1;
            __OM uint32_t  CLK9_ONWEN  : 1;
            __OM uint32_t  CLK10_ONWEN : 1;
            __OM uint32_t  CLK11_ONWEN : 1;
            __OM uint32_t  CLK12_ONWEN : 1;
            __OM uint32_t  CLK13_ONWEN : 1;
            __OM uint32_t  CLK14_ONWEN : 1;
            __OM uint32_t  CLK15_ONWEN : 1;
        } CPG_CLKON_4_b;
    };
    union
    {
        __IOM uint32_t CPG_CLKON_5;
        struct
        {
            __IOM uint32_t CLK0_ON     : 1;
            __IOM uint32_t CLK1_ON     : 1;
            __IOM uint32_t CLK2_ON     : 1;
            __IOM uint32_t CLK3_ON     : 1;
            __IOM uint32_t CLK4_ON     : 1;
            __IOM uint32_t CLK5_ON     : 1;
            __IOM uint32_t CLK6_ON     : 1;
            __IOM uint32_t CLK7_ON     : 1;
            __IOM uint32_t CLK8_ON     : 1;
            __IOM uint32_t CLK9_ON     : 1;
            __IOM uint32_t CLK10_ON    : 1;
            __IOM uint32_t CLK11_ON    : 1;
            __IOM uint32_t CLK12_ON    : 1;
            __IOM uint32_t CLK13_ON    : 1;
            __IOM uint32_t CLK14_ON    : 1;
            __IOM uint32_t CLK15_ON    : 1;
            __OM uint32_t  CLK0_ONWEN  : 1;
            __OM uint32_t  CLK1_ONWEN  : 1;
            __OM uint32_t  CLK2_ONWEN  : 1;
            __OM uint32_t  CLK3_ONWEN  : 1;
            __OM uint32_t  CLK4_ONWEN  : 1;
            __OM uint32_t  CLK5_ONWEN  : 1;
            __OM uint32_t  CLK6_ONWEN  : 1;
            __OM uint32_t  CLK7_ONWEN  : 1;
            __OM uint32_t  CLK8_ONWEN  : 1;
            __OM uint32_t  CLK9_ONWEN  : 1;
            __OM uint32_t  CLK10_ONWEN : 1;
            __OM uint32_t  CLK11_ONWEN : 1;
            __OM uint32_t  CLK12_ONWEN : 1;
            __OM uint32_t  CLK13_ONWEN : 1;
            __OM uint32_t  CLK14_ONWEN : 1;
            __OM uint32_t  CLK15_ONWEN : 1;
        } CPG_CLKON_5_b;
    };
    union
    {
        __IOM uint32_t CPG_CLKON_6;
        struct
        {
            __IOM uint32_t CLK0_ON     : 1;
            __IOM uint32_t CLK1_ON     : 1;
            __IOM uint32_t CLK2_ON     : 1;
            __IOM uint32_t CLK3_ON     : 1;
            __IOM uint32_t CLK4_ON     : 1;
            __IOM uint32_t CLK5_ON     : 1;
            __IOM uint32_t CLK6_ON     : 1;
            __IOM uint32_t CLK7_ON     : 1;
            __IOM uint32_t CLK8_ON     : 1;
            __IOM uint32_t CLK9_ON     : 1;
            __IOM uint32_t CLK10_ON    : 1;
            __IOM uint32_t CLK11_ON    : 1;
            __IOM uint32_t CLK12_ON    : 1;
            __IOM uint32_t CLK13_ON    : 1;
            __IOM uint32_t CLK14_ON    : 1;
            __IOM uint32_t CLK15_ON    : 1;
            __OM uint32_t  CLK0_ONWEN  : 1;
            __OM uint32_t  CLK1_ONWEN  : 1;
            __OM uint32_t  CLK2_ONWEN  : 1;
            __OM uint32_t  CLK3_ONWEN  : 1;
            __OM uint32_t  CLK4_ONWEN  : 1;
            __OM uint32_t  CLK5_ONWEN  : 1;
            __OM uint32_t  CLK6_ONWEN  : 1;
            __OM uint32_t  CLK7_ONWEN  : 1;
            __OM uint32_t  CLK8_ONWEN  : 1;
            __OM uint32_t  CLK9_ONWEN  : 1;
            __OM uint32_t  CLK10_ONWEN : 1;
            __OM uint32_t  CLK11_ONWEN : 1;
            __OM uint32_t  CLK12_ONWEN : 1;
            __OM uint32_t  CLK13_ONWEN : 1;
            __OM uint32_t  CLK14_ONWEN : 1;
            __OM uint32_t  CLK15_ONWEN : 1;
        } CPG_CLKON_6_b;
    };
    union
    {
        __IOM uint32_t CPG_CLKON_7;
        struct
        {
            __IOM uint32_t CLK0_ON     : 1;
            __IOM uint32_t CLK1_ON     : 1;
            __IOM uint32_t CLK2_ON     : 1;
            __IOM uint32_t CLK3_ON     : 1;
            __IOM uint32_t CLK4_ON     : 1;
            __IOM uint32_t CLK5_ON     : 1;
            __IOM uint32_t CLK6_ON     : 1;
            __IOM uint32_t CLK7_ON     : 1;
            __IOM uint32_t CLK8_ON     : 1;
            __IOM uint32_t CLK9_ON     : 1;
            __IOM uint32_t CLK10_ON    : 1;
            __IOM uint32_t CLK11_ON    : 1;
            __IOM uint32_t CLK12_ON    : 1;
            __IOM uint32_t CLK13_ON    : 1;
            __IOM uint32_t CLK14_ON    : 1;
            __IOM uint32_t CLK15_ON    : 1;
            __OM uint32_t  CLK0_ONWEN  : 1;
            __OM uint32_t  CLK1_ONWEN  : 1;
            __OM uint32_t  CLK2_ONWEN  : 1;
            __OM uint32_t  CLK3_ONWEN  : 1;
            __OM uint32_t  CLK4_ONWEN  : 1;
            __OM uint32_t  CLK5_ONWEN  : 1;
            __OM uint32_t  CLK6_ONWEN  : 1;
            __OM uint32_t  CLK7_ONWEN  : 1;
            __OM uint32_t  CLK8_ONWEN  : 1;
            __OM uint32_t  CLK9_ONWEN  : 1;
            __OM uint32_t  CLK10_ONWEN : 1;
            __OM uint32_t  CLK11_ONWEN : 1;
            __OM uint32_t  CLK12_ONWEN : 1;
            __OM uint32_t  CLK13_ONWEN : 1;
            __OM uint32_t  CLK14_ONWEN : 1;
            __OM uint32_t  CLK15_ONWEN : 1;
        } CPG_CLKON_7_b;
    };
    union
    {
        __IOM uint32_t CPG_CLKON_8;
        struct
        {
            __IOM uint32_t CLK0_ON     : 1;
            __IOM uint32_t CLK1_ON     : 1;
            __IOM uint32_t CLK2_ON     : 1;
            __IOM uint32_t CLK3_ON     : 1;
            __IOM uint32_t CLK4_ON     : 1;
            __IOM uint32_t CLK5_ON     : 1;
            __IOM uint32_t CLK6_ON     : 1;
            __IOM uint32_t CLK7_ON     : 1;
            __IOM uint32_t CLK8_ON     : 1;
            __IOM uint32_t CLK9_ON     : 1;
            __IOM uint32_t CLK10_ON    : 1;
            __IOM uint32_t CLK11_ON    : 1;
            __IOM uint32_t CLK12_ON    : 1;
            __IOM uint32_t CLK13_ON    : 1;
            __IOM uint32_t CLK14_ON    : 1;
            __IOM uint32_t CLK15_ON    : 1;
            __OM uint32_t  CLK0_ONWEN  : 1;
            __OM uint32_t  CLK1_ONWEN  : 1;
            __OM uint32_t  CLK2_ONWEN  : 1;
            __OM uint32_t  CLK3_ONWEN  : 1;
            __OM uint32_t  CLK4_ONWEN  : 1;
            __OM uint32_t  CLK5_ONWEN  : 1;
            __OM uint32_t  CLK6_ONWEN  : 1;
            __OM uint32_t  CLK7_ONWEN  : 1;
            __OM uint32_t  CLK8_ONWEN  : 1;
            __OM uint32_t  CLK9_ONWEN  : 1;
            __OM uint32_t  CLK10_ONWEN : 1;
            __OM uint32_t  CLK11_ONWEN : 1;
            __OM uint32_t  CLK12_ONWEN : 1;
            __OM uint32_t  CLK13_ONWEN : 1;
            __OM uint32_t  CLK14_ONWEN : 1;
            __OM uint32_t  CLK15_ONWEN : 1;
        } CPG_CLKON_8_b;
    };
    union
    {
        __IOM uint32_t CPG_CLKON_9;
        struct
        {
            __IOM uint32_t CLK0_ON     : 1;
            __IOM uint32_t CLK1_ON     : 1;
            __IOM uint32_t CLK2_ON     : 1;
            __IOM uint32_t CLK3_ON     : 1;
            __IOM uint32_t CLK4_ON     : 1;
            __IOM uint32_t CLK5_ON     : 1;
            __IOM uint32_t CLK6_ON     : 1;
            __IOM uint32_t CLK7_ON     : 1;
            __IOM uint32_t CLK8_ON     : 1;
            __IOM uint32_t CLK9_ON     : 1;
            __IOM uint32_t CLK10_ON    : 1;
            __IOM uint32_t CLK11_ON    : 1;
            __IOM uint32_t CLK12_ON    : 1;
            __IOM uint32_t CLK13_ON    : 1;
            __IOM uint32_t CLK14_ON    : 1;
            __IOM uint32_t CLK15_ON    : 1;
            __OM uint32_t  CLK0_ONWEN  : 1;
            __OM uint32_t  CLK1_ONWEN  : 1;
            __OM uint32_t  CLK2_ONWEN  : 1;
            __OM uint32_t  CLK3_ONWEN  : 1;
            __OM uint32_t  CLK4_ONWEN  : 1;
            __OM uint32_t  CLK5_ONWEN  : 1;
            __OM uint32_t  CLK6_ONWEN  : 1;
            __OM uint32_t  CLK7_ONWEN  : 1;
            __OM uint32_t  CLK8_ONWEN  : 1;
            __OM uint32_t  CLK9_ONWEN  : 1;
            __OM uint32_t  CLK10_ONWEN : 1;
            __OM uint32_t  CLK11_ONWEN : 1;
            __OM uint32_t  CLK12_ONWEN : 1;
            __OM uint32_t  CLK13_ONWEN : 1;
            __OM uint32_t  CLK14_ONWEN : 1;
            __OM uint32_t  CLK15_ONWEN : 1;
        } CPG_CLKON_9_b;
    };
    union
    {
        __IOM uint32_t CPG_CLKON_10;
        struct
        {
            __IOM uint32_t CLK0_ON     : 1;
            __IOM uint32_t CLK1_ON     : 1;
            __IOM uint32_t CLK2_ON     : 1;
            __IOM uint32_t CLK3_ON     : 1;
            __IOM uint32_t CLK4_ON     : 1;
            __IOM uint32_t CLK5_ON     : 1;
            __IOM uint32_t CLK6_ON     : 1;
            __IOM uint32_t CLK7_ON     : 1;
            __IOM uint32_t CLK8_ON     : 1;
            __IOM uint32_t CLK9_ON     : 1;
            __IOM uint32_t CLK10_ON    : 1;
            __IOM uint32_t CLK11_ON    : 1;
            __IOM uint32_t CLK12_ON    : 1;
            __IOM uint32_t CLK13_ON    : 1;
            __IOM uint32_t CLK14_ON    : 1;
            __IOM uint32_t CLK15_ON    : 1;
            __OM uint32_t  CLK0_ONWEN  : 1;
            __OM uint32_t  CLK1_ONWEN  : 1;
            __OM uint32_t  CLK2_ONWEN  : 1;
            __OM uint32_t  CLK3_ONWEN  : 1;
            __OM uint32_t  CLK4_ONWEN  : 1;
            __OM uint32_t  CLK5_ONWEN  : 1;
            __OM uint32_t  CLK6_ONWEN  : 1;
            __OM uint32_t  CLK7_ONWEN  : 1;
            __OM uint32_t  CLK8_ONWEN  : 1;
            __OM uint32_t  CLK9_ONWEN  : 1;
            __OM uint32_t  CLK10_ONWEN : 1;
            __OM uint32_t  CLK11_ONWEN : 1;
            __OM uint32_t  CLK12_ONWEN : 1;
            __OM uint32_t  CLK13_ONWEN : 1;
            __OM uint32_t  CLK14_ONWEN : 1;
            __OM uint32_t  CLK15_ONWEN : 1;
        } CPG_CLKON_10_b;
    };
    union
    {
        __IOM uint32_t CPG_CLKON_11;
        struct
        {
            __IOM uint32_t CLK0_ON     : 1;
            __IOM uint32_t CLK1_ON     : 1;
            __IOM uint32_t CLK2_ON     : 1;
            __IOM uint32_t CLK3_ON     : 1;
            __IOM uint32_t CLK4_ON     : 1;
            __IOM uint32_t CLK5_ON     : 1;
            __IOM uint32_t CLK6_ON     : 1;
            __IOM uint32_t CLK7_ON     : 1;
            __IOM uint32_t CLK8_ON     : 1;
            __IOM uint32_t CLK9_ON     : 1;
            __IOM uint32_t CLK10_ON    : 1;
            __IOM uint32_t CLK11_ON    : 1;
            __IOM uint32_t CLK12_ON    : 1;
            __IOM uint32_t CLK13_ON    : 1;
            __IOM uint32_t CLK14_ON    : 1;
            __IOM uint32_t CLK15_ON    : 1;
            __OM uint32_t  CLK0_ONWEN  : 1;
            __OM uint32_t  CLK1_ONWEN  : 1;
            __OM uint32_t  CLK2_ONWEN  : 1;
            __OM uint32_t  CLK3_ONWEN  : 1;
            __OM uint32_t  CLK4_ONWEN  : 1;
            __OM uint32_t  CLK5_ONWEN  : 1;
            __OM uint32_t  CLK6_ONWEN  : 1;
            __OM uint32_t  CLK7_ONWEN  : 1;
            __OM uint32_t  CLK8_ONWEN  : 1;
            __OM uint32_t  CLK9_ONWEN  : 1;
            __OM uint32_t  CLK10_ONWEN : 1;
            __OM uint32_t  CLK11_ONWEN : 1;
            __OM uint32_t  CLK12_ONWEN : 1;
            __OM uint32_t  CLK13_ONWEN : 1;
            __OM uint32_t  CLK14_ONWEN : 1;
            __OM uint32_t  CLK15_ONWEN : 1;
        } CPG_CLKON_11_b;
    };
    union
    {
        __IOM uint32_t CPG_CLKON_12;
        struct
        {
            __IOM uint32_t CLK0_ON     : 1;
            __IOM uint32_t CLK1_ON     : 1;
            __IOM uint32_t CLK2_ON     : 1;
            __IOM uint32_t CLK3_ON     : 1;
            __IOM uint32_t CLK4_ON     : 1;
            __IOM uint32_t CLK5_ON     : 1;
            __IOM uint32_t CLK6_ON     : 1;
            __IOM uint32_t CLK7_ON     : 1;
            __IOM uint32_t CLK8_ON     : 1;
            __IOM uint32_t CLK9_ON     : 1;
            __IOM uint32_t CLK10_ON    : 1;
            __IOM uint32_t CLK11_ON    : 1;
            __IOM uint32_t CLK12_ON    : 1;
            __IOM uint32_t CLK13_ON    : 1;
            __IOM uint32_t CLK14_ON    : 1;
            __IOM uint32_t CLK15_ON    : 1;
            __OM uint32_t  CLK0_ONWEN  : 1;
            __OM uint32_t  CLK1_ONWEN  : 1;
            __OM uint32_t  CLK2_ONWEN  : 1;
            __OM uint32_t  CLK3_ONWEN  : 1;
            __OM uint32_t  CLK4_ONWEN  : 1;
            __OM uint32_t  CLK5_ONWEN  : 1;
            __OM uint32_t  CLK6_ONWEN  : 1;
            __OM uint32_t  CLK7_ONWEN  : 1;
            __OM uint32_t  CLK8_ONWEN  : 1;
            __OM uint32_t  CLK9_ONWEN  : 1;
            __OM uint32_t  CLK10_ONWEN : 1;
            __OM uint32_t  CLK11_ONWEN : 1;
            __OM uint32_t  CLK12_ONWEN : 1;
            __OM uint32_t  CLK13_ONWEN : 1;
            __OM uint32_t  CLK14_ONWEN : 1;
            __OM uint32_t  CLK15_ONWEN : 1;
        } CPG_CLKON_12_b;
    };
    union
    {
        __IOM uint32_t CPG_CLKON_13;
        struct
        {
            __IOM uint32_t CLK0_ON     : 1;
            __IOM uint32_t CLK1_ON     : 1;
            __IOM uint32_t CLK2_ON     : 1;
            __IOM uint32_t CLK3_ON     : 1;
            __IOM uint32_t CLK4_ON     : 1;
            __IOM uint32_t CLK5_ON     : 1;
            __IOM uint32_t CLK6_ON     : 1;
            __IOM uint32_t CLK7_ON     : 1;
            __IOM uint32_t CLK8_ON     : 1;
            __IOM uint32_t CLK9_ON     : 1;
            __IOM uint32_t CLK10_ON    : 1;
            __IOM uint32_t CLK11_ON    : 1;
            __IOM uint32_t CLK12_ON    : 1;
            __IOM uint32_t CLK13_ON    : 1;
            __IOM uint32_t CLK14_ON    : 1;
            __IOM uint32_t CLK15_ON    : 1;
            __OM uint32_t  CLK0_ONWEN  : 1;
            __OM uint32_t  CLK1_ONWEN  : 1;
            __OM uint32_t  CLK2_ONWEN  : 1;
            __OM uint32_t  CLK3_ONWEN  : 1;
            __OM uint32_t  CLK4_ONWEN  : 1;
            __OM uint32_t  CLK5_ONWEN  : 1;
            __OM uint32_t  CLK6_ONWEN  : 1;
            __OM uint32_t  CLK7_ONWEN  : 1;
            __OM uint32_t  CLK8_ONWEN  : 1;
            __OM uint32_t  CLK9_ONWEN  : 1;
            __OM uint32_t  CLK10_ONWEN : 1;
            __OM uint32_t  CLK11_ONWEN : 1;
            __OM uint32_t  CLK12_ONWEN : 1;
            __OM uint32_t  CLK13_ONWEN : 1;
            __OM uint32_t  CLK14_ONWEN : 1;
            __OM uint32_t  CLK15_ONWEN : 1;
        } CPG_CLKON_13_b;
    };
    union
    {
        __IOM uint32_t CPG_CLKON_14;
        struct
        {
            __IOM uint32_t CLK0_ON     : 1;
            __IOM uint32_t CLK1_ON     : 1;
            __IOM uint32_t CLK2_ON     : 1;
            __IOM uint32_t CLK3_ON     : 1;
            __IOM uint32_t CLK4_ON     : 1;
            __IOM uint32_t CLK5_ON     : 1;
            __IOM uint32_t CLK6_ON     : 1;
            __IOM uint32_t CLK7_ON     : 1;
            __IOM uint32_t CLK8_ON     : 1;
            __IOM uint32_t CLK9_ON     : 1;
            __IOM uint32_t CLK10_ON    : 1;
            __IOM uint32_t CLK11_ON    : 1;
            __IOM uint32_t CLK12_ON    : 1;
            __IOM uint32_t CLK13_ON    : 1;
            __IOM uint32_t CLK14_ON    : 1;
            __IOM uint32_t CLK15_ON    : 1;
            __OM uint32_t  CLK0_ONWEN  : 1;
            __OM uint32_t  CLK1_ONWEN  : 1;
            __OM uint32_t  CLK2_ONWEN  : 1;
            __OM uint32_t  CLK3_ONWEN  : 1;
            __OM uint32_t  CLK4_ONWEN  : 1;
            __OM uint32_t  CLK5_ONWEN  : 1;
            __OM uint32_t  CLK6_ONWEN  : 1;
            __OM uint32_t  CLK7_ONWEN  : 1;
            __OM uint32_t  CLK8_ONWEN  : 1;
            __OM uint32_t  CLK9_ONWEN  : 1;
            __OM uint32_t  CLK10_ONWEN : 1;
            __OM uint32_t  CLK11_ONWEN : 1;
            __OM uint32_t  CLK12_ONWEN : 1;
            __OM uint32_t  CLK13_ONWEN : 1;
            __OM uint32_t  CLK14_ONWEN : 1;
            __OM uint32_t  CLK15_ONWEN : 1;
        } CPG_CLKON_14_b;
    };
    union
    {
        __IOM uint32_t CPG_CLKON_15;
        struct
        {
            __IOM uint32_t CLK0_ON     : 1;
            __IOM uint32_t CLK1_ON     : 1;
            __IOM uint32_t CLK2_ON     : 1;
            __IOM uint32_t CLK3_ON     : 1;
            __IOM uint32_t CLK4_ON     : 1;
            __IOM uint32_t CLK5_ON     : 1;
            __IOM uint32_t CLK6_ON     : 1;
            __IOM uint32_t CLK7_ON     : 1;
            __IOM uint32_t CLK8_ON     : 1;
            __IOM uint32_t CLK9_ON     : 1;
            __IOM uint32_t CLK10_ON    : 1;
            __IOM uint32_t CLK11_ON    : 1;
            __IOM uint32_t CLK12_ON    : 1;
            __IOM uint32_t CLK13_ON    : 1;
            __IOM uint32_t CLK14_ON    : 1;
            __IOM uint32_t CLK15_ON    : 1;
            __OM uint32_t  CLK0_ONWEN  : 1;
            __OM uint32_t  CLK1_ONWEN  : 1;
            __OM uint32_t  CLK2_ONWEN  : 1;
            __OM uint32_t  CLK3_ONWEN  : 1;
            __OM uint32_t  CLK4_ONWEN  : 1;
            __OM uint32_t  CLK5_ONWEN  : 1;
            __OM uint32_t  CLK6_ONWEN  : 1;
            __OM uint32_t  CLK7_ONWEN  : 1;
            __OM uint32_t  CLK8_ONWEN  : 1;
            __OM uint32_t  CLK9_ONWEN  : 1;
            __OM uint32_t  CLK10_ONWEN : 1;
            __OM uint32_t  CLK11_ONWEN : 1;
            __OM uint32_t  CLK12_ONWEN : 1;
            __OM uint32_t  CLK13_ONWEN : 1;
            __OM uint32_t  CLK14_ONWEN : 1;
            __OM uint32_t  CLK15_ONWEN : 1;
        } CPG_CLKON_15_b;
    };
    union
    {
        __IOM uint32_t CPG_CLKON_16;
        struct
        {
            __IOM uint32_t CLK0_ON     : 1;
            __IOM uint32_t CLK1_ON     : 1;
            __IOM uint32_t CLK2_ON     : 1;
            __IOM uint32_t CLK3_ON     : 1;
            __IOM uint32_t CLK4_ON     : 1;
            __IOM uint32_t CLK5_ON     : 1;
            __IOM uint32_t CLK6_ON     : 1;
            __IOM uint32_t CLK7_ON     : 1;
            __IOM uint32_t CLK8_ON     : 1;
            __IOM uint32_t CLK9_ON     : 1;
            __IOM uint32_t CLK10_ON    : 1;
            __IOM uint32_t CLK11_ON    : 1;
            __IOM uint32_t CLK12_ON    : 1;
            __IOM uint32_t CLK13_ON    : 1;
            __IOM uint32_t CLK14_ON    : 1;
            __IOM uint32_t CLK15_ON    : 1;
            __OM uint32_t  CLK0_ONWEN  : 1;
            __OM uint32_t  CLK1_ONWEN  : 1;
            __OM uint32_t  CLK2_ONWEN  : 1;
            __OM uint32_t  CLK3_ONWEN  : 1;
            __OM uint32_t  CLK4_ONWEN  : 1;
            __OM uint32_t  CLK5_ONWEN  : 1;
            __OM uint32_t  CLK6_ONWEN  : 1;
            __OM uint32_t  CLK7_ONWEN  : 1;
            __OM uint32_t  CLK8_ONWEN  : 1;
            __OM uint32_t  CLK9_ONWEN  : 1;
            __OM uint32_t  CLK10_ONWEN : 1;
            __OM uint32_t  CLK11_ONWEN : 1;
            __OM uint32_t  CLK12_ONWEN : 1;
            __OM uint32_t  CLK13_ONWEN : 1;
            __OM uint32_t  CLK14_ONWEN : 1;
            __OM uint32_t  CLK15_ONWEN : 1;
        } CPG_CLKON_16_b;
    };
    union
    {
        __IOM uint32_t CPG_CLKON_17;
        struct
        {
            __IOM uint32_t CLK0_ON     : 1;
            __IOM uint32_t CLK1_ON     : 1;
            __IOM uint32_t CLK2_ON     : 1;
            __IOM uint32_t CLK3_ON     : 1;
            __IOM uint32_t CLK4_ON     : 1;
            __IOM uint32_t CLK5_ON     : 1;
            __IOM uint32_t CLK6_ON     : 1;
            __IOM uint32_t CLK7_ON     : 1;
            __IOM uint32_t CLK8_ON     : 1;
            __IOM uint32_t CLK9_ON     : 1;
            __IOM uint32_t CLK10_ON    : 1;
            __IOM uint32_t CLK11_ON    : 1;
            __IOM uint32_t CLK12_ON    : 1;
            __IOM uint32_t CLK13_ON    : 1;
            __IOM uint32_t CLK14_ON    : 1;
            __IOM uint32_t CLK15_ON    : 1;
            __OM uint32_t  CLK0_ONWEN  : 1;
            __OM uint32_t  CLK1_ONWEN  : 1;
            __OM uint32_t  CLK2_ONWEN  : 1;
            __OM uint32_t  CLK3_ONWEN  : 1;
            __OM uint32_t  CLK4_ONWEN  : 1;
            __OM uint32_t  CLK5_ONWEN  : 1;
            __OM uint32_t  CLK6_ONWEN  : 1;
            __OM uint32_t  CLK7_ONWEN  : 1;
            __OM uint32_t  CLK8_ONWEN  : 1;
            __OM uint32_t  CLK9_ONWEN  : 1;
            __OM uint32_t  CLK10_ONWEN : 1;
            __OM uint32_t  CLK11_ONWEN : 1;
            __OM uint32_t  CLK12_ONWEN : 1;
            __OM uint32_t  CLK13_ONWEN : 1;
            __OM uint32_t  CLK14_ONWEN : 1;
            __OM uint32_t  CLK15_ONWEN : 1;
        } CPG_CLKON_17_b;
    };
    union
    {
        __IOM uint32_t CPG_CLKON_18;
        struct
        {
            __IOM uint32_t CLK0_ON     : 1;
            __IOM uint32_t CLK1_ON     : 1;
            __IOM uint32_t CLK2_ON     : 1;
            __IOM uint32_t CLK3_ON     : 1;
            __IOM uint32_t CLK4_ON     : 1;
            __IOM uint32_t CLK5_ON     : 1;
            __IOM uint32_t CLK6_ON     : 1;
            __IOM uint32_t CLK7_ON     : 1;
            __IOM uint32_t CLK8_ON     : 1;
            __IOM uint32_t CLK9_ON     : 1;
            __IOM uint32_t CLK10_ON    : 1;
            __IOM uint32_t CLK11_ON    : 1;
            __IOM uint32_t CLK12_ON    : 1;
            __IOM uint32_t CLK13_ON    : 1;
            __IOM uint32_t CLK14_ON    : 1;
            __IOM uint32_t CLK15_ON    : 1;
            __OM uint32_t  CLK0_ONWEN  : 1;
            __OM uint32_t  CLK1_ONWEN  : 1;
            __OM uint32_t  CLK2_ONWEN  : 1;
            __OM uint32_t  CLK3_ONWEN  : 1;
            __OM uint32_t  CLK4_ONWEN  : 1;
            __OM uint32_t  CLK5_ONWEN  : 1;
            __OM uint32_t  CLK6_ONWEN  : 1;
            __OM uint32_t  CLK7_ONWEN  : 1;
            __OM uint32_t  CLK8_ONWEN  : 1;
            __OM uint32_t  CLK9_ONWEN  : 1;
            __OM uint32_t  CLK10_ONWEN : 1;
            __OM uint32_t  CLK11_ONWEN : 1;
            __OM uint32_t  CLK12_ONWEN : 1;
            __OM uint32_t  CLK13_ONWEN : 1;
            __OM uint32_t  CLK14_ONWEN : 1;
            __OM uint32_t  CLK15_ONWEN : 1;
        } CPG_CLKON_18_b;
    };
    union
    {
        __IOM uint32_t CPG_CLKON_19;
        struct
        {
            __IOM uint32_t CLK0_ON     : 1;
            __IOM uint32_t CLK1_ON     : 1;
            __IOM uint32_t CLK2_ON     : 1;
            __IOM uint32_t CLK3_ON     : 1;
            __IOM uint32_t CLK4_ON     : 1;
            __IOM uint32_t CLK5_ON     : 1;
            __IOM uint32_t CLK6_ON     : 1;
            __IOM uint32_t CLK7_ON     : 1;
            __IOM uint32_t CLK8_ON     : 1;
            __IOM uint32_t CLK9_ON     : 1;
            __IOM uint32_t CLK10_ON    : 1;
            __IOM uint32_t CLK11_ON    : 1;
            __IOM uint32_t CLK12_ON    : 1;
            __IOM uint32_t CLK13_ON    : 1;
            __IOM uint32_t CLK14_ON    : 1;
            __IOM uint32_t CLK15_ON    : 1;
            __OM uint32_t  CLK0_ONWEN  : 1;
            __OM uint32_t  CLK1_ONWEN  : 1;
            __OM uint32_t  CLK2_ONWEN  : 1;
            __OM uint32_t  CLK3_ONWEN  : 1;
            __OM uint32_t  CLK4_ONWEN  : 1;
            __OM uint32_t  CLK5_ONWEN  : 1;
            __OM uint32_t  CLK6_ONWEN  : 1;
            __OM uint32_t  CLK7_ONWEN  : 1;
            __OM uint32_t  CLK8_ONWEN  : 1;
            __OM uint32_t  CLK9_ONWEN  : 1;
            __OM uint32_t  CLK10_ONWEN : 1;
            __OM uint32_t  CLK11_ONWEN : 1;
            __OM uint32_t  CLK12_ONWEN : 1;
            __OM uint32_t  CLK13_ONWEN : 1;
            __OM uint32_t  CLK14_ONWEN : 1;
            __OM uint32_t  CLK15_ONWEN : 1;
        } CPG_CLKON_19_b;
    };
    union
    {
        __IOM uint32_t CPG_CLKON_20;
        struct
        {
            __IOM uint32_t CLK0_ON     : 1;
            __IOM uint32_t CLK1_ON     : 1;
            __IOM uint32_t CLK2_ON     : 1;
            __IOM uint32_t CLK3_ON     : 1;
            __IOM uint32_t CLK4_ON     : 1;
            __IOM uint32_t CLK5_ON     : 1;
            __IOM uint32_t CLK6_ON     : 1;
            __IOM uint32_t CLK7_ON     : 1;
            __IOM uint32_t CLK8_ON     : 1;
            __IOM uint32_t CLK9_ON     : 1;
            __IOM uint32_t CLK10_ON    : 1;
            __IOM uint32_t CLK11_ON    : 1;
            __IOM uint32_t CLK12_ON    : 1;
            __IOM uint32_t CLK13_ON    : 1;
            __IOM uint32_t CLK14_ON    : 1;
            __IOM uint32_t CLK15_ON    : 1;
            __OM uint32_t  CLK0_ONWEN  : 1;
            __OM uint32_t  CLK1_ONWEN  : 1;
            __OM uint32_t  CLK2_ONWEN  : 1;
            __OM uint32_t  CLK3_ONWEN  : 1;
            __OM uint32_t  CLK4_ONWEN  : 1;
            __OM uint32_t  CLK5_ONWEN  : 1;
            __OM uint32_t  CLK6_ONWEN  : 1;
            __OM uint32_t  CLK7_ONWEN  : 1;
            __OM uint32_t  CLK8_ONWEN  : 1;
            __OM uint32_t  CLK9_ONWEN  : 1;
            __OM uint32_t  CLK10_ONWEN : 1;
            __OM uint32_t  CLK11_ONWEN : 1;
            __OM uint32_t  CLK12_ONWEN : 1;
            __OM uint32_t  CLK13_ONWEN : 1;
            __OM uint32_t  CLK14_ONWEN : 1;
            __OM uint32_t  CLK15_ONWEN : 1;
        } CPG_CLKON_20_b;
    };
    union
    {
        __IOM uint32_t CPG_CLKON_21;
        struct
        {
            __IOM uint32_t CLK0_ON     : 1;
            __IOM uint32_t CLK1_ON     : 1;
            __IOM uint32_t CLK2_ON     : 1;
            __IOM uint32_t CLK3_ON     : 1;
            __IOM uint32_t CLK4_ON     : 1;
            __IOM uint32_t CLK5_ON     : 1;
            __IOM uint32_t CLK6_ON     : 1;
            __IOM uint32_t CLK7_ON     : 1;
            __IOM uint32_t CLK8_ON     : 1;
            __IOM uint32_t CLK9_ON     : 1;
            __IOM uint32_t CLK10_ON    : 1;
            __IOM uint32_t CLK11_ON    : 1;
            __IOM uint32_t CLK12_ON    : 1;
            __IOM uint32_t CLK13_ON    : 1;
            __IOM uint32_t CLK14_ON    : 1;
            __IOM uint32_t CLK15_ON    : 1;
            __OM uint32_t  CLK0_ONWEN  : 1;
            __OM uint32_t  CLK1_ONWEN  : 1;
            __OM uint32_t  CLK2_ONWEN  : 1;
            __OM uint32_t  CLK3_ONWEN  : 1;
            __OM uint32_t  CLK4_ONWEN  : 1;
            __OM uint32_t  CLK5_ONWEN  : 1;
            __OM uint32_t  CLK6_ONWEN  : 1;
            __OM uint32_t  CLK7_ONWEN  : 1;
            __OM uint32_t  CLK8_ONWEN  : 1;
            __OM uint32_t  CLK9_ONWEN  : 1;
            __OM uint32_t  CLK10_ONWEN : 1;
            __OM uint32_t  CLK11_ONWEN : 1;
            __OM uint32_t  CLK12_ONWEN : 1;
            __OM uint32_t  CLK13_ONWEN : 1;
            __OM uint32_t  CLK14_ONWEN : 1;
            __OM uint32_t  CLK15_ONWEN : 1;
        } CPG_CLKON_21_b;
    };
    union
    {
        __IOM uint32_t CPG_CLKON_22;
        struct
        {
            __IOM uint32_t CLK0_ON     : 1;
            __IOM uint32_t CLK1_ON     : 1;
            __IOM uint32_t CLK2_ON     : 1;
            __IOM uint32_t CLK3_ON     : 1;
            __IOM uint32_t CLK4_ON     : 1;
            __IOM uint32_t CLK5_ON     : 1;
            __IOM uint32_t CLK6_ON     : 1;
            __IOM uint32_t CLK7_ON     : 1;
            __IOM uint32_t CLK8_ON     : 1;
            __IOM uint32_t CLK9_ON     : 1;
            __IOM uint32_t CLK10_ON    : 1;
            __IOM uint32_t CLK11_ON    : 1;
            __IOM uint32_t CLK12_ON    : 1;
            __IOM uint32_t CLK13_ON    : 1;
            __IOM uint32_t CLK14_ON    : 1;
            __IOM uint32_t CLK15_ON    : 1;
            __OM uint32_t  CLK0_ONWEN  : 1;
            __OM uint32_t  CLK1_ONWEN  : 1;
            __OM uint32_t  CLK2_ONWEN  : 1;
            __OM uint32_t  CLK3_ONWEN  : 1;
            __OM uint32_t  CLK4_ONWEN  : 1;
            __OM uint32_t  CLK5_ONWEN  : 1;
            __OM uint32_t  CLK6_ONWEN  : 1;
            __OM uint32_t  CLK7_ONWEN  : 1;
            __OM uint32_t  CLK8_ONWEN  : 1;
            __OM uint32_t  CLK9_ONWEN  : 1;
            __OM uint32_t  CLK10_ONWEN : 1;
            __OM uint32_t  CLK11_ONWEN : 1;
            __OM uint32_t  CLK12_ONWEN : 1;
            __OM uint32_t  CLK13_ONWEN : 1;
            __OM uint32_t  CLK14_ONWEN : 1;
            __OM uint32_t  CLK15_ONWEN : 1;
        } CPG_CLKON_22_b;
    };
    union
    {
        __IOM uint32_t CPG_CLKON_23;
        struct
        {
            __IOM uint32_t CLK0_ON     : 1;
            __IOM uint32_t CLK1_ON     : 1;
            __IOM uint32_t CLK2_ON     : 1;
            __IOM uint32_t CLK3_ON     : 1;
            __IOM uint32_t CLK4_ON     : 1;
            __IOM uint32_t CLK5_ON     : 1;
            __IOM uint32_t CLK6_ON     : 1;
            __IOM uint32_t CLK7_ON     : 1;
            __IOM uint32_t CLK8_ON     : 1;
            __IOM uint32_t CLK9_ON     : 1;
            __IOM uint32_t CLK10_ON    : 1;
            __IOM uint32_t CLK11_ON    : 1;
            __IOM uint32_t CLK12_ON    : 1;
            __IOM uint32_t CLK13_ON    : 1;
            __IOM uint32_t CLK14_ON    : 1;
            __IOM uint32_t CLK15_ON    : 1;
            __OM uint32_t  CLK0_ONWEN  : 1;
            __OM uint32_t  CLK1_ONWEN  : 1;
            __OM uint32_t  CLK2_ONWEN  : 1;
            __OM uint32_t  CLK3_ONWEN  : 1;
            __OM uint32_t  CLK4_ONWEN  : 1;
            __OM uint32_t  CLK5_ONWEN  : 1;
            __OM uint32_t  CLK6_ONWEN  : 1;
            __OM uint32_t  CLK7_ONWEN  : 1;
            __OM uint32_t  CLK8_ONWEN  : 1;
            __OM uint32_t  CLK9_ONWEN  : 1;
            __OM uint32_t  CLK10_ONWEN : 1;
            __OM uint32_t  CLK11_ONWEN : 1;
            __OM uint32_t  CLK12_ONWEN : 1;
            __OM uint32_t  CLK13_ONWEN : 1;
            __OM uint32_t  CLK14_ONWEN : 1;
            __OM uint32_t  CLK15_ONWEN : 1;
        } CPG_CLKON_23_b;
    };
    union
    {
        __IOM uint32_t CPG_CLKON_24;
        struct
        {
            __IOM uint32_t CLK0_ON     : 1;
            __IOM uint32_t CLK1_ON     : 1;
            __IOM uint32_t CLK2_ON     : 1;
            __IOM uint32_t CLK3_ON     : 1;
            __IOM uint32_t CLK4_ON     : 1;
            __IOM uint32_t CLK5_ON     : 1;
            __IOM uint32_t CLK6_ON     : 1;
            __IOM uint32_t CLK7_ON     : 1;
            __IOM uint32_t CLK8_ON     : 1;
            __IOM uint32_t CLK9_ON     : 1;
            __IOM uint32_t CLK10_ON    : 1;
            __IOM uint32_t CLK11_ON    : 1;
            __IOM uint32_t CLK12_ON    : 1;
            __IOM uint32_t CLK13_ON    : 1;
            __IOM uint32_t CLK14_ON    : 1;
            __IOM uint32_t CLK15_ON    : 1;
            __OM uint32_t  CLK0_ONWEN  : 1;
            __OM uint32_t  CLK1_ONWEN  : 1;
            __OM uint32_t  CLK2_ONWEN  : 1;
            __OM uint32_t  CLK3_ONWEN  : 1;
            __OM uint32_t  CLK4_ONWEN  : 1;
            __OM uint32_t  CLK5_ONWEN  : 1;
            __OM uint32_t  CLK6_ONWEN  : 1;
            __OM uint32_t  CLK7_ONWEN  : 1;
            __OM uint32_t  CLK8_ONWEN  : 1;
            __OM uint32_t  CLK9_ONWEN  : 1;
            __OM uint32_t  CLK10_ONWEN : 1;
            __OM uint32_t  CLK11_ONWEN : 1;
            __OM uint32_t  CLK12_ONWEN : 1;
            __OM uint32_t  CLK13_ONWEN : 1;
            __OM uint32_t  CLK14_ONWEN : 1;
            __OM uint32_t  CLK15_ONWEN : 1;
        } CPG_CLKON_24_b;
    };
    union
    {
        __IOM uint32_t CPG_CLKON_25;
        struct
        {
            __IOM uint32_t CLK0_ON     : 1;
            __IOM uint32_t CLK1_ON     : 1;
            __IOM uint32_t CLK2_ON     : 1;
            __IOM uint32_t CLK3_ON     : 1;
            __IOM uint32_t CLK4_ON     : 1;
            __IOM uint32_t CLK5_ON     : 1;
            __IOM uint32_t CLK6_ON     : 1;
            __IOM uint32_t CLK7_ON     : 1;
            __IOM uint32_t CLK8_ON     : 1;
            __IOM uint32_t CLK9_ON     : 1;
            __IOM uint32_t CLK10_ON    : 1;
            __IOM uint32_t CLK11_ON    : 1;
            __IOM uint32_t CLK12_ON    : 1;
            __IOM uint32_t CLK13_ON    : 1;
            __IOM uint32_t CLK14_ON    : 1;
            __IOM uint32_t CLK15_ON    : 1;
            __OM uint32_t  CLK0_ONWEN  : 1;
            __OM uint32_t  CLK1_ONWEN  : 1;
            __OM uint32_t  CLK2_ONWEN  : 1;
            __OM uint32_t  CLK3_ONWEN  : 1;
            __OM uint32_t  CLK4_ONWEN  : 1;
            __OM uint32_t  CLK5_ONWEN  : 1;
            __OM uint32_t  CLK6_ONWEN  : 1;
            __OM uint32_t  CLK7_ONWEN  : 1;
            __OM uint32_t  CLK8_ONWEN  : 1;
            __OM uint32_t  CLK9_ONWEN  : 1;
            __OM uint32_t  CLK10_ONWEN : 1;
            __OM uint32_t  CLK11_ONWEN : 1;
            __OM uint32_t  CLK12_ONWEN : 1;
            __OM uint32_t  CLK13_ONWEN : 1;
            __OM uint32_t  CLK14_ONWEN : 1;
            __OM uint32_t  CLK15_ONWEN : 1;
        } CPG_CLKON_25_b;
    };
    union
    {
        __IOM uint32_t CPG_CLKON_26;
        struct
        {
            __IOM uint32_t CLK0_ON     : 1;
            __IOM uint32_t CLK1_ON     : 1;
            __IOM uint32_t CLK2_ON     : 1;
            __IOM uint32_t CLK3_ON     : 1;
            __IOM uint32_t CLK4_ON     : 1;
            __IOM uint32_t CLK5_ON     : 1;
            __IOM uint32_t CLK6_ON     : 1;
            __IOM uint32_t CLK7_ON     : 1;
            __IOM uint32_t CLK8_ON     : 1;
            __IOM uint32_t CLK9_ON     : 1;
            __IOM uint32_t CLK10_ON    : 1;
            __IOM uint32_t CLK11_ON    : 1;
            __IOM uint32_t CLK12_ON    : 1;
            __IOM uint32_t CLK13_ON    : 1;
            __IOM uint32_t CLK14_ON    : 1;
            __IOM uint32_t CLK15_ON    : 1;
            __OM uint32_t  CLK0_ONWEN  : 1;
            __OM uint32_t  CLK1_ONWEN  : 1;
            __OM uint32_t  CLK2_ONWEN  : 1;
            __OM uint32_t  CLK3_ONWEN  : 1;
            __OM uint32_t  CLK4_ONWEN  : 1;
            __OM uint32_t  CLK5_ONWEN  : 1;
            __OM uint32_t  CLK6_ONWEN  : 1;
            __OM uint32_t  CLK7_ONWEN  : 1;
            __OM uint32_t  CLK8_ONWEN  : 1;
            __OM uint32_t  CLK9_ONWEN  : 1;
            __OM uint32_t  CLK10_ONWEN : 1;
            __OM uint32_t  CLK11_ONWEN : 1;
            __OM uint32_t  CLK12_ONWEN : 1;
            __OM uint32_t  CLK13_ONWEN : 1;
            __OM uint32_t  CLK14_ONWEN : 1;
            __OM uint32_t  CLK15_ONWEN : 1;
        } CPG_CLKON_26_b;
    };
    union
    {
        __IOM uint32_t CPG_CLKON_27;
        struct
        {
            __IOM uint32_t CLK0_ON     : 1;
            __IOM uint32_t CLK1_ON     : 1;
            __IOM uint32_t CLK2_ON     : 1;
            __IOM uint32_t CLK3_ON     : 1;
            __IOM uint32_t CLK4_ON     : 1;
            __IOM uint32_t CLK5_ON     : 1;
            __IOM uint32_t CLK6_ON     : 1;
            __IOM uint32_t CLK7_ON     : 1;
            __IOM uint32_t CLK8_ON     : 1;
            __IOM uint32_t CLK9_ON     : 1;
            __IOM uint32_t CLK10_ON    : 1;
            __IOM uint32_t CLK11_ON    : 1;
            __IOM uint32_t CLK12_ON    : 1;
            __IOM uint32_t CLK13_ON    : 1;
            __IOM uint32_t CLK14_ON    : 1;
            __IOM uint32_t CLK15_ON    : 1;
            __OM uint32_t  CLK0_ONWEN  : 1;
            __OM uint32_t  CLK1_ONWEN  : 1;
            __OM uint32_t  CLK2_ONWEN  : 1;
            __OM uint32_t  CLK3_ONWEN  : 1;
            __OM uint32_t  CLK4_ONWEN  : 1;
            __OM uint32_t  CLK5_ONWEN  : 1;
            __OM uint32_t  CLK6_ONWEN  : 1;
            __OM uint32_t  CLK7_ONWEN  : 1;
            __OM uint32_t  CLK8_ONWEN  : 1;
            __OM uint32_t  CLK9_ONWEN  : 1;
            __OM uint32_t  CLK10_ONWEN : 1;
            __OM uint32_t  CLK11_ONWEN : 1;
            __OM uint32_t  CLK12_ONWEN : 1;
            __OM uint32_t  CLK13_ONWEN : 1;
            __OM uint32_t  CLK14_ONWEN : 1;
            __OM uint32_t  CLK15_ONWEN : 1;
        } CPG_CLKON_27_b;
    };
    __IM uint8_t RESERVED20[144];
    union
    {
        __IM uint32_t CPG_CLKSTATUS0;
        struct
        {
            __IM uint32_t DDIV0CTL0_STS : 1;
            __IM uint32_t DDIV0CTL1_STS : 1;
            __IM uint32_t DDIV0CTL2_STS : 1;
            __IM uint32_t DDIV0CTL3_STS : 1;
            __IM uint32_t DDIV1CTL0_STS : 1;
            __IM uint32_t DDIV1CTL1_STS : 1;
            __IM uint32_t DDIV1CTL2_STS : 1;
            __IM uint32_t DDIV1CTL3_STS : 1;
            __IM uint32_t DDIV2CTL0_STS : 1;
            uint32_t                    : 4;
            __IM uint32_t DDIV3CTL1_STS : 1;
            __IM uint32_t DDIV3CTL2_STS : 1;
            __IM uint32_t DDIV3CTL3_STS : 1;
            uint32_t                    : 3;
            __IM uint32_t DDIV4CTL3_STS : 1;
            __IM uint32_t DDIV5CTL0_STS : 1;
            uint32_t                    : 11;
        } CPG_CLKSTATUS0_b;
    };
    __IM uint8_t RESERVED21[252];
    union
    {
        __IM uint32_t CPG_CLKMON_0;
        struct
        {
            __IM uint32_t CLK0_MON  : 1;
            __IM uint32_t CLK1_MON  : 1;
            __IM uint32_t CLK2_MON  : 1;
            __IM uint32_t CLK3_MON  : 1;
            __IM uint32_t CLK4_MON  : 1;
            __IM uint32_t CLK5_MON  : 1;
            __IM uint32_t CLK6_MON  : 1;
            __IM uint32_t CLK7_MON  : 1;
            __IM uint32_t CLK8_MON  : 1;
            __IM uint32_t CLK9_MON  : 1;
            __IM uint32_t CLK10_MON : 1;
            __IM uint32_t CLK11_MON : 1;
            __IM uint32_t CLK12_MON : 1;
            __IM uint32_t CLK13_MON : 1;
            __IM uint32_t CLK14_MON : 1;
            __IM uint32_t CLK15_MON : 1;
            __IM uint32_t CLK16_MON : 1;
            __IM uint32_t CLK17_MON : 1;
            __IM uint32_t CLK18_MON : 1;
            __IM uint32_t CLK19_MON : 1;
            __IM uint32_t CLK20_MON : 1;
            __IM uint32_t CLK21_MON : 1;
            __IM uint32_t CLK22_MON : 1;
            __IM uint32_t CLK23_MON : 1;
            __IM uint32_t CLK24_MON : 1;
            __IM uint32_t CLK25_MON : 1;
            __IM uint32_t CLK26_MON : 1;
            __IM uint32_t CLK27_MON : 1;
            __IM uint32_t CLK28_MON : 1;
            __IM uint32_t CLK29_MON : 1;
            __IM uint32_t CLK30_MON : 1;
            __IM uint32_t CLK31_MON : 1;
        } CPG_CLKMON_0_b;
    };
    union
    {
        __IM uint32_t CPG_CLKMON_1;
        struct
        {
            __IM uint32_t CLK0_MON  : 1;
            __IM uint32_t CLK1_MON  : 1;
            __IM uint32_t CLK2_MON  : 1;
            __IM uint32_t CLK3_MON  : 1;
            __IM uint32_t CLK4_MON  : 1;
            __IM uint32_t CLK5_MON  : 1;
            __IM uint32_t CLK6_MON  : 1;
            __IM uint32_t CLK7_MON  : 1;
            __IM uint32_t CLK8_MON  : 1;
            __IM uint32_t CLK9_MON  : 1;
            __IM uint32_t CLK10_MON : 1;
            __IM uint32_t CLK11_MON : 1;
            __IM uint32_t CLK12_MON : 1;
            __IM uint32_t CLK13_MON : 1;
            __IM uint32_t CLK14_MON : 1;
            __IM uint32_t CLK15_MON : 1;
            __IM uint32_t CLK16_MON : 1;
            __IM uint32_t CLK17_MON : 1;
            __IM uint32_t CLK18_MON : 1;
            __IM uint32_t CLK19_MON : 1;
            __IM uint32_t CLK20_MON : 1;
            __IM uint32_t CLK21_MON : 1;
            __IM uint32_t CLK22_MON : 1;
            __IM uint32_t CLK23_MON : 1;
            __IM uint32_t CLK24_MON : 1;
            __IM uint32_t CLK25_MON : 1;
            __IM uint32_t CLK26_MON : 1;
            __IM uint32_t CLK27_MON : 1;
            __IM uint32_t CLK28_MON : 1;
            __IM uint32_t CLK29_MON : 1;
            __IM uint32_t CLK30_MON : 1;
            __IM uint32_t CLK31_MON : 1;
        } CPG_CLKMON_1_b;
    };
    union
    {
        __IM uint32_t CPG_CLKMON_2;
        struct
        {
            __IM uint32_t CLK0_MON  : 1;
            __IM uint32_t CLK1_MON  : 1;
            __IM uint32_t CLK2_MON  : 1;
            __IM uint32_t CLK3_MON  : 1;
            __IM uint32_t CLK4_MON  : 1;
            __IM uint32_t CLK5_MON  : 1;
            __IM uint32_t CLK6_MON  : 1;
            __IM uint32_t CLK7_MON  : 1;
            __IM uint32_t CLK8_MON  : 1;
            __IM uint32_t CLK9_MON  : 1;
            __IM uint32_t CLK10_MON : 1;
            __IM uint32_t CLK11_MON : 1;
            __IM uint32_t CLK12_MON : 1;
            __IM uint32_t CLK13_MON : 1;
            __IM uint32_t CLK14_MON : 1;
            __IM uint32_t CLK15_MON : 1;
            __IM uint32_t CLK16_MON : 1;
            __IM uint32_t CLK17_MON : 1;
            __IM uint32_t CLK18_MON : 1;
            __IM uint32_t CLK19_MON : 1;
            __IM uint32_t CLK20_MON : 1;
            __IM uint32_t CLK21_MON : 1;
            __IM uint32_t CLK22_MON : 1;
            __IM uint32_t CLK23_MON : 1;
            __IM uint32_t CLK24_MON : 1;
            __IM uint32_t CLK25_MON : 1;
            __IM uint32_t CLK26_MON : 1;
            __IM uint32_t CLK27_MON : 1;
            __IM uint32_t CLK28_MON : 1;
            __IM uint32_t CLK29_MON : 1;
            __IM uint32_t CLK30_MON : 1;
            __IM uint32_t CLK31_MON : 1;
        } CPG_CLKMON_2_b;
    };
    union
    {
        __IM uint32_t CPG_CLKMON_3;
        struct
        {
            __IM uint32_t CLK0_MON  : 1;
            __IM uint32_t CLK1_MON  : 1;
            __IM uint32_t CLK2_MON  : 1;
            __IM uint32_t CLK3_MON  : 1;
            __IM uint32_t CLK4_MON  : 1;
            __IM uint32_t CLK5_MON  : 1;
            __IM uint32_t CLK6_MON  : 1;
            __IM uint32_t CLK7_MON  : 1;
            __IM uint32_t CLK8_MON  : 1;
            __IM uint32_t CLK9_MON  : 1;
            __IM uint32_t CLK10_MON : 1;
            __IM uint32_t CLK11_MON : 1;
            __IM uint32_t CLK12_MON : 1;
            __IM uint32_t CLK13_MON : 1;
            __IM uint32_t CLK14_MON : 1;
            __IM uint32_t CLK15_MON : 1;
            __IM uint32_t CLK16_MON : 1;
            __IM uint32_t CLK17_MON : 1;
            __IM uint32_t CLK18_MON : 1;
            __IM uint32_t CLK19_MON : 1;
            __IM uint32_t CLK20_MON : 1;
            __IM uint32_t CLK21_MON : 1;
            __IM uint32_t CLK22_MON : 1;
            __IM uint32_t CLK23_MON : 1;
            __IM uint32_t CLK24_MON : 1;
            __IM uint32_t CLK25_MON : 1;
            __IM uint32_t CLK26_MON : 1;
            __IM uint32_t CLK27_MON : 1;
            __IM uint32_t CLK28_MON : 1;
            __IM uint32_t CLK29_MON : 1;
            __IM uint32_t CLK30_MON : 1;
            __IM uint32_t CLK31_MON : 1;
        } CPG_CLKMON_3_b;
    };
    union
    {
        __IM uint32_t CPG_CLKMON_4;
        struct
        {
            __IM uint32_t CLK0_MON  : 1;
            __IM uint32_t CLK1_MON  : 1;
            __IM uint32_t CLK2_MON  : 1;
            __IM uint32_t CLK3_MON  : 1;
            __IM uint32_t CLK4_MON  : 1;
            __IM uint32_t CLK5_MON  : 1;
            __IM uint32_t CLK6_MON  : 1;
            __IM uint32_t CLK7_MON  : 1;
            __IM uint32_t CLK8_MON  : 1;
            __IM uint32_t CLK9_MON  : 1;
            __IM uint32_t CLK10_MON : 1;
            __IM uint32_t CLK11_MON : 1;
            __IM uint32_t CLK12_MON : 1;
            __IM uint32_t CLK13_MON : 1;
            __IM uint32_t CLK14_MON : 1;
            __IM uint32_t CLK15_MON : 1;
            __IM uint32_t CLK16_MON : 1;
            __IM uint32_t CLK17_MON : 1;
            __IM uint32_t CLK18_MON : 1;
            __IM uint32_t CLK19_MON : 1;
            __IM uint32_t CLK20_MON : 1;
            __IM uint32_t CLK21_MON : 1;
            __IM uint32_t CLK22_MON : 1;
            __IM uint32_t CLK23_MON : 1;
            __IM uint32_t CLK24_MON : 1;
            __IM uint32_t CLK25_MON : 1;
            __IM uint32_t CLK26_MON : 1;
            __IM uint32_t CLK27_MON : 1;
            __IM uint32_t CLK28_MON : 1;
            __IM uint32_t CLK29_MON : 1;
            __IM uint32_t CLK30_MON : 1;
            __IM uint32_t CLK31_MON : 1;
        } CPG_CLKMON_4_b;
    };
    union
    {
        __IM uint32_t CPG_CLKMON_5;
        struct
        {
            __IM uint32_t CLK0_MON  : 1;
            __IM uint32_t CLK1_MON  : 1;
            __IM uint32_t CLK2_MON  : 1;
            __IM uint32_t CLK3_MON  : 1;
            __IM uint32_t CLK4_MON  : 1;
            __IM uint32_t CLK5_MON  : 1;
            __IM uint32_t CLK6_MON  : 1;
            __IM uint32_t CLK7_MON  : 1;
            __IM uint32_t CLK8_MON  : 1;
            __IM uint32_t CLK9_MON  : 1;
            __IM uint32_t CLK10_MON : 1;
            __IM uint32_t CLK11_MON : 1;
            __IM uint32_t CLK12_MON : 1;
            __IM uint32_t CLK13_MON : 1;
            __IM uint32_t CLK14_MON : 1;
            __IM uint32_t CLK15_MON : 1;
            __IM uint32_t CLK16_MON : 1;
            __IM uint32_t CLK17_MON : 1;
            __IM uint32_t CLK18_MON : 1;
            __IM uint32_t CLK19_MON : 1;
            __IM uint32_t CLK20_MON : 1;
            __IM uint32_t CLK21_MON : 1;
            __IM uint32_t CLK22_MON : 1;
            __IM uint32_t CLK23_MON : 1;
            __IM uint32_t CLK24_MON : 1;
            __IM uint32_t CLK25_MON : 1;
            __IM uint32_t CLK26_MON : 1;
            __IM uint32_t CLK27_MON : 1;
            __IM uint32_t CLK28_MON : 1;
            __IM uint32_t CLK29_MON : 1;
            __IM uint32_t CLK30_MON : 1;
            __IM uint32_t CLK31_MON : 1;
        } CPG_CLKMON_5_b;
    };
    union
    {
        __IM uint32_t CPG_CLKMON_6;
        struct
        {
            __IM uint32_t CLK0_MON  : 1;
            __IM uint32_t CLK1_MON  : 1;
            __IM uint32_t CLK2_MON  : 1;
            __IM uint32_t CLK3_MON  : 1;
            __IM uint32_t CLK4_MON  : 1;
            __IM uint32_t CLK5_MON  : 1;
            __IM uint32_t CLK6_MON  : 1;
            __IM uint32_t CLK7_MON  : 1;
            __IM uint32_t CLK8_MON  : 1;
            __IM uint32_t CLK9_MON  : 1;
            __IM uint32_t CLK10_MON : 1;
            __IM uint32_t CLK11_MON : 1;
            __IM uint32_t CLK12_MON : 1;
            __IM uint32_t CLK13_MON : 1;
            __IM uint32_t CLK14_MON : 1;
            __IM uint32_t CLK15_MON : 1;
            __IM uint32_t CLK16_MON : 1;
            __IM uint32_t CLK17_MON : 1;
            __IM uint32_t CLK18_MON : 1;
            __IM uint32_t CLK19_MON : 1;
            __IM uint32_t CLK20_MON : 1;
            __IM uint32_t CLK21_MON : 1;
            __IM uint32_t CLK22_MON : 1;
            __IM uint32_t CLK23_MON : 1;
            __IM uint32_t CLK24_MON : 1;
            __IM uint32_t CLK25_MON : 1;
            __IM uint32_t CLK26_MON : 1;
            __IM uint32_t CLK27_MON : 1;
            __IM uint32_t CLK28_MON : 1;
            __IM uint32_t CLK29_MON : 1;
            __IM uint32_t CLK30_MON : 1;
            __IM uint32_t CLK31_MON : 1;
        } CPG_CLKMON_6_b;
    };
    union
    {
        __IM uint32_t CPG_CLKMON_7;
        struct
        {
            __IM uint32_t CLK0_MON  : 1;
            __IM uint32_t CLK1_MON  : 1;
            __IM uint32_t CLK2_MON  : 1;
            __IM uint32_t CLK3_MON  : 1;
            __IM uint32_t CLK4_MON  : 1;
            __IM uint32_t CLK5_MON  : 1;
            __IM uint32_t CLK6_MON  : 1;
            __IM uint32_t CLK7_MON  : 1;
            __IM uint32_t CLK8_MON  : 1;
            __IM uint32_t CLK9_MON  : 1;
            __IM uint32_t CLK10_MON : 1;
            __IM uint32_t CLK11_MON : 1;
            __IM uint32_t CLK12_MON : 1;
            __IM uint32_t CLK13_MON : 1;
            __IM uint32_t CLK14_MON : 1;
            __IM uint32_t CLK15_MON : 1;
            __IM uint32_t CLK16_MON : 1;
            __IM uint32_t CLK17_MON : 1;
            __IM uint32_t CLK18_MON : 1;
            __IM uint32_t CLK19_MON : 1;
            __IM uint32_t CLK20_MON : 1;
            __IM uint32_t CLK21_MON : 1;
            __IM uint32_t CLK22_MON : 1;
            __IM uint32_t CLK23_MON : 1;
            __IM uint32_t CLK24_MON : 1;
            __IM uint32_t CLK25_MON : 1;
            __IM uint32_t CLK26_MON : 1;
            __IM uint32_t CLK27_MON : 1;
            __IM uint32_t CLK28_MON : 1;
            __IM uint32_t CLK29_MON : 1;
            __IM uint32_t CLK30_MON : 1;
            __IM uint32_t CLK31_MON : 1;
        } CPG_CLKMON_7_b;
    };
    union
    {
        __IM uint32_t CPG_CLKMON_8;
        struct
        {
            __IM uint32_t CLK0_MON  : 1;
            __IM uint32_t CLK1_MON  : 1;
            __IM uint32_t CLK2_MON  : 1;
            __IM uint32_t CLK3_MON  : 1;
            __IM uint32_t CLK4_MON  : 1;
            __IM uint32_t CLK5_MON  : 1;
            __IM uint32_t CLK6_MON  : 1;
            __IM uint32_t CLK7_MON  : 1;
            __IM uint32_t CLK8_MON  : 1;
            __IM uint32_t CLK9_MON  : 1;
            __IM uint32_t CLK10_MON : 1;
            __IM uint32_t CLK11_MON : 1;
            __IM uint32_t CLK12_MON : 1;
            __IM uint32_t CLK13_MON : 1;
            __IM uint32_t CLK14_MON : 1;
            __IM uint32_t CLK15_MON : 1;
            __IM uint32_t CLK16_MON : 1;
            __IM uint32_t CLK17_MON : 1;
            __IM uint32_t CLK18_MON : 1;
            __IM uint32_t CLK19_MON : 1;
            __IM uint32_t CLK20_MON : 1;
            __IM uint32_t CLK21_MON : 1;
            __IM uint32_t CLK22_MON : 1;
            __IM uint32_t CLK23_MON : 1;
            __IM uint32_t CLK24_MON : 1;
            __IM uint32_t CLK25_MON : 1;
            __IM uint32_t CLK26_MON : 1;
            __IM uint32_t CLK27_MON : 1;
            __IM uint32_t CLK28_MON : 1;
            __IM uint32_t CLK29_MON : 1;
            __IM uint32_t CLK30_MON : 1;
            __IM uint32_t CLK31_MON : 1;
        } CPG_CLKMON_8_b;
    };
    union
    {
        __IM uint32_t CPG_CLKMON_9;
        struct
        {
            __IM uint32_t CLK0_MON  : 1;
            __IM uint32_t CLK1_MON  : 1;
            __IM uint32_t CLK2_MON  : 1;
            __IM uint32_t CLK3_MON  : 1;
            __IM uint32_t CLK4_MON  : 1;
            __IM uint32_t CLK5_MON  : 1;
            __IM uint32_t CLK6_MON  : 1;
            __IM uint32_t CLK7_MON  : 1;
            __IM uint32_t CLK8_MON  : 1;
            __IM uint32_t CLK9_MON  : 1;
            __IM uint32_t CLK10_MON : 1;
            __IM uint32_t CLK11_MON : 1;
            __IM uint32_t CLK12_MON : 1;
            __IM uint32_t CLK13_MON : 1;
            __IM uint32_t CLK14_MON : 1;
            __IM uint32_t CLK15_MON : 1;
            __IM uint32_t CLK16_MON : 1;
            __IM uint32_t CLK17_MON : 1;
            __IM uint32_t CLK18_MON : 1;
            __IM uint32_t CLK19_MON : 1;
            __IM uint32_t CLK20_MON : 1;
            __IM uint32_t CLK21_MON : 1;
            __IM uint32_t CLK22_MON : 1;
            __IM uint32_t CLK23_MON : 1;
            __IM uint32_t CLK24_MON : 1;
            __IM uint32_t CLK25_MON : 1;
            __IM uint32_t CLK26_MON : 1;
            __IM uint32_t CLK27_MON : 1;
            __IM uint32_t CLK28_MON : 1;
            __IM uint32_t CLK29_MON : 1;
            __IM uint32_t CLK30_MON : 1;
            __IM uint32_t CLK31_MON : 1;
        } CPG_CLKMON_9_b;
    };
    union
    {
        __IM uint32_t CPG_CLKMON_10;
        struct
        {
            __IM uint32_t CLK0_MON  : 1;
            __IM uint32_t CLK1_MON  : 1;
            __IM uint32_t CLK2_MON  : 1;
            __IM uint32_t CLK3_MON  : 1;
            __IM uint32_t CLK4_MON  : 1;
            __IM uint32_t CLK5_MON  : 1;
            __IM uint32_t CLK6_MON  : 1;
            __IM uint32_t CLK7_MON  : 1;
            __IM uint32_t CLK8_MON  : 1;
            __IM uint32_t CLK9_MON  : 1;
            __IM uint32_t CLK10_MON : 1;
            __IM uint32_t CLK11_MON : 1;
            __IM uint32_t CLK12_MON : 1;
            __IM uint32_t CLK13_MON : 1;
            __IM uint32_t CLK14_MON : 1;
            __IM uint32_t CLK15_MON : 1;
            __IM uint32_t CLK16_MON : 1;
            __IM uint32_t CLK17_MON : 1;
            __IM uint32_t CLK18_MON : 1;
            __IM uint32_t CLK19_MON : 1;
            __IM uint32_t CLK20_MON : 1;
            __IM uint32_t CLK21_MON : 1;
            __IM uint32_t CLK22_MON : 1;
            __IM uint32_t CLK23_MON : 1;
            __IM uint32_t CLK24_MON : 1;
            __IM uint32_t CLK25_MON : 1;
            __IM uint32_t CLK26_MON : 1;
            __IM uint32_t CLK27_MON : 1;
            __IM uint32_t CLK28_MON : 1;
            __IM uint32_t CLK29_MON : 1;
            __IM uint32_t CLK30_MON : 1;
            __IM uint32_t CLK31_MON : 1;
        } CPG_CLKMON_10_b;
    };
    union
    {
        __IM uint32_t CPG_CLKMON_11;
        struct
        {
            __IM uint32_t CLK0_MON  : 1;
            __IM uint32_t CLK1_MON  : 1;
            __IM uint32_t CLK2_MON  : 1;
            __IM uint32_t CLK3_MON  : 1;
            __IM uint32_t CLK4_MON  : 1;
            __IM uint32_t CLK5_MON  : 1;
            __IM uint32_t CLK6_MON  : 1;
            __IM uint32_t CLK7_MON  : 1;
            __IM uint32_t CLK8_MON  : 1;
            __IM uint32_t CLK9_MON  : 1;
            __IM uint32_t CLK10_MON : 1;
            __IM uint32_t CLK11_MON : 1;
            __IM uint32_t CLK12_MON : 1;
            __IM uint32_t CLK13_MON : 1;
            __IM uint32_t CLK14_MON : 1;
            __IM uint32_t CLK15_MON : 1;
            __IM uint32_t CLK16_MON : 1;
            __IM uint32_t CLK17_MON : 1;
            __IM uint32_t CLK18_MON : 1;
            __IM uint32_t CLK19_MON : 1;
            __IM uint32_t CLK20_MON : 1;
            __IM uint32_t CLK21_MON : 1;
            __IM uint32_t CLK22_MON : 1;
            __IM uint32_t CLK23_MON : 1;
            __IM uint32_t CLK24_MON : 1;
            __IM uint32_t CLK25_MON : 1;
            __IM uint32_t CLK26_MON : 1;
            __IM uint32_t CLK27_MON : 1;
            __IM uint32_t CLK28_MON : 1;
            __IM uint32_t CLK29_MON : 1;
            __IM uint32_t CLK30_MON : 1;
            __IM uint32_t CLK31_MON : 1;
        } CPG_CLKMON_11_b;
    };
    __IM uint8_t RESERVED22[208];
    union
    {
        __IOM uint32_t CPG_RST_0;
        struct
        {
            __IOM uint32_t RSTB0      : 1;
            __IOM uint32_t RSTB1      : 1;
            __IOM uint32_t RSTB2      : 1;
            __IOM uint32_t RSTB3      : 1;
            __IOM uint32_t RSTB4      : 1;
            __IOM uint32_t RSTB5      : 1;
            __IOM uint32_t RSTB6      : 1;
            __IOM uint32_t RSTB7      : 1;
            __IOM uint32_t RSTB8      : 1;
            __IOM uint32_t RSTB9      : 1;
            __IOM uint32_t RSTB10     : 1;
            __IOM uint32_t RSTB11     : 1;
            __IOM uint32_t RSTB12     : 1;
            __IOM uint32_t RSTB13     : 1;
            __IOM uint32_t RSTB14     : 1;
            __IOM uint32_t RSTB15     : 1;
            __OM uint32_t  RSTB0_WEN  : 1;
            __OM uint32_t  RSTB1_WEN  : 1;
            __OM uint32_t  RSTB2_WEN  : 1;
            __OM uint32_t  RSTB3_WEN  : 1;
            __OM uint32_t  RSTB4_WEN  : 1;
            __OM uint32_t  RSTB5_WEN  : 1;
            __OM uint32_t  RSTB6_WEN  : 1;
            __OM uint32_t  RSTB7_WEN  : 1;
            __OM uint32_t  RSTB8_WEN  : 1;
            __OM uint32_t  RSTB9_WEN  : 1;
            __OM uint32_t  RSTB10_WEN : 1;
            __OM uint32_t  RSTB11_WEN : 1;
            __OM uint32_t  RSTB12_WEN : 1;
            __OM uint32_t  RSTB13_WEN : 1;
            __OM uint32_t  RSTB14_WEN : 1;
            __OM uint32_t  RSTB15_WEN : 1;
        } CPG_RST_0_b;
    };
    union
    {
        __IOM uint32_t CPG_RST_1;
        struct
        {
            __IOM uint32_t RSTB0      : 1;
            __IOM uint32_t RSTB1      : 1;
            __IOM uint32_t RSTB2      : 1;
            __IOM uint32_t RSTB3      : 1;
            __IOM uint32_t RSTB4      : 1;
            __IOM uint32_t RSTB5      : 1;
            __IOM uint32_t RSTB6      : 1;
            __IOM uint32_t RSTB7      : 1;
            __IOM uint32_t RSTB8      : 1;
            __IOM uint32_t RSTB9      : 1;
            __IOM uint32_t RSTB10     : 1;
            __IOM uint32_t RSTB11     : 1;
            __IOM uint32_t RSTB12     : 1;
            __IOM uint32_t RSTB13     : 1;
            __IOM uint32_t RSTB14     : 1;
            __IOM uint32_t RSTB15     : 1;
            __OM uint32_t  RSTB0_WEN  : 1;
            __OM uint32_t  RSTB1_WEN  : 1;
            __OM uint32_t  RSTB2_WEN  : 1;
            __OM uint32_t  RSTB3_WEN  : 1;
            __OM uint32_t  RSTB4_WEN  : 1;
            __OM uint32_t  RSTB5_WEN  : 1;
            __OM uint32_t  RSTB6_WEN  : 1;
            __OM uint32_t  RSTB7_WEN  : 1;
            __OM uint32_t  RSTB8_WEN  : 1;
            __OM uint32_t  RSTB9_WEN  : 1;
            __OM uint32_t  RSTB10_WEN : 1;
            __OM uint32_t  RSTB11_WEN : 1;
            __OM uint32_t  RSTB12_WEN : 1;
            __OM uint32_t  RSTB13_WEN : 1;
            __OM uint32_t  RSTB14_WEN : 1;
            __OM uint32_t  RSTB15_WEN : 1;
        } CPG_RST_1_b;
    };
    __IM uint8_t RESERVED23[4];
    union
    {
        __IOM uint32_t CPG_RST_3;
        struct
        {
            __IOM uint32_t RSTB0      : 1;
            __IOM uint32_t RSTB1      : 1;
            __IOM uint32_t RSTB2      : 1;
            __IOM uint32_t RSTB3      : 1;
            __IOM uint32_t RSTB4      : 1;
            __IOM uint32_t RSTB5      : 1;
            __IOM uint32_t RSTB6      : 1;
            __IOM uint32_t RSTB7      : 1;
            __IOM uint32_t RSTB8      : 1;
            __IOM uint32_t RSTB9      : 1;
            __IOM uint32_t RSTB10     : 1;
            __IOM uint32_t RSTB11     : 1;
            __IOM uint32_t RSTB12     : 1;
            __IOM uint32_t RSTB13     : 1;
            __IOM uint32_t RSTB14     : 1;
            __IOM uint32_t RSTB15     : 1;
            __OM uint32_t  RSTB0_WEN  : 1;
            __OM uint32_t  RSTB1_WEN  : 1;
            __OM uint32_t  RSTB2_WEN  : 1;
            __OM uint32_t  RSTB3_WEN  : 1;
            __OM uint32_t  RSTB4_WEN  : 1;
            __OM uint32_t  RSTB5_WEN  : 1;
            __OM uint32_t  RSTB6_WEN  : 1;
            __OM uint32_t  RSTB7_WEN  : 1;
            __OM uint32_t  RSTB8_WEN  : 1;
            __OM uint32_t  RSTB9_WEN  : 1;
            __OM uint32_t  RSTB10_WEN : 1;
            __OM uint32_t  RSTB11_WEN : 1;
            __OM uint32_t  RSTB12_WEN : 1;
            __OM uint32_t  RSTB13_WEN : 1;
            __OM uint32_t  RSTB14_WEN : 1;
            __OM uint32_t  RSTB15_WEN : 1;
        } CPG_RST_3_b;
    };
    union
    {
        __IOM uint32_t CPG_RST_4;
        struct
        {
            __IOM uint32_t RSTB0      : 1;
            __IOM uint32_t RSTB1      : 1;
            __IOM uint32_t RSTB2      : 1;
            __IOM uint32_t RSTB3      : 1;
            __IOM uint32_t RSTB4      : 1;
            __IOM uint32_t RSTB5      : 1;
            __IOM uint32_t RSTB6      : 1;
            __IOM uint32_t RSTB7      : 1;
            __IOM uint32_t RSTB8      : 1;
            __IOM uint32_t RSTB9      : 1;
            __IOM uint32_t RSTB10     : 1;
            __IOM uint32_t RSTB11     : 1;
            __IOM uint32_t RSTB12     : 1;
            __IOM uint32_t RSTB13     : 1;
            __IOM uint32_t RSTB14     : 1;
            __IOM uint32_t RSTB15     : 1;
            __OM uint32_t  RSTB0_WEN  : 1;
            __OM uint32_t  RSTB1_WEN  : 1;
            __OM uint32_t  RSTB2_WEN  : 1;
            __OM uint32_t  RSTB3_WEN  : 1;
            __OM uint32_t  RSTB4_WEN  : 1;
            __OM uint32_t  RSTB5_WEN  : 1;
            __OM uint32_t  RSTB6_WEN  : 1;
            __OM uint32_t  RSTB7_WEN  : 1;
            __OM uint32_t  RSTB8_WEN  : 1;
            __OM uint32_t  RSTB9_WEN  : 1;
            __OM uint32_t  RSTB10_WEN : 1;
            __OM uint32_t  RSTB11_WEN : 1;
            __OM uint32_t  RSTB12_WEN : 1;
            __OM uint32_t  RSTB13_WEN : 1;
            __OM uint32_t  RSTB14_WEN : 1;
            __OM uint32_t  RSTB15_WEN : 1;
        } CPG_RST_4_b;
    };
    union
    {
        __IOM uint32_t CPG_RST_5;
        struct
        {
            __IOM uint32_t RSTB0      : 1;
            __IOM uint32_t RSTB1      : 1;
            __IOM uint32_t RSTB2      : 1;
            __IOM uint32_t RSTB3      : 1;
            __IOM uint32_t RSTB4      : 1;
            __IOM uint32_t RSTB5      : 1;
            __IOM uint32_t RSTB6      : 1;
            __IOM uint32_t RSTB7      : 1;
            __IOM uint32_t RSTB8      : 1;
            __IOM uint32_t RSTB9      : 1;
            __IOM uint32_t RSTB10     : 1;
            __IOM uint32_t RSTB11     : 1;
            __IOM uint32_t RSTB12     : 1;
            __IOM uint32_t RSTB13     : 1;
            __IOM uint32_t RSTB14     : 1;
            __IOM uint32_t RSTB15     : 1;
            __OM uint32_t  RSTB0_WEN  : 1;
            __OM uint32_t  RSTB1_WEN  : 1;
            __OM uint32_t  RSTB2_WEN  : 1;
            __OM uint32_t  RSTB3_WEN  : 1;
            __OM uint32_t  RSTB4_WEN  : 1;
            __OM uint32_t  RSTB5_WEN  : 1;
            __OM uint32_t  RSTB6_WEN  : 1;
            __OM uint32_t  RSTB7_WEN  : 1;
            __OM uint32_t  RSTB8_WEN  : 1;
            __OM uint32_t  RSTB9_WEN  : 1;
            __OM uint32_t  RSTB10_WEN : 1;
            __OM uint32_t  RSTB11_WEN : 1;
            __OM uint32_t  RSTB12_WEN : 1;
            __OM uint32_t  RSTB13_WEN : 1;
            __OM uint32_t  RSTB14_WEN : 1;
            __OM uint32_t  RSTB15_WEN : 1;
        } CPG_RST_5_b;
    };
    union
    {
        __IOM uint32_t CPG_RST_6;
        struct
        {
            __IOM uint32_t RSTB0      : 1;
            __IOM uint32_t RSTB1      : 1;
            __IOM uint32_t RSTB2      : 1;
            __IOM uint32_t RSTB3      : 1;
            __IOM uint32_t RSTB4      : 1;
            __IOM uint32_t RSTB5      : 1;
            __IOM uint32_t RSTB6      : 1;
            __IOM uint32_t RSTB7      : 1;
            __IOM uint32_t RSTB8      : 1;
            __IOM uint32_t RSTB9      : 1;
            __IOM uint32_t RSTB10     : 1;
            __IOM uint32_t RSTB11     : 1;
            __IOM uint32_t RSTB12     : 1;
            __IOM uint32_t RSTB13     : 1;
            __IOM uint32_t RSTB14     : 1;
            __IOM uint32_t RSTB15     : 1;
            __OM uint32_t  RSTB0_WEN  : 1;
            __OM uint32_t  RSTB1_WEN  : 1;
            __OM uint32_t  RSTB2_WEN  : 1;
            __OM uint32_t  RSTB3_WEN  : 1;
            __OM uint32_t  RSTB4_WEN  : 1;
            __OM uint32_t  RSTB5_WEN  : 1;
            __OM uint32_t  RSTB6_WEN  : 1;
            __OM uint32_t  RSTB7_WEN  : 1;
            __OM uint32_t  RSTB8_WEN  : 1;
            __OM uint32_t  RSTB9_WEN  : 1;
            __OM uint32_t  RSTB10_WEN : 1;
            __OM uint32_t  RSTB11_WEN : 1;
            __OM uint32_t  RSTB12_WEN : 1;
            __OM uint32_t  RSTB13_WEN : 1;
            __OM uint32_t  RSTB14_WEN : 1;
            __OM uint32_t  RSTB15_WEN : 1;
        } CPG_RST_6_b;
    };
    union
    {
        __IOM uint32_t CPG_RST_7;
        struct
        {
            __IOM uint32_t RSTB0      : 1;
            __IOM uint32_t RSTB1      : 1;
            __IOM uint32_t RSTB2      : 1;
            __IOM uint32_t RSTB3      : 1;
            __IOM uint32_t RSTB4      : 1;
            __IOM uint32_t RSTB5      : 1;
            __IOM uint32_t RSTB6      : 1;
            __IOM uint32_t RSTB7      : 1;
            __IOM uint32_t RSTB8      : 1;
            __IOM uint32_t RSTB9      : 1;
            __IOM uint32_t RSTB10     : 1;
            __IOM uint32_t RSTB11     : 1;
            __IOM uint32_t RSTB12     : 1;
            __IOM uint32_t RSTB13     : 1;
            __IOM uint32_t RSTB14     : 1;
            __IOM uint32_t RSTB15     : 1;
            __OM uint32_t  RSTB0_WEN  : 1;
            __OM uint32_t  RSTB1_WEN  : 1;
            __OM uint32_t  RSTB2_WEN  : 1;
            __OM uint32_t  RSTB3_WEN  : 1;
            __OM uint32_t  RSTB4_WEN  : 1;
            __OM uint32_t  RSTB5_WEN  : 1;
            __OM uint32_t  RSTB6_WEN  : 1;
            __OM uint32_t  RSTB7_WEN  : 1;
            __OM uint32_t  RSTB8_WEN  : 1;
            __OM uint32_t  RSTB9_WEN  : 1;
            __OM uint32_t  RSTB10_WEN : 1;
            __OM uint32_t  RSTB11_WEN : 1;
            __OM uint32_t  RSTB12_WEN : 1;
            __OM uint32_t  RSTB13_WEN : 1;
            __OM uint32_t  RSTB14_WEN : 1;
            __OM uint32_t  RSTB15_WEN : 1;
        } CPG_RST_7_b;
    };
    union
    {
        __IOM uint32_t CPG_RST_8;
        struct
        {
            __IOM uint32_t RSTB0      : 1;
            __IOM uint32_t RSTB1      : 1;
            __IOM uint32_t RSTB2      : 1;
            __IOM uint32_t RSTB3      : 1;
            __IOM uint32_t RSTB4      : 1;
            __IOM uint32_t RSTB5      : 1;
            __IOM uint32_t RSTB6      : 1;
            __IOM uint32_t RSTB7      : 1;
            __IOM uint32_t RSTB8      : 1;
            __IOM uint32_t RSTB9      : 1;
            __IOM uint32_t RSTB10     : 1;
            __IOM uint32_t RSTB11     : 1;
            __IOM uint32_t RSTB12     : 1;
            __IOM uint32_t RSTB13     : 1;
            __IOM uint32_t RSTB14     : 1;
            __IOM uint32_t RSTB15     : 1;
            __OM uint32_t  RSTB0_WEN  : 1;
            __OM uint32_t  RSTB1_WEN  : 1;
            __OM uint32_t  RSTB2_WEN  : 1;
            __OM uint32_t  RSTB3_WEN  : 1;
            __OM uint32_t  RSTB4_WEN  : 1;
            __OM uint32_t  RSTB5_WEN  : 1;
            __OM uint32_t  RSTB6_WEN  : 1;
            __OM uint32_t  RSTB7_WEN  : 1;
            __OM uint32_t  RSTB8_WEN  : 1;
            __OM uint32_t  RSTB9_WEN  : 1;
            __OM uint32_t  RSTB10_WEN : 1;
            __OM uint32_t  RSTB11_WEN : 1;
            __OM uint32_t  RSTB12_WEN : 1;
            __OM uint32_t  RSTB13_WEN : 1;
            __OM uint32_t  RSTB14_WEN : 1;
            __OM uint32_t  RSTB15_WEN : 1;
        } CPG_RST_8_b;
    };
    union
    {
        __IOM uint32_t CPG_RST_9;
        struct
        {
            __IOM uint32_t RSTB0      : 1;
            __IOM uint32_t RSTB1      : 1;
            __IOM uint32_t RSTB2      : 1;
            __IOM uint32_t RSTB3      : 1;
            __IOM uint32_t RSTB4      : 1;
            __IOM uint32_t RSTB5      : 1;
            __IOM uint32_t RSTB6      : 1;
            __IOM uint32_t RSTB7      : 1;
            __IOM uint32_t RSTB8      : 1;
            __IOM uint32_t RSTB9      : 1;
            __IOM uint32_t RSTB10     : 1;
            __IOM uint32_t RSTB11     : 1;
            __IOM uint32_t RSTB12     : 1;
            __IOM uint32_t RSTB13     : 1;
            __IOM uint32_t RSTB14     : 1;
            __IOM uint32_t RSTB15     : 1;
            __OM uint32_t  RSTB0_WEN  : 1;
            __OM uint32_t  RSTB1_WEN  : 1;
            __OM uint32_t  RSTB2_WEN  : 1;
            __OM uint32_t  RSTB3_WEN  : 1;
            __OM uint32_t  RSTB4_WEN  : 1;
            __OM uint32_t  RSTB5_WEN  : 1;
            __OM uint32_t  RSTB6_WEN  : 1;
            __OM uint32_t  RSTB7_WEN  : 1;
            __OM uint32_t  RSTB8_WEN  : 1;
            __OM uint32_t  RSTB9_WEN  : 1;
            __OM uint32_t  RSTB10_WEN : 1;
            __OM uint32_t  RSTB11_WEN : 1;
            __OM uint32_t  RSTB12_WEN : 1;
            __OM uint32_t  RSTB13_WEN : 1;
            __OM uint32_t  RSTB14_WEN : 1;
            __OM uint32_t  RSTB15_WEN : 1;
        } CPG_RST_9_b;
    };
    union
    {
        __IOM uint32_t CPG_RST_10;
        struct
        {
            __IOM uint32_t RSTB0      : 1;
            __IOM uint32_t RSTB1      : 1;
            __IOM uint32_t RSTB2      : 1;
            __IOM uint32_t RSTB3      : 1;
            __IOM uint32_t RSTB4      : 1;
            __IOM uint32_t RSTB5      : 1;
            __IOM uint32_t RSTB6      : 1;
            __IOM uint32_t RSTB7      : 1;
            __IOM uint32_t RSTB8      : 1;
            __IOM uint32_t RSTB9      : 1;
            __IOM uint32_t RSTB10     : 1;
            __IOM uint32_t RSTB11     : 1;
            __IOM uint32_t RSTB12     : 1;
            __IOM uint32_t RSTB13     : 1;
            __IOM uint32_t RSTB14     : 1;
            __IOM uint32_t RSTB15     : 1;
            __OM uint32_t  RSTB0_WEN  : 1;
            __OM uint32_t  RSTB1_WEN  : 1;
            __OM uint32_t  RSTB2_WEN  : 1;
            __OM uint32_t  RSTB3_WEN  : 1;
            __OM uint32_t  RSTB4_WEN  : 1;
            __OM uint32_t  RSTB5_WEN  : 1;
            __OM uint32_t  RSTB6_WEN  : 1;
            __OM uint32_t  RSTB7_WEN  : 1;
            __OM uint32_t  RSTB8_WEN  : 1;
            __OM uint32_t  RSTB9_WEN  : 1;
            __OM uint32_t  RSTB10_WEN : 1;
            __OM uint32_t  RSTB11_WEN : 1;
            __OM uint32_t  RSTB12_WEN : 1;
            __OM uint32_t  RSTB13_WEN : 1;
            __OM uint32_t  RSTB14_WEN : 1;
            __OM uint32_t  RSTB15_WEN : 1;
        } CPG_RST_10_b;
    };
    union
    {
        __IOM uint32_t CPG_RST_11;
        struct
        {
            __IOM uint32_t RSTB0      : 1;
            __IOM uint32_t RSTB1      : 1;
            __IOM uint32_t RSTB2      : 1;
            __IOM uint32_t RSTB3      : 1;
            __IOM uint32_t RSTB4      : 1;
            __IOM uint32_t RSTB5      : 1;
            __IOM uint32_t RSTB6      : 1;
            __IOM uint32_t RSTB7      : 1;
            __IOM uint32_t RSTB8      : 1;
            __IOM uint32_t RSTB9      : 1;
            __IOM uint32_t RSTB10     : 1;
            __IOM uint32_t RSTB11     : 1;
            __IOM uint32_t RSTB12     : 1;
            __IOM uint32_t RSTB13     : 1;
            __IOM uint32_t RSTB14     : 1;
            __IOM uint32_t RSTB15     : 1;
            __OM uint32_t  RSTB0_WEN  : 1;
            __OM uint32_t  RSTB1_WEN  : 1;
            __OM uint32_t  RSTB2_WEN  : 1;
            __OM uint32_t  RSTB3_WEN  : 1;
            __OM uint32_t  RSTB4_WEN  : 1;
            __OM uint32_t  RSTB5_WEN  : 1;
            __OM uint32_t  RSTB6_WEN  : 1;
            __OM uint32_t  RSTB7_WEN  : 1;
            __OM uint32_t  RSTB8_WEN  : 1;
            __OM uint32_t  RSTB9_WEN  : 1;
            __OM uint32_t  RSTB10_WEN : 1;
            __OM uint32_t  RSTB11_WEN : 1;
            __OM uint32_t  RSTB12_WEN : 1;
            __OM uint32_t  RSTB13_WEN : 1;
            __OM uint32_t  RSTB14_WEN : 1;
            __OM uint32_t  RSTB15_WEN : 1;
        } CPG_RST_11_b;
    };
    union
    {
        __IOM uint32_t CPG_RST_12;
        struct
        {
            __IOM uint32_t RSTB0      : 1;
            __IOM uint32_t RSTB1      : 1;
            __IOM uint32_t RSTB2      : 1;
            __IOM uint32_t RSTB3      : 1;
            __IOM uint32_t RSTB4      : 1;
            __IOM uint32_t RSTB5      : 1;
            __IOM uint32_t RSTB6      : 1;
            __IOM uint32_t RSTB7      : 1;
            __IOM uint32_t RSTB8      : 1;
            __IOM uint32_t RSTB9      : 1;
            __IOM uint32_t RSTB10     : 1;
            __IOM uint32_t RSTB11     : 1;
            __IOM uint32_t RSTB12     : 1;
            __IOM uint32_t RSTB13     : 1;
            __IOM uint32_t RSTB14     : 1;
            __IOM uint32_t RSTB15     : 1;
            __OM uint32_t  RSTB0_WEN  : 1;
            __OM uint32_t  RSTB1_WEN  : 1;
            __OM uint32_t  RSTB2_WEN  : 1;
            __OM uint32_t  RSTB3_WEN  : 1;
            __OM uint32_t  RSTB4_WEN  : 1;
            __OM uint32_t  RSTB5_WEN  : 1;
            __OM uint32_t  RSTB6_WEN  : 1;
            __OM uint32_t  RSTB7_WEN  : 1;
            __OM uint32_t  RSTB8_WEN  : 1;
            __OM uint32_t  RSTB9_WEN  : 1;
            __OM uint32_t  RSTB10_WEN : 1;
            __OM uint32_t  RSTB11_WEN : 1;
            __OM uint32_t  RSTB12_WEN : 1;
            __OM uint32_t  RSTB13_WEN : 1;
            __OM uint32_t  RSTB14_WEN : 1;
            __OM uint32_t  RSTB15_WEN : 1;
        } CPG_RST_12_b;
    };
    union
    {
        __IOM uint32_t CPG_RST_13;
        struct
        {
            __IOM uint32_t RSTB0      : 1;
            __IOM uint32_t RSTB1      : 1;
            __IOM uint32_t RSTB2      : 1;
            __IOM uint32_t RSTB3      : 1;
            __IOM uint32_t RSTB4      : 1;
            __IOM uint32_t RSTB5      : 1;
            __IOM uint32_t RSTB6      : 1;
            __IOM uint32_t RSTB7      : 1;
            __IOM uint32_t RSTB8      : 1;
            __IOM uint32_t RSTB9      : 1;
            __IOM uint32_t RSTB10     : 1;
            __IOM uint32_t RSTB11     : 1;
            __IOM uint32_t RSTB12     : 1;
            __IOM uint32_t RSTB13     : 1;
            __IOM uint32_t RSTB14     : 1;
            __IOM uint32_t RSTB15     : 1;
            __OM uint32_t  RSTB0_WEN  : 1;
            __OM uint32_t  RSTB1_WEN  : 1;
            __OM uint32_t  RSTB2_WEN  : 1;
            __OM uint32_t  RSTB3_WEN  : 1;
            __OM uint32_t  RSTB4_WEN  : 1;
            __OM uint32_t  RSTB5_WEN  : 1;
            __OM uint32_t  RSTB6_WEN  : 1;
            __OM uint32_t  RSTB7_WEN  : 1;
            __OM uint32_t  RSTB8_WEN  : 1;
            __OM uint32_t  RSTB9_WEN  : 1;
            __OM uint32_t  RSTB10_WEN : 1;
            __OM uint32_t  RSTB11_WEN : 1;
            __OM uint32_t  RSTB12_WEN : 1;
            __OM uint32_t  RSTB13_WEN : 1;
            __OM uint32_t  RSTB14_WEN : 1;
            __OM uint32_t  RSTB15_WEN : 1;
        } CPG_RST_13_b;
    };
    union
    {
        __IOM uint32_t CPG_RST_14;
        struct
        {
            __IOM uint32_t RSTB0      : 1;
            __IOM uint32_t RSTB1      : 1;
            __IOM uint32_t RSTB2      : 1;
            __IOM uint32_t RSTB3      : 1;
            __IOM uint32_t RSTB4      : 1;
            __IOM uint32_t RSTB5      : 1;
            __IOM uint32_t RSTB6      : 1;
            __IOM uint32_t RSTB7      : 1;
            __IOM uint32_t RSTB8      : 1;
            __IOM uint32_t RSTB9      : 1;
            __IOM uint32_t RSTB10     : 1;
            __IOM uint32_t RSTB11     : 1;
            __IOM uint32_t RSTB12     : 1;
            __IOM uint32_t RSTB13     : 1;
            __IOM uint32_t RSTB14     : 1;
            __IOM uint32_t RSTB15     : 1;
            __OM uint32_t  RSTB0_WEN  : 1;
            __OM uint32_t  RSTB1_WEN  : 1;
            __OM uint32_t  RSTB2_WEN  : 1;
            __OM uint32_t  RSTB3_WEN  : 1;
            __OM uint32_t  RSTB4_WEN  : 1;
            __OM uint32_t  RSTB5_WEN  : 1;
            __OM uint32_t  RSTB6_WEN  : 1;
            __OM uint32_t  RSTB7_WEN  : 1;
            __OM uint32_t  RSTB8_WEN  : 1;
            __OM uint32_t  RSTB9_WEN  : 1;
            __OM uint32_t  RSTB10_WEN : 1;
            __OM uint32_t  RSTB11_WEN : 1;
            __OM uint32_t  RSTB12_WEN : 1;
            __OM uint32_t  RSTB13_WEN : 1;
            __OM uint32_t  RSTB14_WEN : 1;
            __OM uint32_t  RSTB15_WEN : 1;
        } CPG_RST_14_b;
    };
    union
    {
        __IOM uint32_t CPG_RST_15;
        struct
        {
            __IOM uint32_t RSTB0      : 1;
            __IOM uint32_t RSTB1      : 1;
            __IOM uint32_t RSTB2      : 1;
            __IOM uint32_t RSTB3      : 1;
            __IOM uint32_t RSTB4      : 1;
            __IOM uint32_t RSTB5      : 1;
            __IOM uint32_t RSTB6      : 1;
            __IOM uint32_t RSTB7      : 1;
            __IOM uint32_t RSTB8      : 1;
            __IOM uint32_t RSTB9      : 1;
            __IOM uint32_t RSTB10     : 1;
            __IOM uint32_t RSTB11     : 1;
            __IOM uint32_t RSTB12     : 1;
            __IOM uint32_t RSTB13     : 1;
            __IOM uint32_t RSTB14     : 1;
            __IOM uint32_t RSTB15     : 1;
            __OM uint32_t  RSTB0_WEN  : 1;
            __OM uint32_t  RSTB1_WEN  : 1;
            __OM uint32_t  RSTB2_WEN  : 1;
            __OM uint32_t  RSTB3_WEN  : 1;
            __OM uint32_t  RSTB4_WEN  : 1;
            __OM uint32_t  RSTB5_WEN  : 1;
            __OM uint32_t  RSTB6_WEN  : 1;
            __OM uint32_t  RSTB7_WEN  : 1;
            __OM uint32_t  RSTB8_WEN  : 1;
            __OM uint32_t  RSTB9_WEN  : 1;
            __OM uint32_t  RSTB10_WEN : 1;
            __OM uint32_t  RSTB11_WEN : 1;
            __OM uint32_t  RSTB12_WEN : 1;
            __OM uint32_t  RSTB13_WEN : 1;
            __OM uint32_t  RSTB14_WEN : 1;
            __OM uint32_t  RSTB15_WEN : 1;
        } CPG_RST_15_b;
    };
    union
    {
        __IOM uint32_t CPG_RST_16;
        struct
        {
            __IOM uint32_t RSTB0      : 1;
            __IOM uint32_t RSTB1      : 1;
            __IOM uint32_t RSTB2      : 1;
            __IOM uint32_t RSTB3      : 1;
            __IOM uint32_t RSTB4      : 1;
            __IOM uint32_t RSTB5      : 1;
            __IOM uint32_t RSTB6      : 1;
            __IOM uint32_t RSTB7      : 1;
            __IOM uint32_t RSTB8      : 1;
            __IOM uint32_t RSTB9      : 1;
            __IOM uint32_t RSTB10     : 1;
            __IOM uint32_t RSTB11     : 1;
            __IOM uint32_t RSTB12     : 1;
            __IOM uint32_t RSTB13     : 1;
            __IOM uint32_t RSTB14     : 1;
            __IOM uint32_t RSTB15     : 1;
            __OM uint32_t  RSTB0_WEN  : 1;
            __OM uint32_t  RSTB1_WEN  : 1;
            __OM uint32_t  RSTB2_WEN  : 1;
            __OM uint32_t  RSTB3_WEN  : 1;
            __OM uint32_t  RSTB4_WEN  : 1;
            __OM uint32_t  RSTB5_WEN  : 1;
            __OM uint32_t  RSTB6_WEN  : 1;
            __OM uint32_t  RSTB7_WEN  : 1;
            __OM uint32_t  RSTB8_WEN  : 1;
            __OM uint32_t  RSTB9_WEN  : 1;
            __OM uint32_t  RSTB10_WEN : 1;
            __OM uint32_t  RSTB11_WEN : 1;
            __OM uint32_t  RSTB12_WEN : 1;
            __OM uint32_t  RSTB13_WEN : 1;
            __OM uint32_t  RSTB14_WEN : 1;
            __OM uint32_t  RSTB15_WEN : 1;
        } CPG_RST_16_b;
    };
    union
    {
        __IOM uint32_t CPG_RST_17;
        struct
        {
            __IOM uint32_t RSTB0      : 1;
            __IOM uint32_t RSTB1      : 1;
            __IOM uint32_t RSTB2      : 1;
            __IOM uint32_t RSTB3      : 1;
            __IOM uint32_t RSTB4      : 1;
            __IOM uint32_t RSTB5      : 1;
            __IOM uint32_t RSTB6      : 1;
            __IOM uint32_t RSTB7      : 1;
            __IOM uint32_t RSTB8      : 1;
            __IOM uint32_t RSTB9      : 1;
            __IOM uint32_t RSTB10     : 1;
            __IOM uint32_t RSTB11     : 1;
            __IOM uint32_t RSTB12     : 1;
            __IOM uint32_t RSTB13     : 1;
            __IOM uint32_t RSTB14     : 1;
            __IOM uint32_t RSTB15     : 1;
            __OM uint32_t  RSTB0_WEN  : 1;
            __OM uint32_t  RSTB1_WEN  : 1;
            __OM uint32_t  RSTB2_WEN  : 1;
            __OM uint32_t  RSTB3_WEN  : 1;
            __OM uint32_t  RSTB4_WEN  : 1;
            __OM uint32_t  RSTB5_WEN  : 1;
            __OM uint32_t  RSTB6_WEN  : 1;
            __OM uint32_t  RSTB7_WEN  : 1;
            __OM uint32_t  RSTB8_WEN  : 1;
            __OM uint32_t  RSTB9_WEN  : 1;
            __OM uint32_t  RSTB10_WEN : 1;
            __OM uint32_t  RSTB11_WEN : 1;
            __OM uint32_t  RSTB12_WEN : 1;
            __OM uint32_t  RSTB13_WEN : 1;
            __OM uint32_t  RSTB14_WEN : 1;
            __OM uint32_t  RSTB15_WEN : 1;
        } CPG_RST_17_b;
    };
    union
    {
        __IOM uint32_t CPG_RST_18;
        struct
        {
            __IOM uint32_t RSTB0      : 1;
            __IOM uint32_t RSTB1      : 1;
            __IOM uint32_t RSTB2      : 1;
            __IOM uint32_t RSTB3      : 1;
            __IOM uint32_t RSTB4      : 1;
            __IOM uint32_t RSTB5      : 1;
            __IOM uint32_t RSTB6      : 1;
            __IOM uint32_t RSTB7      : 1;
            __IOM uint32_t RSTB8      : 1;
            __IOM uint32_t RSTB9      : 1;
            __IOM uint32_t RSTB10     : 1;
            __IOM uint32_t RSTB11     : 1;
            __IOM uint32_t RSTB12     : 1;
            __IOM uint32_t RSTB13     : 1;
            __IOM uint32_t RSTB14     : 1;
            __IOM uint32_t RSTB15     : 1;
            __OM uint32_t  RSTB0_WEN  : 1;
            __OM uint32_t  RSTB1_WEN  : 1;
            __OM uint32_t  RSTB2_WEN  : 1;
            __OM uint32_t  RSTB3_WEN  : 1;
            __OM uint32_t  RSTB4_WEN  : 1;
            __OM uint32_t  RSTB5_WEN  : 1;
            __OM uint32_t  RSTB6_WEN  : 1;
            __OM uint32_t  RSTB7_WEN  : 1;
            __OM uint32_t  RSTB8_WEN  : 1;
            __OM uint32_t  RSTB9_WEN  : 1;
            __OM uint32_t  RSTB10_WEN : 1;
            __OM uint32_t  RSTB11_WEN : 1;
            __OM uint32_t  RSTB12_WEN : 1;
            __OM uint32_t  RSTB13_WEN : 1;
            __OM uint32_t  RSTB14_WEN : 1;
            __OM uint32_t  RSTB15_WEN : 1;
        } CPG_RST_18_b;
    };
    __IM uint8_t RESERVED24[180];
    union
    {
        __IM uint32_t CPG_RSTMON_0;
        struct
        {
            __IM uint32_t RST0_MON  : 1;
            __IM uint32_t RST1_MON  : 1;
            __IM uint32_t RST2_MON  : 1;
            __IM uint32_t RST3_MON  : 1;
            __IM uint32_t RST4_MON  : 1;
            __IM uint32_t RST5_MON  : 1;
            __IM uint32_t RST6_MON  : 1;
            __IM uint32_t RST7_MON  : 1;
            __IM uint32_t RST8_MON  : 1;
            __IM uint32_t RST9_MON  : 1;
            __IM uint32_t RST10_MON : 1;
            __IM uint32_t RST11_MON : 1;
            __IM uint32_t RST12_MON : 1;
            __IM uint32_t RST13_MON : 1;
            __IM uint32_t RST14_MON : 1;
            __IM uint32_t RST15_MON : 1;
            __IM uint32_t RST16_MON : 1;
            __IM uint32_t RST17_MON : 1;
            __IM uint32_t RST18_MON : 1;
            __IM uint32_t RST19_MON : 1;
            __IM uint32_t RST20_MON : 1;
            __IM uint32_t RST21_MON : 1;
            __IM uint32_t RST22_MON : 1;
            __IM uint32_t RST23_MON : 1;
            __IM uint32_t RST24_MON : 1;
            __IM uint32_t RST25_MON : 1;
            __IM uint32_t RST26_MON : 1;
            __IM uint32_t RST27_MON : 1;
            __IM uint32_t RST28_MON : 1;
            __IM uint32_t RST29_MON : 1;
            __IM uint32_t RST30_MON : 1;
            __IM uint32_t RST31_MON : 1;
        } CPG_RSTMON_0_b;
    };
    union
    {
        __IM uint32_t CPG_RSTMON_1;
        struct
        {
            __IM uint32_t RST0_MON  : 1;
            __IM uint32_t RST1_MON  : 1;
            __IM uint32_t RST2_MON  : 1;
            __IM uint32_t RST3_MON  : 1;
            __IM uint32_t RST4_MON  : 1;
            __IM uint32_t RST5_MON  : 1;
            __IM uint32_t RST6_MON  : 1;
            __IM uint32_t RST7_MON  : 1;
            __IM uint32_t RST8_MON  : 1;
            __IM uint32_t RST9_MON  : 1;
            __IM uint32_t RST10_MON : 1;
            __IM uint32_t RST11_MON : 1;
            __IM uint32_t RST12_MON : 1;
            __IM uint32_t RST13_MON : 1;
            __IM uint32_t RST14_MON : 1;
            __IM uint32_t RST15_MON : 1;
            __IM uint32_t RST16_MON : 1;
            __IM uint32_t RST17_MON : 1;
            __IM uint32_t RST18_MON : 1;
            __IM uint32_t RST19_MON : 1;
            __IM uint32_t RST20_MON : 1;
            __IM uint32_t RST21_MON : 1;
            __IM uint32_t RST22_MON : 1;
            __IM uint32_t RST23_MON : 1;
            __IM uint32_t RST24_MON : 1;
            __IM uint32_t RST25_MON : 1;
            __IM uint32_t RST26_MON : 1;
            __IM uint32_t RST27_MON : 1;
            __IM uint32_t RST28_MON : 1;
            __IM uint32_t RST29_MON : 1;
            __IM uint32_t RST30_MON : 1;
            __IM uint32_t RST31_MON : 1;
        } CPG_RSTMON_1_b;
    };
    union
    {
        __IM uint32_t CPG_RSTMON_2;
        struct
        {
            __IM uint32_t RST0_MON  : 1;
            __IM uint32_t RST1_MON  : 1;
            __IM uint32_t RST2_MON  : 1;
            __IM uint32_t RST3_MON  : 1;
            __IM uint32_t RST4_MON  : 1;
            __IM uint32_t RST5_MON  : 1;
            __IM uint32_t RST6_MON  : 1;
            __IM uint32_t RST7_MON  : 1;
            __IM uint32_t RST8_MON  : 1;
            __IM uint32_t RST9_MON  : 1;
            __IM uint32_t RST10_MON : 1;
            __IM uint32_t RST11_MON : 1;
            __IM uint32_t RST12_MON : 1;
            __IM uint32_t RST13_MON : 1;
            __IM uint32_t RST14_MON : 1;
            __IM uint32_t RST15_MON : 1;
            __IM uint32_t RST16_MON : 1;
            __IM uint32_t RST17_MON : 1;
            __IM uint32_t RST18_MON : 1;
            __IM uint32_t RST19_MON : 1;
            __IM uint32_t RST20_MON : 1;
            __IM uint32_t RST21_MON : 1;
            __IM uint32_t RST22_MON : 1;
            __IM uint32_t RST23_MON : 1;
            __IM uint32_t RST24_MON : 1;
            __IM uint32_t RST25_MON : 1;
            __IM uint32_t RST26_MON : 1;
            __IM uint32_t RST27_MON : 1;
            __IM uint32_t RST28_MON : 1;
            __IM uint32_t RST29_MON : 1;
            __IM uint32_t RST30_MON : 1;
            __IM uint32_t RST31_MON : 1;
        } CPG_RSTMON_2_b;
    };
    union
    {
        __IM uint32_t CPG_RSTMON_3;
        struct
        {
            __IM uint32_t RST0_MON  : 1;
            __IM uint32_t RST1_MON  : 1;
            __IM uint32_t RST2_MON  : 1;
            __IM uint32_t RST3_MON  : 1;
            __IM uint32_t RST4_MON  : 1;
            __IM uint32_t RST5_MON  : 1;
            __IM uint32_t RST6_MON  : 1;
            __IM uint32_t RST7_MON  : 1;
            __IM uint32_t RST8_MON  : 1;
            __IM uint32_t RST9_MON  : 1;
            __IM uint32_t RST10_MON : 1;
            __IM uint32_t RST11_MON : 1;
            __IM uint32_t RST12_MON : 1;
            __IM uint32_t RST13_MON : 1;
            __IM uint32_t RST14_MON : 1;
            __IM uint32_t RST15_MON : 1;
            __IM uint32_t RST16_MON : 1;
            __IM uint32_t RST17_MON : 1;
            __IM uint32_t RST18_MON : 1;
            __IM uint32_t RST19_MON : 1;
            __IM uint32_t RST20_MON : 1;
            __IM uint32_t RST21_MON : 1;
            __IM uint32_t RST22_MON : 1;
            __IM uint32_t RST23_MON : 1;
            __IM uint32_t RST24_MON : 1;
            __IM uint32_t RST25_MON : 1;
            __IM uint32_t RST26_MON : 1;
            __IM uint32_t RST27_MON : 1;
            __IM uint32_t RST28_MON : 1;
            __IM uint32_t RST29_MON : 1;
            __IM uint32_t RST30_MON : 1;
            __IM uint32_t RST31_MON : 1;
        } CPG_RSTMON_3_b;
    };
    union
    {
        __IM uint32_t CPG_RSTMON_4;
        struct
        {
            __IM uint32_t RST0_MON  : 1;
            __IM uint32_t RST1_MON  : 1;
            __IM uint32_t RST2_MON  : 1;
            __IM uint32_t RST3_MON  : 1;
            __IM uint32_t RST4_MON  : 1;
            __IM uint32_t RST5_MON  : 1;
            __IM uint32_t RST6_MON  : 1;
            __IM uint32_t RST7_MON  : 1;
            __IM uint32_t RST8_MON  : 1;
            __IM uint32_t RST9_MON  : 1;
            __IM uint32_t RST10_MON : 1;
            __IM uint32_t RST11_MON : 1;
            __IM uint32_t RST12_MON : 1;
            __IM uint32_t RST13_MON : 1;
            __IM uint32_t RST14_MON : 1;
            __IM uint32_t RST15_MON : 1;
            __IM uint32_t RST16_MON : 1;
            __IM uint32_t RST17_MON : 1;
            __IM uint32_t RST18_MON : 1;
            __IM uint32_t RST19_MON : 1;
            __IM uint32_t RST20_MON : 1;
            __IM uint32_t RST21_MON : 1;
            __IM uint32_t RST22_MON : 1;
            __IM uint32_t RST23_MON : 1;
            __IM uint32_t RST24_MON : 1;
            __IM uint32_t RST25_MON : 1;
            __IM uint32_t RST26_MON : 1;
            __IM uint32_t RST27_MON : 1;
            __IM uint32_t RST28_MON : 1;
            __IM uint32_t RST29_MON : 1;
            __IM uint32_t RST30_MON : 1;
            __IM uint32_t RST31_MON : 1;
        } CPG_RSTMON_4_b;
    };
    union
    {
        __IM uint32_t CPG_RSTMON_5;
        struct
        {
            __IM uint32_t RST0_MON  : 1;
            __IM uint32_t RST1_MON  : 1;
            __IM uint32_t RST2_MON  : 1;
            __IM uint32_t RST3_MON  : 1;
            __IM uint32_t RST4_MON  : 1;
            __IM uint32_t RST5_MON  : 1;
            __IM uint32_t RST6_MON  : 1;
            __IM uint32_t RST7_MON  : 1;
            __IM uint32_t RST8_MON  : 1;
            __IM uint32_t RST9_MON  : 1;
            __IM uint32_t RST10_MON : 1;
            __IM uint32_t RST11_MON : 1;
            __IM uint32_t RST12_MON : 1;
            __IM uint32_t RST13_MON : 1;
            __IM uint32_t RST14_MON : 1;
            __IM uint32_t RST15_MON : 1;
            __IM uint32_t RST16_MON : 1;
            __IM uint32_t RST17_MON : 1;
            __IM uint32_t RST18_MON : 1;
            __IM uint32_t RST19_MON : 1;
            __IM uint32_t RST20_MON : 1;
            __IM uint32_t RST21_MON : 1;
            __IM uint32_t RST22_MON : 1;
            __IM uint32_t RST23_MON : 1;
            __IM uint32_t RST24_MON : 1;
            __IM uint32_t RST25_MON : 1;
            __IM uint32_t RST26_MON : 1;
            __IM uint32_t RST27_MON : 1;
            __IM uint32_t RST28_MON : 1;
            __IM uint32_t RST29_MON : 1;
            __IM uint32_t RST30_MON : 1;
            __IM uint32_t RST31_MON : 1;
        } CPG_RSTMON_5_b;
    };
    union
    {
        __IM uint32_t CPG_RSTMON_6;
        struct
        {
            __IM uint32_t RST0_MON  : 1;
            __IM uint32_t RST1_MON  : 1;
            __IM uint32_t RST2_MON  : 1;
            __IM uint32_t RST3_MON  : 1;
            __IM uint32_t RST4_MON  : 1;
            __IM uint32_t RST5_MON  : 1;
            __IM uint32_t RST6_MON  : 1;
            __IM uint32_t RST7_MON  : 1;
            __IM uint32_t RST8_MON  : 1;
            __IM uint32_t RST9_MON  : 1;
            __IM uint32_t RST10_MON : 1;
            __IM uint32_t RST11_MON : 1;
            __IM uint32_t RST12_MON : 1;
            __IM uint32_t RST13_MON : 1;
            __IM uint32_t RST14_MON : 1;
            __IM uint32_t RST15_MON : 1;
            __IM uint32_t RST16_MON : 1;
            __IM uint32_t RST17_MON : 1;
            __IM uint32_t RST18_MON : 1;
            __IM uint32_t RST19_MON : 1;
            __IM uint32_t RST20_MON : 1;
            __IM uint32_t RST21_MON : 1;
            __IM uint32_t RST22_MON : 1;
            __IM uint32_t RST23_MON : 1;
            __IM uint32_t RST24_MON : 1;
            __IM uint32_t RST25_MON : 1;
            __IM uint32_t RST26_MON : 1;
            __IM uint32_t RST27_MON : 1;
            __IM uint32_t RST28_MON : 1;
            __IM uint32_t RST29_MON : 1;
            __IM uint32_t RST30_MON : 1;
            __IM uint32_t RST31_MON : 1;
        } CPG_RSTMON_6_b;
    };
    union
    {
        __IM uint32_t CPG_RSTMON_7;
        struct
        {
            __IM uint32_t RST0_MON  : 1;
            __IM uint32_t RST1_MON  : 1;
            __IM uint32_t RST2_MON  : 1;
            __IM uint32_t RST3_MON  : 1;
            __IM uint32_t RST4_MON  : 1;
            __IM uint32_t RST5_MON  : 1;
            __IM uint32_t RST6_MON  : 1;
            __IM uint32_t RST7_MON  : 1;
            __IM uint32_t RST8_MON  : 1;
            __IM uint32_t RST9_MON  : 1;
            __IM uint32_t RST10_MON : 1;
            __IM uint32_t RST11_MON : 1;
            __IM uint32_t RST12_MON : 1;
            __IM uint32_t RST13_MON : 1;
            __IM uint32_t RST14_MON : 1;
            __IM uint32_t RST15_MON : 1;
            __IM uint32_t RST16_MON : 1;
            __IM uint32_t RST17_MON : 1;
            __IM uint32_t RST18_MON : 1;
            __IM uint32_t RST19_MON : 1;
            __IM uint32_t RST20_MON : 1;
            __IM uint32_t RST21_MON : 1;
            __IM uint32_t RST22_MON : 1;
            __IM uint32_t RST23_MON : 1;
            __IM uint32_t RST24_MON : 1;
            __IM uint32_t RST25_MON : 1;
            __IM uint32_t RST26_MON : 1;
            __IM uint32_t RST27_MON : 1;
            __IM uint32_t RST28_MON : 1;
            __IM uint32_t RST29_MON : 1;
            __IM uint32_t RST30_MON : 1;
            __IM uint32_t RST31_MON : 1;
        } CPG_RSTMON_7_b;
    };
    union
    {
        __IM uint32_t CPG_RSTMON_8;
        struct
        {
            __IM uint32_t RST0_MON  : 1;
            __IM uint32_t RST1_MON  : 1;
            __IM uint32_t RST2_MON  : 1;
            __IM uint32_t RST3_MON  : 1;
            __IM uint32_t RST4_MON  : 1;
            __IM uint32_t RST5_MON  : 1;
            __IM uint32_t RST6_MON  : 1;
            __IM uint32_t RST7_MON  : 1;
            __IM uint32_t RST8_MON  : 1;
            __IM uint32_t RST9_MON  : 1;
            __IM uint32_t RST10_MON : 1;
            __IM uint32_t RST11_MON : 1;
            __IM uint32_t RST12_MON : 1;
            __IM uint32_t RST13_MON : 1;
            __IM uint32_t RST14_MON : 1;
            __IM uint32_t RST15_MON : 1;
            __IM uint32_t RST16_MON : 1;
            __IM uint32_t RST17_MON : 1;
            __IM uint32_t RST18_MON : 1;
            __IM uint32_t RST19_MON : 1;
            __IM uint32_t RST20_MON : 1;
            __IM uint32_t RST21_MON : 1;
            __IM uint32_t RST22_MON : 1;
            __IM uint32_t RST23_MON : 1;
            __IM uint32_t RST24_MON : 1;
            __IM uint32_t RST25_MON : 1;
            __IM uint32_t RST26_MON : 1;
            __IM uint32_t RST27_MON : 1;
            __IM uint32_t RST28_MON : 1;
            __IM uint32_t RST29_MON : 1;
            __IM uint32_t RST30_MON : 1;
            __IM uint32_t RST31_MON : 1;
        } CPG_RSTMON_8_b;
    };
    union
    {
        __IM uint32_t CPG_RSTMON_9;
        struct
        {
            __IM uint32_t RST0_MON  : 1;
            __IM uint32_t RST1_MON  : 1;
            __IM uint32_t RST2_MON  : 1;
            __IM uint32_t RST3_MON  : 1;
            __IM uint32_t RST4_MON  : 1;
            __IM uint32_t RST5_MON  : 1;
            __IM uint32_t RST6_MON  : 1;
            __IM uint32_t RST7_MON  : 1;
            __IM uint32_t RST8_MON  : 1;
            __IM uint32_t RST9_MON  : 1;
            __IM uint32_t RST10_MON : 1;
            __IM uint32_t RST11_MON : 1;
            __IM uint32_t RST12_MON : 1;
            __IM uint32_t RST13_MON : 1;
            __IM uint32_t RST14_MON : 1;
            __IM uint32_t RST15_MON : 1;
            __IM uint32_t RST16_MON : 1;
            __IM uint32_t RST17_MON : 1;
            __IM uint32_t RST18_MON : 1;
            __IM uint32_t RST19_MON : 1;
            __IM uint32_t RST20_MON : 1;
            __IM uint32_t RST21_MON : 1;
            __IM uint32_t RST22_MON : 1;
            __IM uint32_t RST23_MON : 1;
            __IM uint32_t RST24_MON : 1;
            __IM uint32_t RST25_MON : 1;
            __IM uint32_t RST26_MON : 1;
            __IM uint32_t RST27_MON : 1;
            __IM uint32_t RST28_MON : 1;
            __IM uint32_t RST29_MON : 1;
            __IM uint32_t RST30_MON : 1;
            __IM uint32_t RST31_MON : 1;
        } CPG_RSTMON_9_b;
    };
    __IM uint8_t RESERVED25[216];
    union
    {
        __IOM uint32_t CPG_ERRORRST_SEL1;
        struct
        {
            __IOM uint32_t ERRRSTSEL0    : 1;
            __IOM uint32_t ERRRSTSEL1    : 1;
            __IOM uint32_t ERRRSTSEL2    : 1;
            __IOM uint32_t ERRRSTSEL3    : 1;
            uint32_t                     : 12;
            __OM uint32_t ERRRSTSEL0_WEN : 1;
            __OM uint32_t ERRRSTSEL1_WEN : 1;
            __OM uint32_t ERRRSTSEL2_WEN : 1;
            __OM uint32_t ERRRSTSEL3_WEN : 1;
            uint32_t                     : 12;
        } CPG_ERRORRST_SEL1_b;
    };
    union
    {
        __IOM uint32_t CPG_ERRORRST_SEL2;
        struct
        {
            __IOM uint32_t ERRRSTSEL0      : 1;
            __IOM uint32_t ERRRSTSEL1      : 1;
            __IOM uint32_t ERRRSTSEL2      : 1;
            __IOM uint32_t ERRRSTSEL3      : 1;
            __IOM uint32_t ERRRSTSEL4      : 1;
            __IOM uint32_t ERRRSTSEL5      : 1;
            __IOM uint32_t ERRRSTSEL6      : 1;
            __IOM uint32_t ERRRSTSEL7      : 1;
            __IOM uint32_t ERRRSTSEL8      : 1;
            __IOM uint32_t ERRRSTSEL9      : 1;
            __IOM uint32_t ERRRSTSEL10     : 1;
            __IOM uint32_t ERRRSTSEL11     : 1;
            __IOM uint32_t ERRRSTSEL12     : 1;
            __IOM uint32_t ERRRSTSEL13     : 1;
            __IOM uint32_t ERRRSTSEL14     : 1;
            __IOM uint32_t ERRRSTSEL15     : 1;
            __OM uint32_t  ERRRSTSEL0_WEN  : 1;
            __OM uint32_t  ERRRSTSEL1_WEN  : 1;
            __OM uint32_t  ERRRSTSEL2_WEN  : 1;
            __OM uint32_t  ERRRSTSEL3_WEN  : 1;
            __OM uint32_t  ERRRSTSEL4_WEN  : 1;
            __OM uint32_t  ERRRSTSEL5_WEN  : 1;
            __OM uint32_t  ERRRSTSEL6_WEN  : 1;
            __OM uint32_t  ERRRSTSEL7_WEN  : 1;
            __OM uint32_t  ERRRSTSEL8_WEN  : 1;
            __OM uint32_t  ERRRSTSEL9_WEN  : 1;
            __OM uint32_t  ERRRSTSEL10_WEN : 1;
            __OM uint32_t  ERRRSTSEL11_WEN : 1;
            __OM uint32_t  ERRRSTSEL12_WEN : 1;
            __OM uint32_t  ERRRSTSEL13_WEN : 1;
            __OM uint32_t  ERRRSTSEL14_WEN : 1;
            __OM uint32_t  ERRRSTSEL15_WEN : 1;
        } CPG_ERRORRST_SEL2_b;
    };
    union
    {
        __IOM uint32_t CPG_ERRORRST_SEL3;
        struct
        {
            __IOM uint32_t ERRRSTSEL0      : 1;
            __IOM uint32_t ERRRSTSEL1      : 1;
            __IOM uint32_t ERRRSTSEL2      : 1;
            __IOM uint32_t ERRRSTSEL3      : 1;
            __IOM uint32_t ERRRSTSEL4      : 1;
            __IOM uint32_t ERRRSTSEL5      : 1;
            __IOM uint32_t ERRRSTSEL6      : 1;
            __IOM uint32_t ERRRSTSEL7      : 1;
            __IOM uint32_t ERRRSTSEL8      : 1;
            __IOM uint32_t ERRRSTSEL9      : 1;
            __IOM uint32_t ERRRSTSEL10     : 1;
            __IOM uint32_t ERRRSTSEL11     : 1;
            __IOM uint32_t ERRRSTSEL12     : 1;
            __IOM uint32_t ERRRSTSEL13     : 1;
            __IOM uint32_t ERRRSTSEL14     : 1;
            __IOM uint32_t ERRRSTSEL15     : 1;
            __OM uint32_t  ERRRSTSEL0_WEN  : 1;
            __OM uint32_t  ERRRSTSEL1_WEN  : 1;
            __OM uint32_t  ERRRSTSEL2_WEN  : 1;
            __OM uint32_t  ERRRSTSEL3_WEN  : 1;
            __OM uint32_t  ERRRSTSEL4_WEN  : 1;
            __OM uint32_t  ERRRSTSEL5_WEN  : 1;
            __OM uint32_t  ERRRSTSEL6_WEN  : 1;
            __OM uint32_t  ERRRSTSEL7_WEN  : 1;
            __OM uint32_t  ERRRSTSEL8_WEN  : 1;
            __OM uint32_t  ERRRSTSEL9_WEN  : 1;
            __OM uint32_t  ERRRSTSEL10_WEN : 1;
            __OM uint32_t  ERRRSTSEL11_WEN : 1;
            __OM uint32_t  ERRRSTSEL12_WEN : 1;
            __OM uint32_t  ERRRSTSEL13_WEN : 1;
            __OM uint32_t  ERRRSTSEL14_WEN : 1;
            __OM uint32_t  ERRRSTSEL15_WEN : 1;
        } CPG_ERRORRST_SEL3_b;
    };
    union
    {
        __IOM uint32_t CPG_ERRORRST_SEL4;
        struct
        {
            __IOM uint32_t ERRRSTSEL0      : 1;
            __IOM uint32_t ERRRSTSEL1      : 1;
            __IOM uint32_t ERRRSTSEL2      : 1;
            __IOM uint32_t ERRRSTSEL3      : 1;
            __IOM uint32_t ERRRSTSEL4      : 1;
            __IOM uint32_t ERRRSTSEL5      : 1;
            __IOM uint32_t ERRRSTSEL6      : 1;
            __IOM uint32_t ERRRSTSEL7      : 1;
            __IOM uint32_t ERRRSTSEL8      : 1;
            __IOM uint32_t ERRRSTSEL9      : 1;
            __IOM uint32_t ERRRSTSEL10     : 1;
            __IOM uint32_t ERRRSTSEL11     : 1;
            __IOM uint32_t ERRRSTSEL12     : 1;
            __IOM uint32_t ERRRSTSEL13     : 1;
            __IOM uint32_t ERRRSTSEL14     : 1;
            __IOM uint32_t ERRRSTSEL15     : 1;
            __OM uint32_t  ERRRSTSEL0_WEN  : 1;
            __OM uint32_t  ERRRSTSEL1_WEN  : 1;
            __OM uint32_t  ERRRSTSEL2_WEN  : 1;
            __OM uint32_t  ERRRSTSEL3_WEN  : 1;
            __OM uint32_t  ERRRSTSEL4_WEN  : 1;
            __OM uint32_t  ERRRSTSEL5_WEN  : 1;
            __OM uint32_t  ERRRSTSEL6_WEN  : 1;
            __OM uint32_t  ERRRSTSEL7_WEN  : 1;
            __OM uint32_t  ERRRSTSEL8_WEN  : 1;
            __OM uint32_t  ERRRSTSEL9_WEN  : 1;
            __OM uint32_t  ERRRSTSEL10_WEN : 1;
            __OM uint32_t  ERRRSTSEL11_WEN : 1;
            __OM uint32_t  ERRRSTSEL12_WEN : 1;
            __OM uint32_t  ERRRSTSEL13_WEN : 1;
            __OM uint32_t  ERRRSTSEL14_WEN : 1;
            __OM uint32_t  ERRRSTSEL15_WEN : 1;
        } CPG_ERRORRST_SEL4_b;
    };
    union
    {
        __IOM uint32_t CPG_ERRORRST_SEL5;
        struct
        {
            __IOM uint32_t ERRRSTSEL0      : 1;
            __IOM uint32_t ERRRSTSEL1      : 1;
            __IOM uint32_t ERRRSTSEL2      : 1;
            __IOM uint32_t ERRRSTSEL3      : 1;
            __IOM uint32_t ERRRSTSEL4      : 1;
            __IOM uint32_t ERRRSTSEL5      : 1;
            __IOM uint32_t ERRRSTSEL6      : 1;
            __IOM uint32_t ERRRSTSEL7      : 1;
            __IOM uint32_t ERRRSTSEL8      : 1;
            __IOM uint32_t ERRRSTSEL9      : 1;
            __IOM uint32_t ERRRSTSEL10     : 1;
            __IOM uint32_t ERRRSTSEL11     : 1;
            __IOM uint32_t ERRRSTSEL12     : 1;
            __IOM uint32_t ERRRSTSEL13     : 1;
            __IOM uint32_t ERRRSTSEL14     : 1;
            __IOM uint32_t ERRRSTSEL15     : 1;
            __OM uint32_t  ERRRSTSEL0_WEN  : 1;
            __OM uint32_t  ERRRSTSEL1_WEN  : 1;
            __OM uint32_t  ERRRSTSEL2_WEN  : 1;
            __OM uint32_t  ERRRSTSEL3_WEN  : 1;
            __OM uint32_t  ERRRSTSEL4_WEN  : 1;
            __OM uint32_t  ERRRSTSEL5_WEN  : 1;
            __OM uint32_t  ERRRSTSEL6_WEN  : 1;
            __OM uint32_t  ERRRSTSEL7_WEN  : 1;
            __OM uint32_t  ERRRSTSEL8_WEN  : 1;
            __OM uint32_t  ERRRSTSEL9_WEN  : 1;
            __OM uint32_t  ERRRSTSEL10_WEN : 1;
            __OM uint32_t  ERRRSTSEL11_WEN : 1;
            __OM uint32_t  ERRRSTSEL12_WEN : 1;
            __OM uint32_t  ERRRSTSEL13_WEN : 1;
            __OM uint32_t  ERRRSTSEL14_WEN : 1;
            __OM uint32_t  ERRRSTSEL15_WEN : 1;
        } CPG_ERRORRST_SEL5_b;
    };
    union
    {
        __IOM uint32_t CPG_ERRORRST_SEL6;
        struct
        {
            __IOM uint32_t ERRRSTSEL0      : 1;
            __IOM uint32_t ERRRSTSEL1      : 1;
            __IOM uint32_t ERRRSTSEL2      : 1;
            __IOM uint32_t ERRRSTSEL3      : 1;
            __IOM uint32_t ERRRSTSEL4      : 1;
            __IOM uint32_t ERRRSTSEL5      : 1;
            __IOM uint32_t ERRRSTSEL6      : 1;
            __IOM uint32_t ERRRSTSEL7      : 1;
            __IOM uint32_t ERRRSTSEL8      : 1;
            __IOM uint32_t ERRRSTSEL9      : 1;
            __IOM uint32_t ERRRSTSEL10     : 1;
            __IOM uint32_t ERRRSTSEL11     : 1;
            __IOM uint32_t ERRRSTSEL12     : 1;
            __IOM uint32_t ERRRSTSEL13     : 1;
            __IOM uint32_t ERRRSTSEL14     : 1;
            __IOM uint32_t ERRRSTSEL15     : 1;
            __OM uint32_t  ERRRSTSEL0_WEN  : 1;
            __OM uint32_t  ERRRSTSEL1_WEN  : 1;
            __OM uint32_t  ERRRSTSEL2_WEN  : 1;
            __OM uint32_t  ERRRSTSEL3_WEN  : 1;
            __OM uint32_t  ERRRSTSEL4_WEN  : 1;
            __OM uint32_t  ERRRSTSEL5_WEN  : 1;
            __OM uint32_t  ERRRSTSEL6_WEN  : 1;
            __OM uint32_t  ERRRSTSEL7_WEN  : 1;
            __OM uint32_t  ERRRSTSEL8_WEN  : 1;
            __OM uint32_t  ERRRSTSEL9_WEN  : 1;
            __OM uint32_t  ERRRSTSEL10_WEN : 1;
            __OM uint32_t  ERRRSTSEL11_WEN : 1;
            __OM uint32_t  ERRRSTSEL12_WEN : 1;
            __OM uint32_t  ERRRSTSEL13_WEN : 1;
            __OM uint32_t  ERRRSTSEL14_WEN : 1;
            __OM uint32_t  ERRRSTSEL15_WEN : 1;
        } CPG_ERRORRST_SEL6_b;
    };
    union
    {
        __IOM uint32_t CPG_ERRORRST_SEL7;
        struct
        {
            __IOM uint32_t ERRRSTSEL0      : 1;
            __IOM uint32_t ERRRSTSEL1      : 1;
            __IOM uint32_t ERRRSTSEL2      : 1;
            __IOM uint32_t ERRRSTSEL3      : 1;
            __IOM uint32_t ERRRSTSEL4      : 1;
            __IOM uint32_t ERRRSTSEL5      : 1;
            __IOM uint32_t ERRRSTSEL6      : 1;
            __IOM uint32_t ERRRSTSEL7      : 1;
            __IOM uint32_t ERRRSTSEL8      : 1;
            __IOM uint32_t ERRRSTSEL9      : 1;
            __IOM uint32_t ERRRSTSEL10     : 1;
            __IOM uint32_t ERRRSTSEL11     : 1;
            __IOM uint32_t ERRRSTSEL12     : 1;
            __IOM uint32_t ERRRSTSEL13     : 1;
            __IOM uint32_t ERRRSTSEL14     : 1;
            __IOM uint32_t ERRRSTSEL15     : 1;
            __OM uint32_t  ERRRSTSEL0_WEN  : 1;
            __OM uint32_t  ERRRSTSEL1_WEN  : 1;
            __OM uint32_t  ERRRSTSEL2_WEN  : 1;
            __OM uint32_t  ERRRSTSEL3_WEN  : 1;
            __OM uint32_t  ERRRSTSEL4_WEN  : 1;
            __OM uint32_t  ERRRSTSEL5_WEN  : 1;
            __OM uint32_t  ERRRSTSEL6_WEN  : 1;
            __OM uint32_t  ERRRSTSEL7_WEN  : 1;
            __OM uint32_t  ERRRSTSEL8_WEN  : 1;
            __OM uint32_t  ERRRSTSEL9_WEN  : 1;
            __OM uint32_t  ERRRSTSEL10_WEN : 1;
            __OM uint32_t  ERRRSTSEL11_WEN : 1;
            __OM uint32_t  ERRRSTSEL12_WEN : 1;
            __OM uint32_t  ERRRSTSEL13_WEN : 1;
            __OM uint32_t  ERRRSTSEL14_WEN : 1;
            __OM uint32_t  ERRRSTSEL15_WEN : 1;
        } CPG_ERRORRST_SEL7_b;
    };
    union
    {
        __IOM uint32_t CPG_ERRORRST_SEL8;
        struct
        {
            __IOM uint32_t ERRRSTSEL0      : 1;
            __IOM uint32_t ERRRSTSEL1      : 1;
            __IOM uint32_t ERRRSTSEL2      : 1;
            __IOM uint32_t ERRRSTSEL3      : 1;
            __IOM uint32_t ERRRSTSEL4      : 1;
            __IOM uint32_t ERRRSTSEL5      : 1;
            __IOM uint32_t ERRRSTSEL6      : 1;
            __IOM uint32_t ERRRSTSEL7      : 1;
            __IOM uint32_t ERRRSTSEL8      : 1;
            __IOM uint32_t ERRRSTSEL9      : 1;
            __IOM uint32_t ERRRSTSEL10     : 1;
            __IOM uint32_t ERRRSTSEL11     : 1;
            __IOM uint32_t ERRRSTSEL12     : 1;
            __IOM uint32_t ERRRSTSEL13     : 1;
            __IOM uint32_t ERRRSTSEL14     : 1;
            __IOM uint32_t ERRRSTSEL15     : 1;
            __OM uint32_t  ERRRSTSEL0_WEN  : 1;
            __OM uint32_t  ERRRSTSEL1_WEN  : 1;
            __OM uint32_t  ERRRSTSEL2_WEN  : 1;
            __OM uint32_t  ERRRSTSEL3_WEN  : 1;
            __OM uint32_t  ERRRSTSEL4_WEN  : 1;
            __OM uint32_t  ERRRSTSEL5_WEN  : 1;
            __OM uint32_t  ERRRSTSEL6_WEN  : 1;
            __OM uint32_t  ERRRSTSEL7_WEN  : 1;
            __OM uint32_t  ERRRSTSEL8_WEN  : 1;
            __OM uint32_t  ERRRSTSEL9_WEN  : 1;
            __OM uint32_t  ERRRSTSEL10_WEN : 1;
            __OM uint32_t  ERRRSTSEL11_WEN : 1;
            __OM uint32_t  ERRRSTSEL12_WEN : 1;
            __OM uint32_t  ERRRSTSEL13_WEN : 1;
            __OM uint32_t  ERRRSTSEL14_WEN : 1;
            __OM uint32_t  ERRRSTSEL15_WEN : 1;
        } CPG_ERRORRST_SEL8_b;
    };
    __IM uint8_t RESERVED26[32];
    union
    {
        __IOM uint32_t CPG_ERROR_RST2;
        struct
        {
            __IOM uint32_t ERROR_RST0      : 1;
            __IOM uint32_t ERROR_RST1      : 1;
            __IOM uint32_t ERROR_RST2      : 1;
            __IOM uint32_t ERROR_RST3      : 1;
            __IOM uint32_t ERROR_RST4      : 1;
            __IOM uint32_t ERROR_RST5      : 1;
            __IOM uint32_t ERROR_RST6      : 1;
            __IOM uint32_t ERROR_RST7      : 1;
            __IOM uint32_t ERROR_RST8      : 1;
            __IOM uint32_t ERROR_RST9      : 1;
            __IOM uint32_t ERROR_RST10     : 1;
            __IOM uint32_t ERROR_RST11     : 1;
            __IOM uint32_t ERROR_RST12     : 1;
            __IOM uint32_t ERROR_RST13     : 1;
            __IOM uint32_t ERROR_RST14     : 1;
            __IOM uint32_t ERROR_RST15     : 1;
            __OM uint32_t  ERROR_RST0_WEN  : 1;
            __OM uint32_t  ERROR_RST1_WEN  : 1;
            __OM uint32_t  ERROR_RST2_WEN  : 1;
            __OM uint32_t  ERROR_RST3_WEN  : 1;
            __OM uint32_t  ERROR_RST4_WEN  : 1;
            __OM uint32_t  ERROR_RST5_WEN  : 1;
            __OM uint32_t  ERROR_RST6_WEN  : 1;
            __OM uint32_t  ERROR_RST7_WEN  : 1;
            __OM uint32_t  ERROR_RST8_WEN  : 1;
            __OM uint32_t  ERROR_RST9_WEN  : 1;
            __OM uint32_t  ERROR_RST10_WEN : 1;
            __OM uint32_t  ERROR_RST11_WEN : 1;
            __OM uint32_t  ERROR_RST12_WEN : 1;
            __OM uint32_t  ERROR_RST13_WEN : 1;
            __OM uint32_t  ERROR_RST14_WEN : 1;
            __OM uint32_t  ERROR_RST15_WEN : 1;
        } CPG_ERROR_RST2_b;
    };
    union
    {
        __IOM uint32_t CPG_ERROR_RST3;
        struct
        {
            __IOM uint32_t ERROR_RST0      : 1;
            __IOM uint32_t ERROR_RST1      : 1;
            __IOM uint32_t ERROR_RST2      : 1;
            __IOM uint32_t ERROR_RST3      : 1;
            __IOM uint32_t ERROR_RST4      : 1;
            __IOM uint32_t ERROR_RST5      : 1;
            __IOM uint32_t ERROR_RST6      : 1;
            __IOM uint32_t ERROR_RST7      : 1;
            __IOM uint32_t ERROR_RST8      : 1;
            __IOM uint32_t ERROR_RST9      : 1;
            __IOM uint32_t ERROR_RST10     : 1;
            __IOM uint32_t ERROR_RST11     : 1;
            __IOM uint32_t ERROR_RST12     : 1;
            __IOM uint32_t ERROR_RST13     : 1;
            __IOM uint32_t ERROR_RST14     : 1;
            __IOM uint32_t ERROR_RST15     : 1;
            __OM uint32_t  ERROR_RST0_WEN  : 1;
            __OM uint32_t  ERROR_RST1_WEN  : 1;
            __OM uint32_t  ERROR_RST2_WEN  : 1;
            __OM uint32_t  ERROR_RST3_WEN  : 1;
            __OM uint32_t  ERROR_RST4_WEN  : 1;
            __OM uint32_t  ERROR_RST5_WEN  : 1;
            __OM uint32_t  ERROR_RST6_WEN  : 1;
            __OM uint32_t  ERROR_RST7_WEN  : 1;
            __OM uint32_t  ERROR_RST8_WEN  : 1;
            __OM uint32_t  ERROR_RST9_WEN  : 1;
            __OM uint32_t  ERROR_RST10_WEN : 1;
            __OM uint32_t  ERROR_RST11_WEN : 1;
            __OM uint32_t  ERROR_RST12_WEN : 1;
            __OM uint32_t  ERROR_RST13_WEN : 1;
            __OM uint32_t  ERROR_RST14_WEN : 1;
            __OM uint32_t  ERROR_RST15_WEN : 1;
        } CPG_ERROR_RST3_b;
    };
    union
    {
        __IOM uint32_t CPG_ERROR_RST4;
        struct
        {
            __IOM uint32_t ERROR_RST0      : 1;
            __IOM uint32_t ERROR_RST1      : 1;
            __IOM uint32_t ERROR_RST2      : 1;
            __IOM uint32_t ERROR_RST3      : 1;
            __IOM uint32_t ERROR_RST4      : 1;
            __IOM uint32_t ERROR_RST5      : 1;
            __IOM uint32_t ERROR_RST6      : 1;
            __IOM uint32_t ERROR_RST7      : 1;
            __IOM uint32_t ERROR_RST8      : 1;
            __IOM uint32_t ERROR_RST9      : 1;
            __IOM uint32_t ERROR_RST10     : 1;
            __IOM uint32_t ERROR_RST11     : 1;
            __IOM uint32_t ERROR_RST12     : 1;
            __IOM uint32_t ERROR_RST13     : 1;
            __IOM uint32_t ERROR_RST14     : 1;
            __IOM uint32_t ERROR_RST15     : 1;
            __OM uint32_t  ERROR_RST0_WEN  : 1;
            __OM uint32_t  ERROR_RST1_WEN  : 1;
            __OM uint32_t  ERROR_RST2_WEN  : 1;
            __OM uint32_t  ERROR_RST3_WEN  : 1;
            __OM uint32_t  ERROR_RST4_WEN  : 1;
            __OM uint32_t  ERROR_RST5_WEN  : 1;
            __OM uint32_t  ERROR_RST6_WEN  : 1;
            __OM uint32_t  ERROR_RST7_WEN  : 1;
            __OM uint32_t  ERROR_RST8_WEN  : 1;
            __OM uint32_t  ERROR_RST9_WEN  : 1;
            __OM uint32_t  ERROR_RST10_WEN : 1;
            __OM uint32_t  ERROR_RST11_WEN : 1;
            __OM uint32_t  ERROR_RST12_WEN : 1;
            __OM uint32_t  ERROR_RST13_WEN : 1;
            __OM uint32_t  ERROR_RST14_WEN : 1;
            __OM uint32_t  ERROR_RST15_WEN : 1;
        } CPG_ERROR_RST4_b;
    };
    union
    {
        __IOM uint32_t CPG_ERROR_RST5;
        struct
        {
            __IOM uint32_t ERROR_RST0      : 1;
            __IOM uint32_t ERROR_RST1      : 1;
            __IOM uint32_t ERROR_RST2      : 1;
            __IOM uint32_t ERROR_RST3      : 1;
            __IOM uint32_t ERROR_RST4      : 1;
            __IOM uint32_t ERROR_RST5      : 1;
            __IOM uint32_t ERROR_RST6      : 1;
            __IOM uint32_t ERROR_RST7      : 1;
            __IOM uint32_t ERROR_RST8      : 1;
            __IOM uint32_t ERROR_RST9      : 1;
            __IOM uint32_t ERROR_RST10     : 1;
            __IOM uint32_t ERROR_RST11     : 1;
            __IOM uint32_t ERROR_RST12     : 1;
            __IOM uint32_t ERROR_RST13     : 1;
            __IOM uint32_t ERROR_RST14     : 1;
            __IOM uint32_t ERROR_RST15     : 1;
            __OM uint32_t  ERROR_RST0_WEN  : 1;
            __OM uint32_t  ERROR_RST1_WEN  : 1;
            __OM uint32_t  ERROR_RST2_WEN  : 1;
            __OM uint32_t  ERROR_RST3_WEN  : 1;
            __OM uint32_t  ERROR_RST4_WEN  : 1;
            __OM uint32_t  ERROR_RST5_WEN  : 1;
            __OM uint32_t  ERROR_RST6_WEN  : 1;
            __OM uint32_t  ERROR_RST7_WEN  : 1;
            __OM uint32_t  ERROR_RST8_WEN  : 1;
            __OM uint32_t  ERROR_RST9_WEN  : 1;
            __OM uint32_t  ERROR_RST10_WEN : 1;
            __OM uint32_t  ERROR_RST11_WEN : 1;
            __OM uint32_t  ERROR_RST12_WEN : 1;
            __OM uint32_t  ERROR_RST13_WEN : 1;
            __OM uint32_t  ERROR_RST14_WEN : 1;
            __OM uint32_t  ERROR_RST15_WEN : 1;
        } CPG_ERROR_RST5_b;
    };
    union
    {
        __IOM uint32_t CPG_ERROR_RST6;
        struct
        {
            __IOM uint32_t ERROR_RST0      : 1;
            __IOM uint32_t ERROR_RST1      : 1;
            __IOM uint32_t ERROR_RST2      : 1;
            __IOM uint32_t ERROR_RST3      : 1;
            __IOM uint32_t ERROR_RST4      : 1;
            __IOM uint32_t ERROR_RST5      : 1;
            __IOM uint32_t ERROR_RST6      : 1;
            __IOM uint32_t ERROR_RST7      : 1;
            __IOM uint32_t ERROR_RST8      : 1;
            __IOM uint32_t ERROR_RST9      : 1;
            __IOM uint32_t ERROR_RST10     : 1;
            __IOM uint32_t ERROR_RST11     : 1;
            __IOM uint32_t ERROR_RST12     : 1;
            __IOM uint32_t ERROR_RST13     : 1;
            __IOM uint32_t ERROR_RST14     : 1;
            __IOM uint32_t ERROR_RST15     : 1;
            __OM uint32_t  ERROR_RST0_WEN  : 1;
            __OM uint32_t  ERROR_RST1_WEN  : 1;
            __OM uint32_t  ERROR_RST2_WEN  : 1;
            __OM uint32_t  ERROR_RST3_WEN  : 1;
            __OM uint32_t  ERROR_RST4_WEN  : 1;
            __OM uint32_t  ERROR_RST5_WEN  : 1;
            __OM uint32_t  ERROR_RST6_WEN  : 1;
            __OM uint32_t  ERROR_RST7_WEN  : 1;
            __OM uint32_t  ERROR_RST8_WEN  : 1;
            __OM uint32_t  ERROR_RST9_WEN  : 1;
            __OM uint32_t  ERROR_RST10_WEN : 1;
            __OM uint32_t  ERROR_RST11_WEN : 1;
            __OM uint32_t  ERROR_RST12_WEN : 1;
            __OM uint32_t  ERROR_RST13_WEN : 1;
            __OM uint32_t  ERROR_RST14_WEN : 1;
            __OM uint32_t  ERROR_RST15_WEN : 1;
        } CPG_ERROR_RST6_b;
    };
    union
    {
        __IOM uint32_t CPG_ERROR_RST7;
        struct
        {
            __IOM uint32_t ERROR_RST0      : 1;
            __IOM uint32_t ERROR_RST1      : 1;
            __IOM uint32_t ERROR_RST2      : 1;
            __IOM uint32_t ERROR_RST3      : 1;
            __IOM uint32_t ERROR_RST4      : 1;
            __IOM uint32_t ERROR_RST5      : 1;
            __IOM uint32_t ERROR_RST6      : 1;
            __IOM uint32_t ERROR_RST7      : 1;
            __IOM uint32_t ERROR_RST8      : 1;
            __IOM uint32_t ERROR_RST9      : 1;
            __IOM uint32_t ERROR_RST10     : 1;
            __IOM uint32_t ERROR_RST11     : 1;
            __IOM uint32_t ERROR_RST12     : 1;
            __IOM uint32_t ERROR_RST13     : 1;
            __IOM uint32_t ERROR_RST14     : 1;
            __IOM uint32_t ERROR_RST15     : 1;
            __OM uint32_t  ERROR_RST0_WEN  : 1;
            __OM uint32_t  ERROR_RST1_WEN  : 1;
            __OM uint32_t  ERROR_RST2_WEN  : 1;
            __OM uint32_t  ERROR_RST3_WEN  : 1;
            __OM uint32_t  ERROR_RST4_WEN  : 1;
            __OM uint32_t  ERROR_RST5_WEN  : 1;
            __OM uint32_t  ERROR_RST6_WEN  : 1;
            __OM uint32_t  ERROR_RST7_WEN  : 1;
            __OM uint32_t  ERROR_RST8_WEN  : 1;
            __OM uint32_t  ERROR_RST9_WEN  : 1;
            __OM uint32_t  ERROR_RST10_WEN : 1;
            __OM uint32_t  ERROR_RST11_WEN : 1;
            __OM uint32_t  ERROR_RST12_WEN : 1;
            __OM uint32_t  ERROR_RST13_WEN : 1;
            __OM uint32_t  ERROR_RST14_WEN : 1;
            __OM uint32_t  ERROR_RST15_WEN : 1;
        } CPG_ERROR_RST7_b;
    };
    union
    {
        __IOM uint32_t CPG_ERROR_RST8;
        struct
        {
            __IOM uint32_t ERROR_RST0      : 1;
            __IOM uint32_t ERROR_RST1      : 1;
            __IOM uint32_t ERROR_RST2      : 1;
            __IOM uint32_t ERROR_RST3      : 1;
            __IOM uint32_t ERROR_RST4      : 1;
            __IOM uint32_t ERROR_RST5      : 1;
            __IOM uint32_t ERROR_RST6      : 1;
            __IOM uint32_t ERROR_RST7      : 1;
            __IOM uint32_t ERROR_RST8      : 1;
            __IOM uint32_t ERROR_RST9      : 1;
            __IOM uint32_t ERROR_RST10     : 1;
            __IOM uint32_t ERROR_RST11     : 1;
            __IOM uint32_t ERROR_RST12     : 1;
            __IOM uint32_t ERROR_RST13     : 1;
            __IOM uint32_t ERROR_RST14     : 1;
            __IOM uint32_t ERROR_RST15     : 1;
            __OM uint32_t  ERROR_RST0_WEN  : 1;
            __OM uint32_t  ERROR_RST1_WEN  : 1;
            __OM uint32_t  ERROR_RST2_WEN  : 1;
            __OM uint32_t  ERROR_RST3_WEN  : 1;
            __OM uint32_t  ERROR_RST4_WEN  : 1;
            __OM uint32_t  ERROR_RST5_WEN  : 1;
            __OM uint32_t  ERROR_RST6_WEN  : 1;
            __OM uint32_t  ERROR_RST7_WEN  : 1;
            __OM uint32_t  ERROR_RST8_WEN  : 1;
            __OM uint32_t  ERROR_RST9_WEN  : 1;
            __OM uint32_t  ERROR_RST10_WEN : 1;
            __OM uint32_t  ERROR_RST11_WEN : 1;
            __OM uint32_t  ERROR_RST12_WEN : 1;
            __OM uint32_t  ERROR_RST13_WEN : 1;
            __OM uint32_t  ERROR_RST14_WEN : 1;
            __OM uint32_t  ERROR_RST15_WEN : 1;
        } CPG_ERROR_RST8_b;
    };
    __IM uint8_t RESERVED27[164];
    union
    {
        __IOM uint32_t CPG_LP_CTL1;
        struct
        {
            __IOM uint32_t STBY           : 1;
            uint32_t                      : 7;
            __IOM uint32_t CA55SLEEP_REQ  : 4;
            __IOM uint32_t CM33SLEEP_REQ  : 1;
            uint32_t                      : 2;
            __IOM uint32_t CM33WRESET_REQ : 1;
            uint32_t                      : 8;
            __IOM uint32_t CA55SLEEP_ACK  : 4;
            __IOM uint32_t CM33SLEEP_ACK  : 1;
            uint32_t                      : 3;
        } CPG_LP_CTL1_b;
    };
    union
    {
        __IOM uint32_t CPG_LP_CTL2;
        struct
        {
            __IOM uint32_t INTMASK_CM33_I : 1;
            uint32_t                      : 31;
        } CPG_LP_CTL2_b;
    };
    union
    {
        __IOM uint32_t CPG_LP_GE3D_CTL;
        struct
        {
            __IM uint32_t QACTIVE_GE3D     : 1;
            __IM uint32_t QACTIVE_AXI_SLV  : 1;
            __IM uint32_t QACTIVE_AXI_MST  : 1;
            __IM uint32_t QACTIVE_ACE_SLV  : 1;
            __IM uint32_t QACTIVE_ACE_MST  : 1;
            uint32_t                       : 3;
            __IOM uint32_t QREQn_GE3D      : 1;
            __IOM uint32_t QREQn_AXI_SLV   : 1;
            __IOM uint32_t QREQn_AXI_MST   : 1;
            __IOM uint32_t QREQn_ACE_SLV   : 1;
            __IOM uint32_t QREQn_ACE_MST   : 1;
            uint32_t                       : 3;
            __IM uint32_t QACCEPTn_GE3D    : 1;
            __IM uint32_t QACCEPTn_AXI_SLV : 1;
            __IM uint32_t QACCEPTn_AXI_MST : 1;
            __IM uint32_t QACCEPTn_ACE_SLV : 1;
            __IM uint32_t QACCEPTn_ACE_MST : 1;
            uint32_t                       : 3;
            __IM uint32_t QDENY_GE3D       : 1;
            __IM uint32_t QDENY_AXI_SLV    : 1;
            __IM uint32_t QDENY_AXI_MST    : 1;
            __IM uint32_t QDENY_ACE_SLV    : 1;
            __IM uint32_t QDENY_ACE_MST    : 1;
            uint32_t                       : 3;
        } CPG_LP_GE3D_CTL_b;
    };
    union
    {
        __IOM uint32_t CPG_CM33_CTL;
        struct
        {
            __IOM uint32_t CM33_BOOTCTL : 1;
            uint32_t                    : 31;
        } CPG_CM33_CTL_b;
    };
    __IM uint8_t RESERVED28[8];
    union
    {
        __IOM uint32_t CPG_LP_CM33CTL0;
        struct
        {
            __IM uint32_t CM33_LP_CTL0      : 1;
            uint32_t                        : 3;
            __IM uint32_t CM33_LP_CTL4      : 1;
            uint32_t                        : 4;
            __IM uint32_t CM33_WARMRESETREQ : 1;
            uint32_t                        : 14;
            __IOM uint32_t CM33_LP_CTL24    : 1;
            __IM uint32_t  CM33_LP_CTL25    : 1;
            uint32_t                        : 6;
        } CPG_LP_CM33CTL0_b;
    };
    union
    {
        __IOM uint32_t CPG_LP_CM33CTL1;
        struct
        {
            uint32_t                     : 3;
            __IM uint32_t CM33_LP_QCH3   : 1;
            __IM uint32_t CM33_LP_QCH4   : 1;
            uint32_t                     : 7;
            __IOM uint32_t CM33_LP_QCH12 : 1;
            __IOM uint32_t CM33_LP_QCH13 : 1;
            uint32_t                     : 6;
            __IM uint32_t CM33_LP_QCH20  : 1;
            __IM uint32_t CM33_LP_QCH21  : 1;
            uint32_t                     : 6;
            __IM uint32_t CM33_LP_QCH28  : 1;
            __IM uint32_t CM33_LP_QCH29  : 1;
            uint32_t                     : 2;
        } CPG_LP_CM33CTL1_b;
    };
    union
    {
        __IOM uint32_t CPG_LP_CA55_CTL1;
        struct
        {
            __IOM uint32_t CLUSTERPREQ    : 1;
            __IOM uint32_t CLUSTERPSTATE  : 7;
            __IM uint32_t  CLUSTERPDENY   : 1;
            __IM uint32_t  CLUSTERPACCEPT : 1;
            uint32_t                      : 22;
        } CPG_LP_CA55_CTL1_b;
    };
    union
    {
        __IOM uint32_t CPG_LP_CA55_CTL2;
        struct
        {
            __IOM uint32_t COREPREQ0    : 1;
            __IOM uint32_t COREPSTATE0  : 6;
            __IM uint32_t  COREPDENY0   : 1;
            __IM uint32_t  COREPACCEPT0 : 1;
            uint32_t                    : 7;
            __IOM uint32_t COREPREQ1    : 1;
            __IOM uint32_t COREPSTATE1  : 6;
            __IM uint32_t  COREPDENY1   : 1;
            __IM uint32_t  COREPACCEPT1 : 1;
            uint32_t                    : 7;
        } CPG_LP_CA55_CTL2_b;
    };
    union
    {
        __IOM uint32_t CPG_LP_CA55_CTL3;
        struct
        {
            __IOM uint32_t COREPREQ2    : 1;
            __IOM uint32_t COREPSTATE2  : 6;
            __IM uint32_t  COREPDENY2   : 1;
            __IM uint32_t  COREPACCEPT2 : 1;
            uint32_t                    : 7;
            __IOM uint32_t COREPREQ3    : 1;
            __IOM uint32_t COREPSTATE3  : 6;
            __IM uint32_t  COREPDENY3   : 1;
            __IM uint32_t  COREPACCEPT3 : 1;
            uint32_t                    : 7;
        } CPG_LP_CA55_CTL3_b;
    };
    __IM uint8_t RESERVED29[8];
    union
    {
        __IM uint32_t CPG_LP_CA55_CTL6;
        struct
        {
            __IM uint32_t COREINSTRRUN : 4;
            uint32_t                   : 28;
        } CPG_LP_CA55_CTL6_b;
    };
    union
    {
        __IOM uint32_t CPG_LP_CA55_CTL7;
        struct
        {
            uint32_t                   : 8;
            __IM uint32_t CSYSACK_AT0  : 1;
            __IM uint32_t CSYSACK_AT1  : 1;
            __IM uint32_t CSYSACK_AT2  : 1;
            __IM uint32_t CSYSACK_AT3  : 1;
            __IM uint32_t CSYSACK_TS   : 1;
            uint32_t                   : 3;
            __IOM uint32_t CSYSREQ_AT0 : 1;
            __IOM uint32_t CSYSREQ_AT1 : 1;
            __IOM uint32_t CSYSREQ_AT2 : 1;
            __IOM uint32_t CSYSREQ_AT3 : 1;
            __IOM uint32_t CSYSREQ_TS  : 1;
            uint32_t                   : 11;
        } CPG_LP_CA55_CTL7_b;
    };
    __IM uint8_t RESERVED30[16];
    union
    {
        __IOM uint32_t CPG_LP_PMU_CTL1;
        struct
        {
            __IOM uint32_t CTRLREQ       : 1;
            __IOM uint32_t PD_OTHERS_REQ : 1;
            __IM uint32_t  CTRLACK       : 1;
            __IM uint32_t  PD_OTHERS_ACK : 1;
            uint32_t                     : 28;
        } CPG_LP_PMU_CTL1_b;
    };
    union
    {
        __IOM uint32_t CPG_LP_SRAM_STBY_CTL1;
        struct
        {
            uint32_t                   : 9;
            __IOM uint32_t VCD_0_SDM   : 1;
            __IOM uint32_t VCD_0_RS    : 1;
            __IM uint32_t  VCD_0_RSO   : 1;
            __IOM uint32_t CANFD_0_SDM : 1;
            __IOM uint32_t CANFD_0_RS  : 1;
            __IM uint32_t  CANFD_0_RSO : 1;
            uint32_t                   : 17;
        } CPG_LP_SRAM_STBY_CTL1_b;
    };
    union
    {
        __IOM uint32_t CPG_LP_SRAM_STBY_CTL2;
        struct
        {
            __IOM uint32_t SRAM_MCPU_0_CENMASK : 1;
            __IOM uint32_t SRAM_MCPU_0_SDM     : 1;
            __IOM uint32_t SRAM_MCPU_0_RS      : 1;
            __IM uint32_t  SRAM_MCPU_0_RSO     : 1;
            uint32_t                           : 8;
            __IOM uint32_t SRAM_NPU_0_CENMASK  : 1;
            __IOM uint32_t SRAM_NPU_0_SDM      : 1;
            __IOM uint32_t SRAM_NPU_0_RS       : 1;
            __IM uint32_t  SRAM_NPU_0_RSO      : 1;
            uint32_t                           : 16;
        } CPG_LP_SRAM_STBY_CTL2_b;
    };
    union
    {
        __IOM uint32_t CPG_LP_SRAM_STBY_CTL3;
        struct
        {
            uint32_t                : 16;
            __IOM uint32_t VSPI_SDM : 1;
            __IOM uint32_t VSPI_RS  : 1;
            __IM uint32_t  VSPI_RSO : 1;
            __IOM uint32_t NPU_SDM  : 1;
            __IOM uint32_t NPU_RS   : 1;
            __IM uint32_t  NPU_RSO  : 1;
            __IOM uint32_t GE3D_SDM : 1;
            __IOM uint32_t GE3D_RS  : 1;
            __IM uint32_t  GE3D_RSO : 1;
            __IOM uint32_t FDP1_SDM : 1;
            __IOM uint32_t FDP1_RS  : 1;
            __IM uint32_t  FDP1_RSO : 1;
            uint32_t                : 4;
        } CPG_LP_SRAM_STBY_CTL3_b;
    };
    __IM uint8_t RESERVED31[20];
    union
    {
        __IOM uint32_t CPG_LP_CST_CTL2;
        struct
        {
            __IOM uint32_t LPI_ATB_REQ_CA550 : 1;
            __IM uint32_t  LPI_ATB_ACK_CA550 : 1;
            uint32_t                         : 6;
            __IOM uint32_t LPI_ATB_REQ_CA551 : 1;
            __IM uint32_t  LPI_ATB_ACK_CA551 : 1;
            uint32_t                         : 6;
            __IOM uint32_t LPI_ATB_REQ_CA552 : 1;
            __IM uint32_t  LPI_ATB_ACK_CA552 : 1;
            uint32_t                         : 6;
            __IOM uint32_t LPI_ATB_REQ_CA553 : 1;
            __IM uint32_t  LPI_ATB_ACK_CA553 : 1;
            uint32_t                         : 6;
        } CPG_LP_CST_CTL2_b;
    };
    __IM uint8_t RESERVED32[20];
    union
    {
        __IM uint32_t CPG_OTP_HANDSHAKE_MON;
        struct
        {
            __IM uint32_t DFT_DONE : 1;
            uint32_t               : 31;
        } CPG_OTP_HANDSHAKE_MON_b;
    };
    union
    {
        __IOM uint32_t CPG_OTHERS_INI;
        struct
        {
            __IOM uint32_t OTHERS_RST : 1;
            uint32_t                  : 31;
        } CPG_OTHERS_INI_b;
    };
    __IM uint8_t RESERVED33[4];
    union
    {
        __IOM uint32_t CPG_LP_NPU_CTL1;
        struct
        {
            __IOM uint32_t CLKQREQn_EU55        : 1;
            __IM uint32_t  CLKQACCEPTn_EU55     : 1;
            __IM uint32_t  CLKQDENY_EU55        : 1;
            __IM uint32_t  CLKQACTIVE_EU55      : 1;
            __IOM uint32_t CLKQREQn_S_ADB_M0    : 1;
            __IM uint32_t  CLKQACCEPTn_S_ADB_M0 : 1;
            __IM uint32_t  CLKQDENY_S_ADB_M0    : 1;
            __IM uint32_t  CLKQACTIVE_S_ADB_M0  : 1;
            __IOM uint32_t CLKQREQn_M_ADB_M0    : 1;
            __IM uint32_t  CLKQACCEPTn_M_ADB_M0 : 1;
            __IM uint32_t  CLKQDENY_M_ADB_M0    : 1;
            __IM uint32_t  CLKQACTIVE_M_ADB_M0  : 1;
            __IOM uint32_t CLKQREQn_S_ADB_M1    : 1;
            __IM uint32_t  CLKQACCEPTn_S_ADB_M1 : 1;
            __IM uint32_t  CLKQDENY_S_ADB_M1    : 1;
            __IM uint32_t  CLKQACTIVE_S_ADB_M1  : 1;
            __IOM uint32_t CLKQREQn_M_ADB_M1    : 1;
            __IM uint32_t  CLKQACCEPTn_M_ADB_M1 : 1;
            __IM uint32_t  CLKQDENY_M_ADB_M1    : 1;
            __IM uint32_t  CLKQACTIVE_M_ADB_M1  : 1;
            __IOM uint32_t CLKQREQn_S_APB       : 1;
            __IM uint32_t  CLKQACCEPTn_S_APB    : 1;
            __IM uint32_t  CLKQDENY_S_APB       : 1;
            __IM uint32_t  CLKQACTIVE_S_APB     : 1;
            __IOM uint32_t CLKQREQn_M_APB       : 1;
            __IM uint32_t  CLKQACCEPTn_M_APB    : 1;
            __IM uint32_t  CLKQDENY_M_APB       : 1;
            __IM uint32_t  CLKQACTIVE_M_APB     : 1;
            __IOM uint32_t PWRQREQn_EU55        : 1;
            __IM uint32_t  PWRQACCEPTn_EU55     : 1;
            __IM uint32_t  PWRQDENY_EU55        : 1;
            __IM uint32_t  PWRQACTIVE_EU55      : 1;
        } CPG_LP_NPU_CTL1_b;
    };
    union
    {
        __IOM uint32_t CPG_LP_NPU_CTL2;
        struct
        {
            __IOM uint32_t PWRQREQn_APB    : 1;
            __IM uint32_t  PWRQACCEPTn_APB : 1;
            __IM uint32_t  PWRQDENY_APB    : 1;
            __IM uint32_t  PWRQACTIVE_APB  : 1;
            uint32_t                       : 28;
        } CPG_LP_NPU_CTL2_b;
    };
    union
    {
        __IOM uint32_t CPG_LP_VSPI_CTL1;
        struct
        {
            __IOM uint32_t fvi_axi_clkqreqns       : 1;
            __IM uint32_t  fvo_axi_clkqacceptns    : 1;
            __IM uint32_t  fvo_axi_clkqdenys       : 1;
            __IM uint32_t  fvo_axi_clkqactives     : 1;
            __IOM uint32_t fvi_axi_clkqreqnm       : 1;
            __IM uint32_t  fvo_axi_clkqacceptnm    : 1;
            __IM uint32_t  fvo_axi_clkqdenym       : 1;
            __IM uint32_t  fvo_axi_clkqactivem     : 1;
            __IOM uint32_t fvi_apb_clk_m_qreq_n    : 1;
            __IM uint32_t  fvo_apb_clk_m_qaccept_n : 1;
            __IM uint32_t  fvo_apb_clk_m_qactive   : 1;
            __IM uint32_t  fvo_apb_clk_m_qdeny     : 1;
            __IOM uint32_t fvi_apb_clk_s_qreq_n    : 1;
            __IM uint32_t  fvo_apb_clk_s_qaccept_n : 1;
            __IM uint32_t  fvo_apb_clk_s_qactive   : 1;
            __IM uint32_t  fvo_apb_clk_s_qdeny     : 1;
            __IOM uint32_t fvi_apb_pwr_qreq_n      : 1;
            __IM uint32_t  fvo_apb_pwr_qaccept_n   : 1;
            __IM uint32_t  fvo_apb_pwr_qactive     : 1;
            __IM uint32_t  fvo_apb_pwr_qdeny       : 1;
            __IOM uint32_t vsi_apb_clk_m_qreq_n    : 1;
            __IM uint32_t  vso_apb_clk_m_qaccept_n : 1;
            __IM uint32_t  vso_apb_clk_m_qactive   : 1;
            __IM uint32_t  vso_apb_clk_m_qdeny     : 1;
            __IOM uint32_t vsi_apb_clk_s_qreq_n    : 1;
            __IM uint32_t  vso_apb_clk_s_qaccept_n : 1;
            __IM uint32_t  vso_apb_clk_s_qactive   : 1;
            __IM uint32_t  vso_apb_clk_s_qdeny     : 1;
            uint32_t                               : 4;
        } CPG_LP_VSPI_CTL1_b;
    };
    union
    {
        __IOM uint32_t CPG_LP_VSPI_CTL2;
        struct
        {
            __IOM uint32_t vsi_apb_pwr_qreq_n    : 1;
            __IM uint32_t  vso_apb_pwr_qaccept_n : 1;
            __IM uint32_t  vso_apb_pwr_qactive   : 1;
            __IM uint32_t  vso_apb_pwr_qdeny     : 1;
            uint32_t                             : 28;
        } CPG_LP_VSPI_CTL2_b;
    };
    union
    {
        __IOM uint32_t CPG_LP_FDP1_CTL;
        struct
        {
            __IOM uint32_t ffi_axi_clksqreqn      : 1;
            __IM uint32_t  ffo_axi_clksqacceptn   : 1;
            __IM uint32_t  ffo_axi_clksqdeny      : 1;
            __IM uint32_t  ffo_axi_clksqactive    : 1;
            __IOM uint32_t ffi_axi_clkmqreqn      : 1;
            __IM uint32_t  ffo_axi_clkmqacceptn   : 1;
            __IM uint32_t  ffo_axi_clkmqdeny      : 1;
            __IM uint32_t  ffo_axi_clkmqactive    : 1;
            __IOM uint32_t ffi_apb_clksqreqn      : 1;
            __IM uint32_t  ffo_apb_clksqacceptn   : 1;
            __IM uint32_t  ffo_apb_clksqdeny      : 1;
            __IM uint32_t  ffo_apb_clksqactive    : 1;
            __IOM uint32_t ffi_apb_clkmqreqn      : 1;
            __IM uint32_t  ffo_apb_clkmqacceptn   : 1;
            __IM uint32_t  ffo_apb_clkmqdeny      : 1;
            __IM uint32_t  ffo_apb_clkmqactive    : 1;
            __IOM uint32_t ffi_apb_pwrqreqn       : 1;
            __IM uint32_t  ffo_apb_pwrqacceptn    : 1;
            __IM uint32_t  ffo_apb_pwrqdeny       : 1;
            __IM uint32_t  ffo_apb_pwrqactive     : 1;
            __IOM uint32_t fd1i_apb_clksqreqn     : 1;
            __IM uint32_t  fd1o_apb_clksqacceptn  : 1;
            __IM uint32_t  fd1o_apb_clksqdeny     : 1;
            __IM uint32_t  fd1o_apb_clksqactive   : 1;
            __IOM uint32_t fd1i_apb_clkmqreqn     : 1;
            __IM uint32_t  fd1o_apb_clkmqacceptn  : 1;
            __IM uint32_t  fd1o_apb_clkmqdeny     : 1;
            __IM uint32_t  fd1o_apb_clkmqactive   : 1;
            __IOM uint32_t fd1i_apb_pwrqreqn      : 1;
            __IM uint32_t  fd1o_apb_pwrqacceptn   : 1;
            __IM uint32_t  fd1o_apb_pwrqdeny      : 1;
            __IM uint32_t  fd1o_apb_pwrqactive    : 1;
        } CPG_LP_FDP1_CTL_b;
    };
    __IM uint8_t RESERVED34[88];
    union
    {
        __IOM uint32_t CPG_BUS_1_MSTOP;
        struct
        {
            __IOM uint32_t MSTOP0_ON      : 1;
            __IOM uint32_t MSTOP1_ON      : 1;
            __IOM uint32_t MSTOP2_ON      : 1;
            __IOM uint32_t MSTOP3_ON      : 1;
            __IOM uint32_t MSTOP4_ON      : 1;
            __IOM uint32_t MSTOP5_ON      : 1;
            __IOM uint32_t MSTOP6_ON      : 1;
            __IOM uint32_t MSTOP7_ON      : 1;
            __IOM uint32_t MSTOP8_ON      : 1;
            __IOM uint32_t MSTOP9_ON      : 1;
            __IOM uint32_t MSTOP10_ON     : 1;
            __IOM uint32_t MSTOP11_ON     : 1;
            __IOM uint32_t MSTOP12_ON     : 1;
            __IOM uint32_t MSTOP13_ON     : 1;
            __IOM uint32_t MSTOP14_ON     : 1;
            __IOM uint32_t MSTOP15_ON     : 1;
            __OM uint32_t  MSTOP0_ON_WEN  : 1;
            __OM uint32_t  MSTOP1_ON_WEN  : 1;
            __OM uint32_t  MSTOP2_ON_WEN  : 1;
            __OM uint32_t  MSTOP3_ON_WEN  : 1;
            __OM uint32_t  MSTOP4_ON_WEN  : 1;
            __OM uint32_t  MSTOP5_ON_WEN  : 1;
            __OM uint32_t  MSTOP6_ON_WEN  : 1;
            __OM uint32_t  MSTOP7_ON_WEN  : 1;
            __OM uint32_t  MSTOP8_ON_WEN  : 1;
            __OM uint32_t  MSTOP9_ON_WEN  : 1;
            __OM uint32_t  MSTOP10_ON_WEN : 1;
            __OM uint32_t  MSTOP11_ON_WEN : 1;
            __OM uint32_t  MSTOP12_ON_WEN : 1;
            __OM uint32_t  MSTOP13_ON_WEN : 1;
            __OM uint32_t  MSTOP14_ON_WEN : 1;
            __OM uint32_t  MSTOP15_ON_WEN : 1;
        } CPG_BUS_1_MSTOP_b;
    };
    union
    {
        __IOM uint32_t CPG_BUS_2_MSTOP;
        struct
        {
            __IOM uint32_t MSTOP0_ON      : 1;
            __IOM uint32_t MSTOP1_ON      : 1;
            __IOM uint32_t MSTOP2_ON      : 1;
            __IOM uint32_t MSTOP3_ON      : 1;
            __IOM uint32_t MSTOP4_ON      : 1;
            __IOM uint32_t MSTOP5_ON      : 1;
            __IOM uint32_t MSTOP6_ON      : 1;
            __IOM uint32_t MSTOP7_ON      : 1;
            __IOM uint32_t MSTOP8_ON      : 1;
            __IOM uint32_t MSTOP9_ON      : 1;
            __IOM uint32_t MSTOP10_ON     : 1;
            __IOM uint32_t MSTOP11_ON     : 1;
            __IOM uint32_t MSTOP12_ON     : 1;
            __IOM uint32_t MSTOP13_ON     : 1;
            __IOM uint32_t MSTOP14_ON     : 1;
            __IOM uint32_t MSTOP15_ON     : 1;
            __OM uint32_t  MSTOP0_ON_WEN  : 1;
            __OM uint32_t  MSTOP1_ON_WEN  : 1;
            __OM uint32_t  MSTOP2_ON_WEN  : 1;
            __OM uint32_t  MSTOP3_ON_WEN  : 1;
            __OM uint32_t  MSTOP4_ON_WEN  : 1;
            __OM uint32_t  MSTOP5_ON_WEN  : 1;
            __OM uint32_t  MSTOP6_ON_WEN  : 1;
            __OM uint32_t  MSTOP7_ON_WEN  : 1;
            __OM uint32_t  MSTOP8_ON_WEN  : 1;
            __OM uint32_t  MSTOP9_ON_WEN  : 1;
            __OM uint32_t  MSTOP10_ON_WEN : 1;
            __OM uint32_t  MSTOP11_ON_WEN : 1;
            __OM uint32_t  MSTOP12_ON_WEN : 1;
            __OM uint32_t  MSTOP13_ON_WEN : 1;
            __OM uint32_t  MSTOP14_ON_WEN : 1;
            __OM uint32_t  MSTOP15_ON_WEN : 1;
        } CPG_BUS_2_MSTOP_b;
    };
    union
    {
        __IOM uint32_t CPG_BUS_3_MSTOP;
        struct
        {
            __IOM uint32_t MSTOP0_ON      : 1;
            __IOM uint32_t MSTOP1_ON      : 1;
            __IOM uint32_t MSTOP2_ON      : 1;
            __IOM uint32_t MSTOP3_ON      : 1;
            __IOM uint32_t MSTOP4_ON      : 1;
            __IOM uint32_t MSTOP5_ON      : 1;
            __IOM uint32_t MSTOP6_ON      : 1;
            __IOM uint32_t MSTOP7_ON      : 1;
            __IOM uint32_t MSTOP8_ON      : 1;
            __IOM uint32_t MSTOP9_ON      : 1;
            __IOM uint32_t MSTOP10_ON     : 1;
            __IOM uint32_t MSTOP11_ON     : 1;
            __IOM uint32_t MSTOP12_ON     : 1;
            __IOM uint32_t MSTOP13_ON     : 1;
            __IOM uint32_t MSTOP14_ON     : 1;
            __IOM uint32_t MSTOP15_ON     : 1;
            __OM uint32_t  MSTOP0_ON_WEN  : 1;
            __OM uint32_t  MSTOP1_ON_WEN  : 1;
            __OM uint32_t  MSTOP2_ON_WEN  : 1;
            __OM uint32_t  MSTOP3_ON_WEN  : 1;
            __OM uint32_t  MSTOP4_ON_WEN  : 1;
            __OM uint32_t  MSTOP5_ON_WEN  : 1;
            __OM uint32_t  MSTOP6_ON_WEN  : 1;
            __OM uint32_t  MSTOP7_ON_WEN  : 1;
            __OM uint32_t  MSTOP8_ON_WEN  : 1;
            __OM uint32_t  MSTOP9_ON_WEN  : 1;
            __OM uint32_t  MSTOP10_ON_WEN : 1;
            __OM uint32_t  MSTOP11_ON_WEN : 1;
            __OM uint32_t  MSTOP12_ON_WEN : 1;
            __OM uint32_t  MSTOP13_ON_WEN : 1;
            __OM uint32_t  MSTOP14_ON_WEN : 1;
            __OM uint32_t  MSTOP15_ON_WEN : 1;
        } CPG_BUS_3_MSTOP_b;
    };
    union
    {
        __IOM uint32_t CPG_BUS_4_MSTOP;
        struct
        {
            __IOM uint32_t MSTOP0_ON      : 1;
            __IOM uint32_t MSTOP1_ON      : 1;
            __IOM uint32_t MSTOP2_ON      : 1;
            __IOM uint32_t MSTOP3_ON      : 1;
            __IOM uint32_t MSTOP4_ON      : 1;
            __IOM uint32_t MSTOP5_ON      : 1;
            __IOM uint32_t MSTOP6_ON      : 1;
            __IOM uint32_t MSTOP7_ON      : 1;
            __IOM uint32_t MSTOP8_ON      : 1;
            __IOM uint32_t MSTOP9_ON      : 1;
            __IOM uint32_t MSTOP10_ON     : 1;
            __IOM uint32_t MSTOP11_ON     : 1;
            __IOM uint32_t MSTOP12_ON     : 1;
            __IOM uint32_t MSTOP13_ON     : 1;
            __IOM uint32_t MSTOP14_ON     : 1;
            __IOM uint32_t MSTOP15_ON     : 1;
            __OM uint32_t  MSTOP0_ON_WEN  : 1;
            __OM uint32_t  MSTOP1_ON_WEN  : 1;
            __OM uint32_t  MSTOP2_ON_WEN  : 1;
            __OM uint32_t  MSTOP3_ON_WEN  : 1;
            __OM uint32_t  MSTOP4_ON_WEN  : 1;
            __OM uint32_t  MSTOP5_ON_WEN  : 1;
            __OM uint32_t  MSTOP6_ON_WEN  : 1;
            __OM uint32_t  MSTOP7_ON_WEN  : 1;
            __OM uint32_t  MSTOP8_ON_WEN  : 1;
            __OM uint32_t  MSTOP9_ON_WEN  : 1;
            __OM uint32_t  MSTOP10_ON_WEN : 1;
            __OM uint32_t  MSTOP11_ON_WEN : 1;
            __OM uint32_t  MSTOP12_ON_WEN : 1;
            __OM uint32_t  MSTOP13_ON_WEN : 1;
            __OM uint32_t  MSTOP14_ON_WEN : 1;
            __OM uint32_t  MSTOP15_ON_WEN : 1;
        } CPG_BUS_4_MSTOP_b;
    };
    union
    {
        __IOM uint32_t CPG_BUS_5_MSTOP;
        struct
        {
            __IOM uint32_t MSTOP0_ON      : 1;
            __IOM uint32_t MSTOP1_ON      : 1;
            __IOM uint32_t MSTOP2_ON      : 1;
            __IOM uint32_t MSTOP3_ON      : 1;
            __IOM uint32_t MSTOP4_ON      : 1;
            __IOM uint32_t MSTOP5_ON      : 1;
            __IOM uint32_t MSTOP6_ON      : 1;
            __IOM uint32_t MSTOP7_ON      : 1;
            __IOM uint32_t MSTOP8_ON      : 1;
            __IOM uint32_t MSTOP9_ON      : 1;
            __IOM uint32_t MSTOP10_ON     : 1;
            __IOM uint32_t MSTOP11_ON     : 1;
            __IOM uint32_t MSTOP12_ON     : 1;
            __IOM uint32_t MSTOP13_ON     : 1;
            __IOM uint32_t MSTOP14_ON     : 1;
            __IOM uint32_t MSTOP15_ON     : 1;
            __OM uint32_t  MSTOP0_ON_WEN  : 1;
            __OM uint32_t  MSTOP1_ON_WEN  : 1;
            __OM uint32_t  MSTOP2_ON_WEN  : 1;
            __OM uint32_t  MSTOP3_ON_WEN  : 1;
            __OM uint32_t  MSTOP4_ON_WEN  : 1;
            __OM uint32_t  MSTOP5_ON_WEN  : 1;
            __OM uint32_t  MSTOP6_ON_WEN  : 1;
            __OM uint32_t  MSTOP7_ON_WEN  : 1;
            __OM uint32_t  MSTOP8_ON_WEN  : 1;
            __OM uint32_t  MSTOP9_ON_WEN  : 1;
            __OM uint32_t  MSTOP10_ON_WEN : 1;
            __OM uint32_t  MSTOP11_ON_WEN : 1;
            __OM uint32_t  MSTOP12_ON_WEN : 1;
            __OM uint32_t  MSTOP13_ON_WEN : 1;
            __OM uint32_t  MSTOP14_ON_WEN : 1;
            __OM uint32_t  MSTOP15_ON_WEN : 1;
        } CPG_BUS_5_MSTOP_b;
    };
    union
    {
        __IOM uint32_t CPG_BUS_6_MSTOP;
        struct
        {
            __IOM uint32_t MSTOP0_ON      : 1;
            __IOM uint32_t MSTOP1_ON      : 1;
            __IOM uint32_t MSTOP2_ON      : 1;
            __IOM uint32_t MSTOP3_ON      : 1;
            __IOM uint32_t MSTOP4_ON      : 1;
            __IOM uint32_t MSTOP5_ON      : 1;
            __IOM uint32_t MSTOP6_ON      : 1;
            __IOM uint32_t MSTOP7_ON      : 1;
            __IOM uint32_t MSTOP8_ON      : 1;
            __IOM uint32_t MSTOP9_ON      : 1;
            __IOM uint32_t MSTOP10_ON     : 1;
            __IOM uint32_t MSTOP11_ON     : 1;
            __IOM uint32_t MSTOP12_ON     : 1;
            __IOM uint32_t MSTOP13_ON     : 1;
            __IOM uint32_t MSTOP14_ON     : 1;
            __IOM uint32_t MSTOP15_ON     : 1;
            __OM uint32_t  MSTOP0_ON_WEN  : 1;
            __OM uint32_t  MSTOP1_ON_WEN  : 1;
            __OM uint32_t  MSTOP2_ON_WEN  : 1;
            __OM uint32_t  MSTOP3_ON_WEN  : 1;
            __OM uint32_t  MSTOP4_ON_WEN  : 1;
            __OM uint32_t  MSTOP5_ON_WEN  : 1;
            __OM uint32_t  MSTOP6_ON_WEN  : 1;
            __OM uint32_t  MSTOP7_ON_WEN  : 1;
            __OM uint32_t  MSTOP8_ON_WEN  : 1;
            __OM uint32_t  MSTOP9_ON_WEN  : 1;
            __OM uint32_t  MSTOP10_ON_WEN : 1;
            __OM uint32_t  MSTOP11_ON_WEN : 1;
            __OM uint32_t  MSTOP12_ON_WEN : 1;
            __OM uint32_t  MSTOP13_ON_WEN : 1;
            __OM uint32_t  MSTOP14_ON_WEN : 1;
            __OM uint32_t  MSTOP15_ON_WEN : 1;
        } CPG_BUS_6_MSTOP_b;
    };
    union
    {
        __IOM uint32_t CPG_BUS_7_MSTOP;
        struct
        {
            __IOM uint32_t MSTOP0_ON      : 1;
            __IOM uint32_t MSTOP1_ON      : 1;
            __IOM uint32_t MSTOP2_ON      : 1;
            __IOM uint32_t MSTOP3_ON      : 1;
            __IOM uint32_t MSTOP4_ON      : 1;
            __IOM uint32_t MSTOP5_ON      : 1;
            __IOM uint32_t MSTOP6_ON      : 1;
            __IOM uint32_t MSTOP7_ON      : 1;
            __IOM uint32_t MSTOP8_ON      : 1;
            __IOM uint32_t MSTOP9_ON      : 1;
            __IOM uint32_t MSTOP10_ON     : 1;
            __IOM uint32_t MSTOP11_ON     : 1;
            __IOM uint32_t MSTOP12_ON     : 1;
            __IOM uint32_t MSTOP13_ON     : 1;
            __IOM uint32_t MSTOP14_ON     : 1;
            __IOM uint32_t MSTOP15_ON     : 1;
            __OM uint32_t  MSTOP0_ON_WEN  : 1;
            __OM uint32_t  MSTOP1_ON_WEN  : 1;
            __OM uint32_t  MSTOP2_ON_WEN  : 1;
            __OM uint32_t  MSTOP3_ON_WEN  : 1;
            __OM uint32_t  MSTOP4_ON_WEN  : 1;
            __OM uint32_t  MSTOP5_ON_WEN  : 1;
            __OM uint32_t  MSTOP6_ON_WEN  : 1;
            __OM uint32_t  MSTOP7_ON_WEN  : 1;
            __OM uint32_t  MSTOP8_ON_WEN  : 1;
            __OM uint32_t  MSTOP9_ON_WEN  : 1;
            __OM uint32_t  MSTOP10_ON_WEN : 1;
            __OM uint32_t  MSTOP11_ON_WEN : 1;
            __OM uint32_t  MSTOP12_ON_WEN : 1;
            __OM uint32_t  MSTOP13_ON_WEN : 1;
            __OM uint32_t  MSTOP14_ON_WEN : 1;
            __OM uint32_t  MSTOP15_ON_WEN : 1;
        } CPG_BUS_7_MSTOP_b;
    };
    union
    {
        __IOM uint32_t CPG_BUS_8_MSTOP;
        struct
        {
            __IOM uint32_t MSTOP0_ON      : 1;
            __IOM uint32_t MSTOP1_ON      : 1;
            __IOM uint32_t MSTOP2_ON      : 1;
            __IOM uint32_t MSTOP3_ON      : 1;
            __IOM uint32_t MSTOP4_ON      : 1;
            __IOM uint32_t MSTOP5_ON      : 1;
            __IOM uint32_t MSTOP6_ON      : 1;
            __IOM uint32_t MSTOP7_ON      : 1;
            __IOM uint32_t MSTOP8_ON      : 1;
            __IOM uint32_t MSTOP9_ON      : 1;
            __IOM uint32_t MSTOP10_ON     : 1;
            __IOM uint32_t MSTOP11_ON     : 1;
            __IOM uint32_t MSTOP12_ON     : 1;
            __IOM uint32_t MSTOP13_ON     : 1;
            __IOM uint32_t MSTOP14_ON     : 1;
            __IOM uint32_t MSTOP15_ON     : 1;
            __OM uint32_t  MSTOP0_ON_WEN  : 1;
            __OM uint32_t  MSTOP1_ON_WEN  : 1;
            __OM uint32_t  MSTOP2_ON_WEN  : 1;
            __OM uint32_t  MSTOP3_ON_WEN  : 1;
            __OM uint32_t  MSTOP4_ON_WEN  : 1;
            __OM uint32_t  MSTOP5_ON_WEN  : 1;
            __OM uint32_t  MSTOP6_ON_WEN  : 1;
            __OM uint32_t  MSTOP7_ON_WEN  : 1;
            __OM uint32_t  MSTOP8_ON_WEN  : 1;
            __OM uint32_t  MSTOP9_ON_WEN  : 1;
            __OM uint32_t  MSTOP10_ON_WEN : 1;
            __OM uint32_t  MSTOP11_ON_WEN : 1;
            __OM uint32_t  MSTOP12_ON_WEN : 1;
            __OM uint32_t  MSTOP13_ON_WEN : 1;
            __OM uint32_t  MSTOP14_ON_WEN : 1;
            __OM uint32_t  MSTOP15_ON_WEN : 1;
        } CPG_BUS_8_MSTOP_b;
    };
    union
    {
        __IOM uint32_t CPG_BUS_9_MSTOP;
        struct
        {
            __IOM uint32_t MSTOP0_ON      : 1;
            __IOM uint32_t MSTOP1_ON      : 1;
            __IOM uint32_t MSTOP2_ON      : 1;
            __IOM uint32_t MSTOP3_ON      : 1;
            __IOM uint32_t MSTOP4_ON      : 1;
            __IOM uint32_t MSTOP5_ON      : 1;
            __IOM uint32_t MSTOP6_ON      : 1;
            __IOM uint32_t MSTOP7_ON      : 1;
            __IOM uint32_t MSTOP8_ON      : 1;
            __IOM uint32_t MSTOP9_ON      : 1;
            __IOM uint32_t MSTOP10_ON     : 1;
            __IOM uint32_t MSTOP11_ON     : 1;
            __IOM uint32_t MSTOP12_ON     : 1;
            __IOM uint32_t MSTOP13_ON     : 1;
            __IOM uint32_t MSTOP14_ON     : 1;
            __IOM uint32_t MSTOP15_ON     : 1;
            __OM uint32_t  MSTOP0_ON_WEN  : 1;
            __OM uint32_t  MSTOP1_ON_WEN  : 1;
            __OM uint32_t  MSTOP2_ON_WEN  : 1;
            __OM uint32_t  MSTOP3_ON_WEN  : 1;
            __OM uint32_t  MSTOP4_ON_WEN  : 1;
            __OM uint32_t  MSTOP5_ON_WEN  : 1;
            __OM uint32_t  MSTOP6_ON_WEN  : 1;
            __OM uint32_t  MSTOP7_ON_WEN  : 1;
            __OM uint32_t  MSTOP8_ON_WEN  : 1;
            __OM uint32_t  MSTOP9_ON_WEN  : 1;
            __OM uint32_t  MSTOP10_ON_WEN : 1;
            __OM uint32_t  MSTOP11_ON_WEN : 1;
            __OM uint32_t  MSTOP12_ON_WEN : 1;
            __OM uint32_t  MSTOP13_ON_WEN : 1;
            __OM uint32_t  MSTOP14_ON_WEN : 1;
            __OM uint32_t  MSTOP15_ON_WEN : 1;
        } CPG_BUS_9_MSTOP_b;
    };
    union
    {
        __IOM uint32_t CPG_BUS_10_MSTOP;
        struct
        {
            __IOM uint32_t MSTOP0_ON      : 1;
            __IOM uint32_t MSTOP1_ON      : 1;
            __IOM uint32_t MSTOP2_ON      : 1;
            __IOM uint32_t MSTOP3_ON      : 1;
            __IOM uint32_t MSTOP4_ON      : 1;
            __IOM uint32_t MSTOP5_ON      : 1;
            __IOM uint32_t MSTOP6_ON      : 1;
            __IOM uint32_t MSTOP7_ON      : 1;
            __IOM uint32_t MSTOP8_ON      : 1;
            __IOM uint32_t MSTOP9_ON      : 1;
            __IOM uint32_t MSTOP10_ON     : 1;
            __IOM uint32_t MSTOP11_ON     : 1;
            __IOM uint32_t MSTOP12_ON     : 1;
            __IOM uint32_t MSTOP13_ON     : 1;
            __IOM uint32_t MSTOP14_ON     : 1;
            __IOM uint32_t MSTOP15_ON     : 1;
            __OM uint32_t  MSTOP0_ON_WEN  : 1;
            __OM uint32_t  MSTOP1_ON_WEN  : 1;
            __OM uint32_t  MSTOP2_ON_WEN  : 1;
            __OM uint32_t  MSTOP3_ON_WEN  : 1;
            __OM uint32_t  MSTOP4_ON_WEN  : 1;
            __OM uint32_t  MSTOP5_ON_WEN  : 1;
            __OM uint32_t  MSTOP6_ON_WEN  : 1;
            __OM uint32_t  MSTOP7_ON_WEN  : 1;
            __OM uint32_t  MSTOP8_ON_WEN  : 1;
            __OM uint32_t  MSTOP9_ON_WEN  : 1;
            __OM uint32_t  MSTOP10_ON_WEN : 1;
            __OM uint32_t  MSTOP11_ON_WEN : 1;
            __OM uint32_t  MSTOP12_ON_WEN : 1;
            __OM uint32_t  MSTOP13_ON_WEN : 1;
            __OM uint32_t  MSTOP14_ON_WEN : 1;
            __OM uint32_t  MSTOP15_ON_WEN : 1;
        } CPG_BUS_10_MSTOP_b;
    };
    union
    {
        __IOM uint32_t CPG_BUS_11_MSTOP;
        struct
        {
            __IOM uint32_t MSTOP0_ON      : 1;
            __IOM uint32_t MSTOP1_ON      : 1;
            __IOM uint32_t MSTOP2_ON      : 1;
            __IOM uint32_t MSTOP3_ON      : 1;
            __IOM uint32_t MSTOP4_ON      : 1;
            __IOM uint32_t MSTOP5_ON      : 1;
            __IOM uint32_t MSTOP6_ON      : 1;
            __IOM uint32_t MSTOP7_ON      : 1;
            __IOM uint32_t MSTOP8_ON      : 1;
            __IOM uint32_t MSTOP9_ON      : 1;
            __IOM uint32_t MSTOP10_ON     : 1;
            __IOM uint32_t MSTOP11_ON     : 1;
            __IOM uint32_t MSTOP12_ON     : 1;
            __IOM uint32_t MSTOP13_ON     : 1;
            __IOM uint32_t MSTOP14_ON     : 1;
            __IOM uint32_t MSTOP15_ON     : 1;
            __OM uint32_t  MSTOP0_ON_WEN  : 1;
            __OM uint32_t  MSTOP1_ON_WEN  : 1;
            __OM uint32_t  MSTOP2_ON_WEN  : 1;
            __OM uint32_t  MSTOP3_ON_WEN  : 1;
            __OM uint32_t  MSTOP4_ON_WEN  : 1;
            __OM uint32_t  MSTOP5_ON_WEN  : 1;
            __OM uint32_t  MSTOP6_ON_WEN  : 1;
            __OM uint32_t  MSTOP7_ON_WEN  : 1;
            __OM uint32_t  MSTOP8_ON_WEN  : 1;
            __OM uint32_t  MSTOP9_ON_WEN  : 1;
            __OM uint32_t  MSTOP10_ON_WEN : 1;
            __OM uint32_t  MSTOP11_ON_WEN : 1;
            __OM uint32_t  MSTOP12_ON_WEN : 1;
            __OM uint32_t  MSTOP13_ON_WEN : 1;
            __OM uint32_t  MSTOP14_ON_WEN : 1;
            __OM uint32_t  MSTOP15_ON_WEN : 1;
        } CPG_BUS_11_MSTOP_b;
    };
    union
    {
        __IOM uint32_t CPG_BUS_12_MSTOP;
        struct
        {
            __IOM uint32_t MSTOP0_ON      : 1;
            __IOM uint32_t MSTOP1_ON      : 1;
            __IOM uint32_t MSTOP2_ON      : 1;
            __IOM uint32_t MSTOP3_ON      : 1;
            __IOM uint32_t MSTOP4_ON      : 1;
            __IOM uint32_t MSTOP5_ON      : 1;
            __IOM uint32_t MSTOP6_ON      : 1;
            __IOM uint32_t MSTOP7_ON      : 1;
            __IOM uint32_t MSTOP8_ON      : 1;
            __IOM uint32_t MSTOP9_ON      : 1;
            __IOM uint32_t MSTOP10_ON     : 1;
            __IOM uint32_t MSTOP11_ON     : 1;
            __IOM uint32_t MSTOP12_ON     : 1;
            __IOM uint32_t MSTOP13_ON     : 1;
            __IOM uint32_t MSTOP14_ON     : 1;
            __IOM uint32_t MSTOP15_ON     : 1;
            __OM uint32_t  MSTOP0_ON_WEN  : 1;
            __OM uint32_t  MSTOP1_ON_WEN  : 1;
            __OM uint32_t  MSTOP2_ON_WEN  : 1;
            __OM uint32_t  MSTOP3_ON_WEN  : 1;
            __OM uint32_t  MSTOP4_ON_WEN  : 1;
            __OM uint32_t  MSTOP5_ON_WEN  : 1;
            __OM uint32_t  MSTOP6_ON_WEN  : 1;
            __OM uint32_t  MSTOP7_ON_WEN  : 1;
            __OM uint32_t  MSTOP8_ON_WEN  : 1;
            __OM uint32_t  MSTOP9_ON_WEN  : 1;
            __OM uint32_t  MSTOP10_ON_WEN : 1;
            __OM uint32_t  MSTOP11_ON_WEN : 1;
            __OM uint32_t  MSTOP12_ON_WEN : 1;
            __OM uint32_t  MSTOP13_ON_WEN : 1;
            __OM uint32_t  MSTOP14_ON_WEN : 1;
            __OM uint32_t  MSTOP15_ON_WEN : 1;
        } CPG_BUS_12_MSTOP_b;
    };
    union
    {
        __IOM uint32_t CPG_BUS_13_MSTOP;
        struct
        {
            __IOM uint32_t MSTOP0_ON      : 1;
            __IOM uint32_t MSTOP1_ON      : 1;
            __IOM uint32_t MSTOP2_ON      : 1;
            __IOM uint32_t MSTOP3_ON      : 1;
            __IOM uint32_t MSTOP4_ON      : 1;
            __IOM uint32_t MSTOP5_ON      : 1;
            __IOM uint32_t MSTOP6_ON      : 1;
            __IOM uint32_t MSTOP7_ON      : 1;
            __IOM uint32_t MSTOP8_ON      : 1;
            __IOM uint32_t MSTOP9_ON      : 1;
            __IOM uint32_t MSTOP10_ON     : 1;
            __IOM uint32_t MSTOP11_ON     : 1;
            __IOM uint32_t MSTOP12_ON     : 1;
            __IOM uint32_t MSTOP13_ON     : 1;
            __IOM uint32_t MSTOP14_ON     : 1;
            __IOM uint32_t MSTOP15_ON     : 1;
            __OM uint32_t  MSTOP0_ON_WEN  : 1;
            __OM uint32_t  MSTOP1_ON_WEN  : 1;
            __OM uint32_t  MSTOP2_ON_WEN  : 1;
            __OM uint32_t  MSTOP3_ON_WEN  : 1;
            __OM uint32_t  MSTOP4_ON_WEN  : 1;
            __OM uint32_t  MSTOP5_ON_WEN  : 1;
            __OM uint32_t  MSTOP6_ON_WEN  : 1;
            __OM uint32_t  MSTOP7_ON_WEN  : 1;
            __OM uint32_t  MSTOP8_ON_WEN  : 1;
            __OM uint32_t  MSTOP9_ON_WEN  : 1;
            __OM uint32_t  MSTOP10_ON_WEN : 1;
            __OM uint32_t  MSTOP11_ON_WEN : 1;
            __OM uint32_t  MSTOP12_ON_WEN : 1;
            __OM uint32_t  MSTOP13_ON_WEN : 1;
            __OM uint32_t  MSTOP14_ON_WEN : 1;
            __OM uint32_t  MSTOP15_ON_WEN : 1;
        } CPG_BUS_13_MSTOP_b;
    };
} R_CPG_Type;

/* =========================================================================================================================== */
/* ================                          Device Specific Peripheral Address Map                           ================ */
/* =========================================================================================================================== */

#define R_CPG_BASE    0x40420010

/* =========================================================================================================================== */
/* ================                                  Peripheral declaration                                   ================ */
/* =========================================================================================================================== */

#define R_CPG    ((R_CPG_Type *) R_CPG_BASE)

#endif
