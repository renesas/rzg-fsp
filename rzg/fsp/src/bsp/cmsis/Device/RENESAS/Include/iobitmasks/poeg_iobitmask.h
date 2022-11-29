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
 * File Name    : poeg_iobitmask.h
 * Version      : 1.00
 * Description  : IO bit mask file for poeg.
 *********************************************************************************************************************/

#ifndef POEG_IOBITMASK_H
#define POEG_IOBITMASK_H

#define R_POEG_POEGGn_PIDF_Msk    (0x00000001UL)
#define R_POEG_POEGGn_PIDF_Pos    (0UL)
#define R_POEG_POEGGn_IOCF_Msk    (0x00000002UL)
#define R_POEG_POEGGn_IOCF_Pos    (1UL)
#define R_POEG_POEGGn_SSF_Msk     (0x00000008UL)
#define R_POEG_POEGGn_SSF_Pos     (3UL)
#define R_POEG_POEGGn_PIDE_Msk    (0x00000010UL)
#define R_POEG_POEGGn_PIDE_Pos    (4UL)
#define R_POEG_POEGGn_IOCE_Msk    (0x00000020UL)
#define R_POEG_POEGGn_IOCE_Pos    (5UL)
#define R_POEG_POEGGn_ST_Msk      (0x00010000UL)
#define R_POEG_POEGGn_ST_Pos      (16UL)
#define R_POEG_POEGGn_INV_Msk     (0x10000000UL)
#define R_POEG_POEGGn_INV_Pos     (28UL)
#define R_POEG_POEGGn_NFEN_Msk    (0x20000000UL)
#define R_POEG_POEGGn_NFEN_Pos    (29UL)
#define R_POEG_POEGGn_NFCS_Msk    (0xC0000000UL)
#define R_POEG_POEGGn_NFCS_Pos    (30UL)

#endif                                 /* POEG_IOBITMASK_H */
