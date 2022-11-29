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
 * File Name    : poeg_iodefine.h
 * Version      : 1.00
 * Description  : IO define file for poeg.
 *********************************************************************************************************************/

/* ================================================================================================================= */
/* ================                              Device Specific Cluster Section                              ====== */
/* ================================================================================================================= */

/* ================================================================================================================= */
/* ================                            Device Specific Peripheral Section                             ====== */
/* ================================================================================================================= */

#ifndef POEG_IODEFINE_H
#define POEG_IODEFINE_H

typedef struct
{
    union
    {
        __IOM uint32_t POEGGn;
        struct
        {
            __IOM uint32_t PIDF : 1;
            __IOM uint32_t IOCF : 1;
            uint32_t            : 1;
            __IOM uint32_t SSF  : 1;
            __IOM uint32_t PIDE : 1;
            __IOM uint32_t IOCE : 1;
            uint32_t            : 10;
            __IM uint32_t ST    : 1;
            uint32_t            : 11;
            __IOM uint32_t INV  : 1;
            __IOM uint32_t NFEN : 1;
            __IOM uint32_t NFCS : 2;
        } POEGGn_b;
    };
} R_POEGA_Type;

/* ================================================================================================================= */
/* ================                          Device Specific Peripheral Address Map                           ====== */
/* ================================================================================================================= */

#define R_POEGA_BASE    0x40048800
#define R_POEGB_BASE    0x40048C00
#define R_POEGC_BASE    0x40049000
#define R_POEGD_BASE    0x40049400

/* ================================================================================================================= */
/* ================                                  Peripheral declaration                                   ====== */
/* ================================================================================================================= */

#define R_POEGA    ((R_POEGA_Type *) R_POEGA_BASE)
#define R_POEGB    ((R_POEGA_Type *) R_POEGB_BASE)
#define R_POEGC    ((R_POEGA_Type *) R_POEGC_BASE)
#define R_POEGD    ((R_POEGA_Type *) R_POEGD_BASE)

#endif                                 /* POEG_IODEFINE_H */
