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
 * File Name    : mhu_iodefine.h
 * Version      : 1.00
 * Description  : IO define file for mhu.
 *********************************************************************************************************************/

/* ================================================================================================================= */
/* ================                              Device Specific Cluster Section                              ====== */
/* ================================================================================================================= */

/* ================================================================================================================= */
/* ================                            Device Specific Peripheral Section                             ====== */
/* ================================================================================================================= */

#ifndef MHU_IODEFINE_H
#define MHU_IODEFINE_H

typedef struct
{
    union
    {
        __IM uint32_t MSG_INT_STSn;
        struct
        {
            __IM uint32_t STAT : 1;
            uint32_t           : 31;
        } MSG_INT_STSn_b;
    };

    union
    {
        __IOM uint32_t MSG_INT_SETn;
        struct
        {
            __IOM uint32_t SET : 1;
            uint32_t           : 31;
        } MSG_INT_SETn_b;
    };

    union
    {
        __IOM uint32_t MSG_INT_CLRn;
        struct
        {
            __IOM uint32_t CLEAR : 1;
            uint32_t             : 31;
        } MSG_INT_CLRn_b;
    };

    __IM uint8_t RESERVED[4];
    union
    {
        __IM uint32_t RSP_INT_STSn;
        struct
        {
            __IM uint32_t STAT : 1;
            uint32_t           : 31;
        } RSP_INT_STSn_b;
    };

    union
    {
        __IOM uint32_t RSP_INT_SETn;
        struct
        {
            __IOM uint32_t SET : 1;
            uint32_t           : 31;
        } RSP_INT_SETn_b;
    };

    union
    {
        __IOM uint32_t RSP_INT_CLRn;
        struct
        {
            __IOM uint32_t CLEAR : 1;
            uint32_t             : 31;
        } RSP_INT_CLRn_b;
    };
} R_MHU0_Type;

typedef struct
{
    union
    {
        __IM uint32_t SW_INT_STSn;
        struct
        {
            __IM uint32_t STAT : 1;
            uint32_t           : 31;
        } SW_INT_STSn_b;
    };

    union
    {
        __IOM uint32_t SW_INT_SETn;
        struct
        {
            __IOM uint32_t SET : 1;
            uint32_t           : 31;
        } SW_INT_SETn_b;
    };

    union
    {
        __IOM uint32_t SW_INT_CLRn;
        struct
        {
            __IOM uint32_t CLEAR : 1;
            uint32_t             : 31;
        } SW_INT_CLRn_b;
    };
} R_MHU_SWINT0_Type;

/* ================================================================================================================= */
/* ================                          Device Specific Peripheral Address Map                           ====== */
/* ================================================================================================================= */

#define R_MHU_NS0_BASE        0x50400000
#define R_MHU_NS1_BASE        0x50400020
#define R_MHU_NS2_BASE        0x50400040
#define R_MHU_NS3_BASE        0x50400060
#define R_MHU_NS4_BASE        0x50400080
#define R_MHU_NS5_BASE        0x504000A0
#define R_MHU_SWINT0_BASE     0x50400800
#define R_MHU_SWINT1_BASE     0x50400810
#define R_MHU_SWINT2_BASE     0x50400820
#define R_MHU_SWINT3_BASE     0x50400830
#define R_MHU_S0_BASE         0x40401000
#define R_MHU_S1_BASE         0x40401020
#define R_MHU_S2_BASE         0x40401040
#define R_MHU_S3_BASE         0x40401060
#define R_MHU_S4_BASE         0x40401080
#define R_MHU_S5_BASE         0x404010A0

/* ================================================================================================================= */
/* ================                                  Peripheral declaration                                   ====== */
/* ================================================================================================================= */

#define R_MHU_NS0        ((R_MHU0_Type *) R_MHU_NS0_BASE)
#define R_MHU_NS1        ((R_MHU0_Type *) R_MHU_NS1_BASE)
#define R_MHU_NS2        ((R_MHU0_Type *) R_MHU_NS2_BASE)
#define R_MHU_NS3        ((R_MHU0_Type *) R_MHU_NS3_BASE)
#define R_MHU_NS4        ((R_MHU0_Type *) R_MHU_NS4_BASE)
#define R_MHU_NS5        ((R_MHU0_Type *) R_MHU_NS5_BASE)
#define R_MHU_SWINT0     ((R_MHU_SWINT0_Type *) R_MHU_SWINT0_BASE)
#define R_MHU_SWINT1     ((R_MHU_SWINT0_Type *) R_MHU_SWINT1_BASE)
#define R_MHU_SWINT2     ((R_MHU_SWINT0_Type *) R_MHU_SWINT2_BASE)
#define R_MHU_SWINT3     ((R_MHU_SWINT0_Type *) R_MHU_SWINT3_BASE)
#define R_MHU_S0         ((R_MHU0_Type *) R_MHU_S0_BASE)
#define R_MHU_S1         ((R_MHU0_Type *) R_MHU_S1_BASE)
#define R_MHU_S2         ((R_MHU0_Type *) R_MHU_S2_BASE)
#define R_MHU_S3         ((R_MHU0_Type *) R_MHU_S3_BASE)
#define R_MHU_S4         ((R_MHU0_Type *) R_MHU_S4_BASE)
#define R_MHU_S5         ((R_MHU0_Type *) R_MHU_S5_BASE)

#endif                                 /* MHU_IODEFINE_H */
