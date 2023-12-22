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
 * File Name    : mtu_iobitmask.h
 * Version      : 1.00
 * Description  : IO bit mask file for mtu.
 *********************************************************************************************************************/

#ifndef MTU_IOBITMASK_H
#define MTU_IOBITMASK_H

#define R_MTU_TOERA_OE3B_Msk             (0x01UL)
#define R_MTU_TOERA_OE3B_Pos             (0UL)
#define R_MTU_TOERA_OE4A_Msk             (0x02UL)
#define R_MTU_TOERA_OE4A_Pos             (1UL)
#define R_MTU_TOERA_OE4B_Msk             (0x04UL)
#define R_MTU_TOERA_OE4B_Pos             (2UL)
#define R_MTU_TOERA_OE3D_Msk             (0x08UL)
#define R_MTU_TOERA_OE3D_Pos             (3UL)
#define R_MTU_TOERA_OE4C_Msk             (0x10UL)
#define R_MTU_TOERA_OE4C_Pos             (4UL)
#define R_MTU_TOERA_OE4D_Msk             (0x20UL)
#define R_MTU_TOERA_OE4D_Pos             (5UL)
#define R_MTU_TGCRA_UF_Msk               (0x01UL)
#define R_MTU_TGCRA_UF_Pos               (0UL)
#define R_MTU_TGCRA_VF_Msk               (0x02UL)
#define R_MTU_TGCRA_VF_Pos               (1UL)
#define R_MTU_TGCRA_WF_Msk               (0x04UL)
#define R_MTU_TGCRA_WF_Pos               (2UL)
#define R_MTU_TGCRA_FB_Msk               (0x08UL)
#define R_MTU_TGCRA_FB_Pos               (3UL)
#define R_MTU_TGCRA_P_Msk                (0x10UL)
#define R_MTU_TGCRA_P_Pos                (4UL)
#define R_MTU_TGCRA_N_Msk                (0x20UL)
#define R_MTU_TGCRA_N_Pos                (5UL)
#define R_MTU_TGCRA_BDC_Msk              (0x40UL)
#define R_MTU_TGCRA_BDC_Pos              (6UL)
#define R_MTU_TOCR1A_OLSP_Msk            (0x01UL)
#define R_MTU_TOCR1A_OLSP_Pos            (0UL)
#define R_MTU_TOCR1A_OLSN_Msk            (0x02UL)
#define R_MTU_TOCR1A_OLSN_Pos            (1UL)
#define R_MTU_TOCR1A_TOCS_Msk            (0x04UL)
#define R_MTU_TOCR1A_TOCS_Pos            (2UL)
#define R_MTU_TOCR1A_TOCL_Msk            (0x08UL)
#define R_MTU_TOCR1A_TOCL_Pos            (3UL)
#define R_MTU_TOCR1A_PSYE_Msk            (0x40UL)
#define R_MTU_TOCR1A_PSYE_Pos            (6UL)
#define R_MTU_TOCR2A_OLS1P_Msk           (0x01UL)
#define R_MTU_TOCR2A_OLS1P_Pos           (0UL)
#define R_MTU_TOCR2A_OLS1N_Msk           (0x02UL)
#define R_MTU_TOCR2A_OLS1N_Pos           (1UL)
#define R_MTU_TOCR2A_OLS2P_Msk           (0x04UL)
#define R_MTU_TOCR2A_OLS2P_Pos           (2UL)
#define R_MTU_TOCR2A_OLS2N_Msk           (0x08UL)
#define R_MTU_TOCR2A_OLS2N_Pos           (3UL)
#define R_MTU_TOCR2A_OLS3P_Msk           (0x10UL)
#define R_MTU_TOCR2A_OLS3P_Pos           (4UL)
#define R_MTU_TOCR2A_OLS3N_Msk           (0x20UL)
#define R_MTU_TOCR2A_OLS3N_Pos           (5UL)
#define R_MTU_TOCR2A_BF_Msk              (0xC0UL)
#define R_MTU_TOCR2A_BF_Pos              (6UL)
#define R_MTU_TCDRA_TCDRA_Msk            (0xFFFFUL)
#define R_MTU_TCDRA_TCDRA_Pos            (0UL)
#define R_MTU_TDDRA_TDDRA_Msk            (0xFFFFUL)
#define R_MTU_TDDRA_TDDRA_Pos            (0UL)
#define R_MTU_TCNTSA_TCNTSA_Msk          (0xFFFFUL)
#define R_MTU_TCNTSA_TCNTSA_Pos          (0UL)
#define R_MTU_TCBRA_TCBRA_Msk            (0xFFFFUL)
#define R_MTU_TCBRA_TCBRA_Pos            (0UL)
#define R_MTU_TITCR1A_T4VCOR_Msk         (0x07UL)
#define R_MTU_TITCR1A_T4VCOR_Pos         (0UL)
#define R_MTU_TITCR1A_T4VEN_Msk          (0x08UL)
#define R_MTU_TITCR1A_T4VEN_Pos          (3UL)
#define R_MTU_TITCR1A_T3ACOR_Msk         (0x70UL)
#define R_MTU_TITCR1A_T3ACOR_Pos         (4UL)
#define R_MTU_TITCR1A_T3AEN_Msk          (0x80UL)
#define R_MTU_TITCR1A_T3AEN_Pos          (7UL)
#define R_MTU_TITCNT1A_T4VCNT_Msk        (0x07UL)
#define R_MTU_TITCNT1A_T4VCNT_Pos        (0UL)
#define R_MTU_TITCNT1A_T3ACNT_Msk        (0x70UL)
#define R_MTU_TITCNT1A_T3ACNT_Pos        (4UL)
#define R_MTU_TBTERA_BTE_Msk             (0x03UL)
#define R_MTU_TBTERA_BTE_Pos             (0UL)
#define R_MTU_TDERA_TDER_Msk             (0x01UL)
#define R_MTU_TDERA_TDER_Pos             (0UL)
#define R_MTU_TOLBRA_OLS1P_Msk           (0x01UL)
#define R_MTU_TOLBRA_OLS1P_Pos           (0UL)
#define R_MTU_TOLBRA_OLS1N_Msk           (0x02UL)
#define R_MTU_TOLBRA_OLS1N_Pos           (1UL)
#define R_MTU_TOLBRA_OLS2P_Msk           (0x04UL)
#define R_MTU_TOLBRA_OLS2P_Pos           (2UL)
#define R_MTU_TOLBRA_OLS2N_Msk           (0x08UL)
#define R_MTU_TOLBRA_OLS2N_Pos           (3UL)
#define R_MTU_TOLBRA_OLS3P_Msk           (0x10UL)
#define R_MTU_TOLBRA_OLS3P_Pos           (4UL)
#define R_MTU_TOLBRA_OLS3N_Msk           (0x20UL)
#define R_MTU_TOLBRA_OLS3N_Pos           (5UL)
#define R_MTU_TITMRA_TITM_Msk            (0x01UL)
#define R_MTU_TITMRA_TITM_Pos            (0UL)
#define R_MTU_TITCR2A_TRG4COR_Msk        (0x07UL)
#define R_MTU_TITCR2A_TRG4COR_Pos        (0UL)
#define R_MTU_TITCNT2A_TRG4CNT_Msk       (0x07UL)
#define R_MTU_TITCNT2A_TRG4CNT_Pos       (0UL)
#define R_MTU_TWCRA_WRE_Msk              (0x01UL)
#define R_MTU_TWCRA_WRE_Pos              (0UL)
#define R_MTU_TWCRA_SCC_Msk              (0x02UL)
#define R_MTU_TWCRA_SCC_Pos              (1UL)
#define R_MTU_TWCRA_CCE_Msk              (0x80UL)
#define R_MTU_TWCRA_CCE_Pos              (7UL)
#define R_MTU_TMDR2A_DRS_Msk             (0x01UL)
#define R_MTU_TMDR2A_DRS_Pos             (0UL)
#define R_MTU_TSTRA_CST0_Msk             (0x01UL)
#define R_MTU_TSTRA_CST0_Pos             (0UL)
#define R_MTU_TSTRA_CST1_Msk             (0x02UL)
#define R_MTU_TSTRA_CST1_Pos             (1UL)
#define R_MTU_TSTRA_CST2_Msk             (0x04UL)
#define R_MTU_TSTRA_CST2_Pos             (2UL)
#define R_MTU_TSTRA_CST8_Msk             (0x08UL)
#define R_MTU_TSTRA_CST8_Pos             (3UL)
#define R_MTU_TSTRA_CST3_Msk             (0x40UL)
#define R_MTU_TSTRA_CST3_Pos             (6UL)
#define R_MTU_TSTRA_CST4_Msk             (0x80UL)
#define R_MTU_TSTRA_CST4_Pos             (7UL)
#define R_MTU_TSYRA_SYNC0_Msk            (0x01UL)
#define R_MTU_TSYRA_SYNC0_Pos            (0UL)
#define R_MTU_TSYRA_SYNC1_Msk            (0x02UL)
#define R_MTU_TSYRA_SYNC1_Pos            (1UL)
#define R_MTU_TSYRA_SYNC2_Msk            (0x04UL)
#define R_MTU_TSYRA_SYNC2_Pos            (2UL)
#define R_MTU_TSYRA_SYNC3_Msk            (0x40UL)
#define R_MTU_TSYRA_SYNC3_Pos            (6UL)
#define R_MTU_TSYRA_SYNC4_Msk            (0x80UL)
#define R_MTU_TSYRA_SYNC4_Pos            (7UL)
#define R_MTU_TCSYSTR_SCH7_Msk           (0x01UL)
#define R_MTU_TCSYSTR_SCH7_Pos           (0UL)
#define R_MTU_TCSYSTR_SCH6_Msk           (0x02UL)
#define R_MTU_TCSYSTR_SCH6_Pos           (1UL)
#define R_MTU_TCSYSTR_SCH4_Msk           (0x08UL)
#define R_MTU_TCSYSTR_SCH4_Pos           (3UL)
#define R_MTU_TCSYSTR_SCH3_Msk           (0x10UL)
#define R_MTU_TCSYSTR_SCH3_Pos           (4UL)
#define R_MTU_TCSYSTR_SCH2_Msk           (0x20UL)
#define R_MTU_TCSYSTR_SCH2_Pos           (5UL)
#define R_MTU_TCSYSTR_SCH1_Msk           (0x40UL)
#define R_MTU_TCSYSTR_SCH1_Pos           (6UL)
#define R_MTU_TCSYSTR_SCH0_Msk           (0x80UL)
#define R_MTU_TCSYSTR_SCH0_Pos           (7UL)
#define R_MTU_TRWERA_RWE_Msk             (0x01UL)
#define R_MTU_TRWERA_RWE_Pos             (0UL)
#define R_MTU_TOERB_OE6B_Msk             (0x01UL)
#define R_MTU_TOERB_OE6B_Pos             (0UL)
#define R_MTU_TOERB_OE7A_Msk             (0x02UL)
#define R_MTU_TOERB_OE7A_Pos             (1UL)
#define R_MTU_TOERB_OE7B_Msk             (0x04UL)
#define R_MTU_TOERB_OE7B_Pos             (2UL)
#define R_MTU_TOERB_OE6D_Msk             (0x08UL)
#define R_MTU_TOERB_OE6D_Pos             (3UL)
#define R_MTU_TOERB_OE7C_Msk             (0x10UL)
#define R_MTU_TOERB_OE7C_Pos             (4UL)
#define R_MTU_TOERB_OE7D_Msk             (0x20UL)
#define R_MTU_TOERB_OE7D_Pos             (5UL)
#define R_MTU_TOCR1B_OLSP_Msk            (0x01UL)
#define R_MTU_TOCR1B_OLSP_Pos            (0UL)
#define R_MTU_TOCR1B_OLSN_Msk            (0x02UL)
#define R_MTU_TOCR1B_OLSN_Pos            (1UL)
#define R_MTU_TOCR1B_TOCS_Msk            (0x04UL)
#define R_MTU_TOCR1B_TOCS_Pos            (2UL)
#define R_MTU_TOCR1B_TOCL_Msk            (0x08UL)
#define R_MTU_TOCR1B_TOCL_Pos            (3UL)
#define R_MTU_TOCR1B_PSYE_Msk            (0x40UL)
#define R_MTU_TOCR1B_PSYE_Pos            (6UL)
#define R_MTU_TOCR2B_OLS1P_Msk           (0x01UL)
#define R_MTU_TOCR2B_OLS1P_Pos           (0UL)
#define R_MTU_TOCR2B_OLS1N_Msk           (0x02UL)
#define R_MTU_TOCR2B_OLS1N_Pos           (1UL)
#define R_MTU_TOCR2B_OLS2P_Msk           (0x04UL)
#define R_MTU_TOCR2B_OLS2P_Pos           (2UL)
#define R_MTU_TOCR2B_OLS2N_Msk           (0x08UL)
#define R_MTU_TOCR2B_OLS2N_Pos           (3UL)
#define R_MTU_TOCR2B_OLS3P_Msk           (0x10UL)
#define R_MTU_TOCR2B_OLS3P_Pos           (4UL)
#define R_MTU_TOCR2B_OLS3N_Msk           (0x20UL)
#define R_MTU_TOCR2B_OLS3N_Pos           (5UL)
#define R_MTU_TOCR2B_BF_Msk              (0xC0UL)
#define R_MTU_TOCR2B_BF_Pos              (6UL)
#define R_MTU_TCDRB_TCDRB_Msk            (0xFFFFUL)
#define R_MTU_TCDRB_TCDRB_Pos            (0UL)
#define R_MTU_TDDRB_TDDRB_Msk            (0xFFFFUL)
#define R_MTU_TDDRB_TDDRB_Pos            (0UL)
#define R_MTU_TCNTSB_TCNTSB_Msk          (0xFFFFUL)
#define R_MTU_TCNTSB_TCNTSB_Pos          (0UL)
#define R_MTU_TCBRB_TCBRB_Msk            (0xFFFFUL)
#define R_MTU_TCBRB_TCBRB_Pos            (0UL)
#define R_MTU_TITCR1B_T7VCOR_Msk         (0x07UL)
#define R_MTU_TITCR1B_T7VCOR_Pos         (0UL)
#define R_MTU_TITCR1B_T7VEN_Msk          (0x08UL)
#define R_MTU_TITCR1B_T7VEN_Pos          (3UL)
#define R_MTU_TITCR1B_T6ACOR_Msk         (0x70UL)
#define R_MTU_TITCR1B_T6ACOR_Pos         (4UL)
#define R_MTU_TITCR1B_T6AEN_Msk          (0x80UL)
#define R_MTU_TITCR1B_T6AEN_Pos          (7UL)
#define R_MTU_TITCNT1B_T7VCNT_Msk        (0x07UL)
#define R_MTU_TITCNT1B_T7VCNT_Pos        (0UL)
#define R_MTU_TITCNT1B_T6ACNT_Msk        (0x70UL)
#define R_MTU_TITCNT1B_T6ACNT_Pos        (4UL)
#define R_MTU_TBTERB_BTE_Msk             (0x03UL)
#define R_MTU_TBTERB_BTE_Pos             (0UL)
#define R_MTU_TDERB_TDER_Msk             (0x01UL)
#define R_MTU_TDERB_TDER_Pos             (0UL)
#define R_MTU_TOLBRB_OLS1P_Msk           (0x01UL)
#define R_MTU_TOLBRB_OLS1P_Pos           (0UL)
#define R_MTU_TOLBRB_OLS1N_Msk           (0x02UL)
#define R_MTU_TOLBRB_OLS1N_Pos           (1UL)
#define R_MTU_TOLBRB_OLS2P_Msk           (0x04UL)
#define R_MTU_TOLBRB_OLS2P_Pos           (2UL)
#define R_MTU_TOLBRB_OLS2N_Msk           (0x08UL)
#define R_MTU_TOLBRB_OLS2N_Pos           (3UL)
#define R_MTU_TOLBRB_OLS3P_Msk           (0x10UL)
#define R_MTU_TOLBRB_OLS3P_Pos           (4UL)
#define R_MTU_TOLBRB_OLS3N_Msk           (0x20UL)
#define R_MTU_TOLBRB_OLS3N_Pos           (5UL)
#define R_MTU_TITMRB_TITM_Msk            (0x01UL)
#define R_MTU_TITMRB_TITM_Pos            (0UL)
#define R_MTU_TITCR2B_TRG7COR_Msk        (0x07UL)
#define R_MTU_TITCR2B_TRG7COR_Pos        (0UL)
#define R_MTU_TITCNT2B_TRG7CNT_Msk       (0x07UL)
#define R_MTU_TITCNT2B_TRG7CNT_Pos       (0UL)
#define R_MTU_TWCRB_WRE_Msk              (0x01UL)
#define R_MTU_TWCRB_WRE_Pos              (0UL)
#define R_MTU_TWCRB_SCC_Msk              (0x02UL)
#define R_MTU_TWCRB_SCC_Pos              (1UL)
#define R_MTU_TWCRB_CCE_Msk              (0x80UL)
#define R_MTU_TWCRB_CCE_Pos              (7UL)
#define R_MTU_TMDR2B_DRS_Msk             (0x01UL)
#define R_MTU_TMDR2B_DRS_Pos             (0UL)
#define R_MTU_TSTRB_CST6_Msk             (0x40UL)
#define R_MTU_TSTRB_CST6_Pos             (6UL)
#define R_MTU_TSTRB_CST7_Msk             (0x80UL)
#define R_MTU_TSTRB_CST7_Pos             (7UL)
#define R_MTU_TSYRB_SYNC6_Msk            (0x40UL)
#define R_MTU_TSYRB_SYNC6_Pos            (6UL)
#define R_MTU_TSYRB_SYNC7_Msk            (0x80UL)
#define R_MTU_TSYRB_SYNC7_Pos            (7UL)
#define R_MTU_TRWERB_RWE_Msk             (0x01UL)
#define R_MTU_TRWERB_RWE_Pos             (0UL)
#define R_MTU_NFCR0_NFAEN_Msk            (0x01UL)
#define R_MTU_NFCR0_NFAEN_Pos            (0UL)
#define R_MTU_NFCR0_NFBEN_Msk            (0x02UL)
#define R_MTU_NFCR0_NFBEN_Pos            (1UL)
#define R_MTU_NFCR0_NFCEN_Msk            (0x04UL)
#define R_MTU_NFCR0_NFCEN_Pos            (2UL)
#define R_MTU_NFCR0_NFDEN_Msk            (0x08UL)
#define R_MTU_NFCR0_NFDEN_Pos            (3UL)
#define R_MTU_NFCR0_NFCS_Msk             (0x30UL)
#define R_MTU_NFCR0_NFCS_Pos             (4UL)
#define R_MTU_NFCRC_NFAEN_Msk            (0x01UL)
#define R_MTU_NFCRC_NFAEN_Pos            (0UL)
#define R_MTU_NFCRC_NFBEN_Msk            (0x02UL)
#define R_MTU_NFCRC_NFBEN_Pos            (1UL)
#define R_MTU_NFCRC_NFCEN_Msk            (0x04UL)
#define R_MTU_NFCRC_NFCEN_Pos            (2UL)
#define R_MTU_NFCRC_NFDEN_Msk            (0x08UL)
#define R_MTU_NFCRC_NFDEN_Pos            (3UL)
#define R_MTU_NFCRC_NFCS_Msk             (0x30UL)
#define R_MTU_NFCRC_NFCS_Pos             (4UL)
#define R_MTU_TCR_TPSC_Msk               (0x07UL)
#define R_MTU_TCR_TPSC_Pos               (0UL)
#define R_MTU_TCR_CKEG_Msk               (0x18UL)
#define R_MTU_TCR_CKEG_Pos               (3UL)
#define R_MTU_TCR_CCLR_Msk               (0xE0UL)
#define R_MTU_TCR_CCLR_Pos               (5UL)
#define R_MTU_TMDR1_MD_Msk               (0x0FUL)
#define R_MTU_TMDR1_MD_Pos               (0UL)
#define R_MTU_TMDR1_BFA_Msk              (0x10UL)
#define R_MTU_TMDR1_BFA_Pos              (4UL)
#define R_MTU_TMDR1_BFB_Msk              (0x20UL)
#define R_MTU_TMDR1_BFB_Pos              (5UL)
#define R_MTU_TMDR1_BFE_Msk              (0x40UL)
#define R_MTU_TMDR1_BFE_Pos              (6UL)
#define R_MTU_TIORH_IOA_Msk              (0x0FUL)
#define R_MTU_TIORH_IOA_Pos              (0UL)
#define R_MTU_TIORH_IOB_Msk              (0xF0UL)
#define R_MTU_TIORH_IOB_Pos              (4UL)
#define R_MTU_TIORL_IOC_Msk              (0x0FUL)
#define R_MTU_TIORL_IOC_Pos              (0UL)
#define R_MTU_TIORL_IOD_Msk              (0xF0UL)
#define R_MTU_TIORL_IOD_Pos              (4UL)
#define R_MTU_TIER_TGIEA_Msk             (0x01UL)
#define R_MTU_TIER_TGIEA_Pos             (0UL)
#define R_MTU_TIER_TGIEB_Msk             (0x02UL)
#define R_MTU_TIER_TGIEB_Pos             (1UL)
#define R_MTU_TIER_TGIEC_Msk             (0x04UL)
#define R_MTU_TIER_TGIEC_Pos             (2UL)
#define R_MTU_TIER_TGIED_Msk             (0x08UL)
#define R_MTU_TIER_TGIED_Pos             (3UL)
#define R_MTU_TIER_TCIEV_Msk             (0x10UL)
#define R_MTU_TIER_TCIEV_Pos             (4UL)
#define R_MTU_TIER_TTGE_Msk              (0x80UL)
#define R_MTU_TIER_TTGE_Pos              (7UL)
#define R_MTU_TCNT_TCNT_Msk              (0xFFFFUL)
#define R_MTU_TCNT_TCNT_Pos              (0UL)
#define R_MTU_TGRA_TGRA_Msk              (0xFFFFUL)
#define R_MTU_TGRA_TGRA_Pos              (0UL)
#define R_MTU_TGRB_TGRB_Msk              (0xFFFFUL)
#define R_MTU_TGRB_TGRB_Pos              (0UL)
#define R_MTU_TGRC_TGRC_Msk              (0xFFFFUL)
#define R_MTU_TGRC_TGRC_Pos              (0UL)
#define R_MTU_TGRD_TGRD_Msk              (0xFFFFUL)
#define R_MTU_TGRD_TGRD_Pos              (0UL)
#define R_MTU_TGRE_TGRE_Msk              (0xFFFFUL)
#define R_MTU_TGRE_TGRE_Pos              (0UL)
#define R_MTU_TGRF_TGRF_Msk              (0xFFFFUL)
#define R_MTU_TGRF_TGRF_Pos              (0UL)
#define R_MTU_TIER2_TGIEE_Msk            (0x01UL)
#define R_MTU_TIER2_TGIEE_Pos            (0UL)
#define R_MTU_TIER2_TGIEF_Msk            (0x02UL)
#define R_MTU_TIER2_TGIEF_Pos            (1UL)
#define R_MTU_TIER2_TTGE2_Msk            (0x80UL)
#define R_MTU_TIER2_TTGE2_Pos            (7UL)
#define R_MTU_TBTM_TTSA_Msk              (0x01UL)
#define R_MTU_TBTM_TTSA_Pos              (0UL)
#define R_MTU_TBTM_TTSB_Msk              (0x02UL)
#define R_MTU_TBTM_TTSB_Pos              (1UL)
#define R_MTU_TBTM_TTSE_Msk              (0x04UL)
#define R_MTU_TBTM_TTSE_Pos              (2UL)
#define R_MTU_TCR2_TPSC2_Msk             (0x07UL)
#define R_MTU_TCR2_TPSC2_Pos             (0UL)
#define R_MTU_NFCR1_NFAEN_Msk            (0x01UL)
#define R_MTU_NFCR1_NFAEN_Pos            (0UL)
#define R_MTU_NFCR1_NFBEN_Msk            (0x02UL)
#define R_MTU_NFCR1_NFBEN_Pos            (1UL)
#define R_MTU_NFCR1_NFCEN_Msk            (0x04UL)
#define R_MTU_NFCR1_NFCEN_Pos            (2UL)
#define R_MTU_NFCR1_NFDEN_Msk            (0x08UL)
#define R_MTU_NFCR1_NFDEN_Pos            (3UL)
#define R_MTU_NFCR1_NFCS_Msk             (0x30UL)
#define R_MTU_NFCR1_NFCS_Pos             (4UL)
#define R_MTU_TIOR_IOA_Msk               (0x0FUL)
#define R_MTU_TIOR_IOA_Pos               (0UL)
#define R_MTU_TIOR_IOB_Msk               (0xF0UL)
#define R_MTU_TIOR_IOB_Pos               (4UL)
#define R_MTU_TIER_TCIEU_Msk             (0x20UL)
#define R_MTU_TIER_TCIEU_Pos             (5UL)
#define R_MTU_TSR_TCFD_Msk               (0x80UL)
#define R_MTU_TSR_TCFD_Pos               (7UL)
#define R_MTU_TICCR_I1AE_Msk             (0x01UL)
#define R_MTU_TICCR_I1AE_Pos             (0UL)
#define R_MTU_TICCR_I1BE_Msk             (0x02UL)
#define R_MTU_TICCR_I1BE_Pos             (1UL)
#define R_MTU_TICCR_I2AE_Msk             (0x04UL)
#define R_MTU_TICCR_I2AE_Pos             (2UL)
#define R_MTU_TICCR_I2BE_Msk             (0x08UL)
#define R_MTU_TICCR_I2BE_Pos             (3UL)
#define R_MTU_TMDR3_LWA_Msk              (0x01UL)
#define R_MTU_TMDR3_LWA_Pos              (0UL)
#define R_MTU_TMDR3_PHCKSEL_Msk          (0x02UL)
#define R_MTU_TMDR3_PHCKSEL_Pos          (1UL)
#define R_MTU_TCR2_PCB_Msk               (0x18UL)
#define R_MTU_TCR2_PCB_Pos               (3UL)
#define R_MTU_TCNTLW_TCNTLW_Msk          (0xFFFFFFFFUL)
#define R_MTU_TCNTLW_TCNTLW_Pos          (0UL)
#define R_MTU_TGRALW_TGRALW_Msk          (0xFFFFFFFFUL)
#define R_MTU_TGRALW_TGRALW_Pos          (0UL)
#define R_MTU_TGRBLW_TGRBLW_Msk          (0xFFFFFFFFUL)
#define R_MTU_TGRBLW_TGRBLW_Pos          (0UL)
#define R_MTU_NFCR2_NFAEN_Msk            (0x01UL)
#define R_MTU_NFCR2_NFAEN_Pos            (0UL)
#define R_MTU_NFCR2_NFBEN_Msk            (0x02UL)
#define R_MTU_NFCR2_NFBEN_Pos            (1UL)
#define R_MTU_NFCR2_NFCEN_Msk            (0x04UL)
#define R_MTU_NFCR2_NFCEN_Pos            (2UL)
#define R_MTU_NFCR2_NFDEN_Msk            (0x08UL)
#define R_MTU_NFCR2_NFDEN_Pos            (3UL)
#define R_MTU_NFCR2_NFCS_Msk             (0x30UL)
#define R_MTU_NFCR2_NFCS_Pos             (4UL)
#define R_MTU_NFCR3_NFAEN_Msk            (0x01UL)
#define R_MTU_NFCR3_NFAEN_Pos            (0UL)
#define R_MTU_NFCR3_NFBEN_Msk            (0x02UL)
#define R_MTU_NFCR3_NFBEN_Pos            (1UL)
#define R_MTU_NFCR3_NFCEN_Msk            (0x04UL)
#define R_MTU_NFCR3_NFCEN_Pos            (2UL)
#define R_MTU_NFCR3_NFDEN_Msk            (0x08UL)
#define R_MTU_NFCR3_NFDEN_Pos            (3UL)
#define R_MTU_NFCR3_NFCS_Msk             (0x30UL)
#define R_MTU_NFCR3_NFCS_Pos             (4UL)
#define R_MTU_TIER_TTGE2_Msk             (0x40UL)
#define R_MTU_TIER_TTGE2_Pos             (6UL)
#define R_MTU_TADCR_ITB4VE_Msk           (0x0001UL)
#define R_MTU_TADCR_ITB4VE_Pos           (0UL)
#define R_MTU_TADCR_ITB3AE_Msk           (0x0002UL)
#define R_MTU_TADCR_ITB3AE_Pos           (1UL)
#define R_MTU_TADCR_ITA4VE_Msk           (0x0004UL)
#define R_MTU_TADCR_ITA4VE_Pos           (2UL)
#define R_MTU_TADCR_ITA3AE_Msk           (0x0008UL)
#define R_MTU_TADCR_ITA3AE_Pos           (3UL)
#define R_MTU_TADCR_DT4BE_Msk            (0x0010UL)
#define R_MTU_TADCR_DT4BE_Pos            (4UL)
#define R_MTU_TADCR_UT4BE_Msk            (0x0020UL)
#define R_MTU_TADCR_UT4BE_Pos            (5UL)
#define R_MTU_TADCR_DT4AE_Msk            (0x0040UL)
#define R_MTU_TADCR_DT4AE_Pos            (6UL)
#define R_MTU_TADCR_UT4AE_Msk            (0x0080UL)
#define R_MTU_TADCR_UT4AE_Pos            (7UL)
#define R_MTU_TADCR_BF_Msk               (0xC000UL)
#define R_MTU_TADCR_BF_Pos               (14UL)
#define R_MTU_TADCORA_TADCORA_Msk        (0xFFFFUL)
#define R_MTU_TADCORA_TADCORA_Pos        (0UL)
#define R_MTU_TADCORB_TADCORB_Msk        (0xFFFFUL)
#define R_MTU_TADCORB_TADCORB_Pos        (0UL)
#define R_MTU_TADCOBRA_TADCOBRA_Msk      (0xFFFFUL)
#define R_MTU_TADCOBRA_TADCOBRA_Pos      (0UL)
#define R_MTU_TADCOBRB_TADCOBRB_Msk      (0xFFFFUL)
#define R_MTU_TADCOBRB_TADCOBRB_Pos      (0UL)
#define R_MTU_NFCR4_NFAEN_Msk            (0x01UL)
#define R_MTU_NFCR4_NFAEN_Pos            (0UL)
#define R_MTU_NFCR4_NFBEN_Msk            (0x02UL)
#define R_MTU_NFCR4_NFBEN_Pos            (1UL)
#define R_MTU_NFCR4_NFCEN_Msk            (0x04UL)
#define R_MTU_NFCR4_NFCEN_Pos            (2UL)
#define R_MTU_NFCR4_NFDEN_Msk            (0x08UL)
#define R_MTU_NFCR4_NFDEN_Pos            (3UL)
#define R_MTU_NFCR4_NFCS_Msk             (0x30UL)
#define R_MTU_NFCR4_NFCS_Pos             (4UL)
#define R_MTU_NFCR5_NFUEN_Msk            (0x01UL)
#define R_MTU_NFCR5_NFUEN_Pos            (0UL)
#define R_MTU_NFCR5_NFVEN_Msk            (0x02UL)
#define R_MTU_NFCR5_NFVEN_Pos            (1UL)
#define R_MTU_NFCR5_NFWEN_Msk            (0x04UL)
#define R_MTU_NFCR5_NFWEN_Pos            (2UL)
#define R_MTU_NFCR5_NFCS_Msk             (0x30UL)
#define R_MTU_NFCR5_NFCS_Pos             (4UL)
#define R_MTU_TCNTU_TCNT_Msk             (0xFFFFUL)
#define R_MTU_TCNTU_TCNT_Pos             (0UL)
#define R_MTU_TGRU_TGRU_Msk              (0xFFFFUL)
#define R_MTU_TGRU_TGRU_Pos              (0UL)
#define R_MTU_TCRU_TPSC_Msk              (0x03UL)
#define R_MTU_TCRU_TPSC_Pos              (0UL)
#define R_MTU_TCR2U_TPSC2_Msk            (0x07UL)
#define R_MTU_TCR2U_TPSC2_Pos            (0UL)
#define R_MTU_TCR2U_CKEG_Msk             (0x18UL)
#define R_MTU_TCR2U_CKEG_Pos             (3UL)
#define R_MTU_TIORU_IOC_Msk              (0x1FUL)
#define R_MTU_TIORU_IOC_Pos              (0UL)
#define R_MTU_TCNTV_TCNT_Msk             (0xFFFFUL)
#define R_MTU_TCNTV_TCNT_Pos             (0UL)
#define R_MTU_TGRV_TGRV_Msk              (0xFFFFUL)
#define R_MTU_TGRV_TGRV_Pos              (0UL)
#define R_MTU_TCRV_TPSC_Msk              (0x03UL)
#define R_MTU_TCRV_TPSC_Pos              (0UL)
#define R_MTU_TCR2V_TPSC2_Msk            (0x07UL)
#define R_MTU_TCR2V_TPSC2_Pos            (0UL)
#define R_MTU_TCR2V_CKEG_Msk             (0x18UL)
#define R_MTU_TCR2V_CKEG_Pos             (3UL)
#define R_MTU_TIORV_IOC_Msk              (0x1FUL)
#define R_MTU_TIORV_IOC_Pos              (0UL)
#define R_MTU_TCNTW_TCNT_Msk             (0xFFFFUL)
#define R_MTU_TCNTW_TCNT_Pos             (0UL)
#define R_MTU_TGRW_TGRW_Msk              (0xFFFFUL)
#define R_MTU_TGRW_TGRW_Pos              (0UL)
#define R_MTU_TCRW_TPSC_Msk              (0x03UL)
#define R_MTU_TCRW_TPSC_Pos              (0UL)
#define R_MTU_TCR2W_TPSC2_Msk            (0x07UL)
#define R_MTU_TCR2W_TPSC2_Pos            (0UL)
#define R_MTU_TCR2W_CKEG_Msk             (0x18UL)
#define R_MTU_TCR2W_CKEG_Pos             (3UL)
#define R_MTU_TIORW_IOC_Msk              (0x1FUL)
#define R_MTU_TIORW_IOC_Pos              (0UL)
#define R_MTU_TIER_TGIE5W_Msk            (0x01UL)
#define R_MTU_TIER_TGIE5W_Pos            (0UL)
#define R_MTU_TIER_TGIE5V_Msk            (0x02UL)
#define R_MTU_TIER_TGIE5V_Pos            (1UL)
#define R_MTU_TIER_TGIE5U_Msk            (0x04UL)
#define R_MTU_TIER_TGIE5U_Pos            (2UL)
#define R_MTU_TSTR_CSTW5_Msk             (0x01UL)
#define R_MTU_TSTR_CSTW5_Pos             (0UL)
#define R_MTU_TSTR_CSTV5_Msk             (0x02UL)
#define R_MTU_TSTR_CSTV5_Pos             (1UL)
#define R_MTU_TSTR_CSTU5_Msk             (0x04UL)
#define R_MTU_TSTR_CSTU5_Pos             (2UL)
#define R_MTU_TCNTCMPCLR_CMPCLR5W_Msk    (0x01UL)
#define R_MTU_TCNTCMPCLR_CMPCLR5W_Pos    (0UL)
#define R_MTU_TCNTCMPCLR_CMPCLR5V_Msk    (0x02UL)
#define R_MTU_TCNTCMPCLR_CMPCLR5V_Pos    (1UL)
#define R_MTU_TCNTCMPCLR_CMPCLR5U_Msk    (0x04UL)
#define R_MTU_TCNTCMPCLR_CMPCLR5U_Pos    (2UL)
#define R_MTU_TSYCR_CE2B_Msk             (0x01UL)
#define R_MTU_TSYCR_CE2B_Pos             (0UL)
#define R_MTU_TSYCR_CE2A_Msk             (0x02UL)
#define R_MTU_TSYCR_CE2A_Pos             (1UL)
#define R_MTU_TSYCR_CE1B_Msk             (0x04UL)
#define R_MTU_TSYCR_CE1B_Pos             (2UL)
#define R_MTU_TSYCR_CE1A_Msk             (0x08UL)
#define R_MTU_TSYCR_CE1A_Pos             (3UL)
#define R_MTU_TSYCR_CE0D_Msk             (0x10UL)
#define R_MTU_TSYCR_CE0D_Pos             (4UL)
#define R_MTU_TSYCR_CE0C_Msk             (0x20UL)
#define R_MTU_TSYCR_CE0C_Pos             (5UL)
#define R_MTU_TSYCR_CE0B_Msk             (0x40UL)
#define R_MTU_TSYCR_CE0B_Pos             (6UL)
#define R_MTU_TSYCR_CE0A_Msk             (0x80UL)
#define R_MTU_TSYCR_CE0A_Pos             (7UL)
#define R_MTU_NFCR6_NFAEN_Msk            (0x01UL)
#define R_MTU_NFCR6_NFAEN_Pos            (0UL)
#define R_MTU_NFCR6_NFBEN_Msk            (0x02UL)
#define R_MTU_NFCR6_NFBEN_Pos            (1UL)
#define R_MTU_NFCR6_NFCEN_Msk            (0x04UL)
#define R_MTU_NFCR6_NFCEN_Pos            (2UL)
#define R_MTU_NFCR6_NFDEN_Msk            (0x08UL)
#define R_MTU_NFCR6_NFDEN_Pos            (3UL)
#define R_MTU_NFCR6_NFCS_Msk             (0x30UL)
#define R_MTU_NFCR6_NFCS_Pos             (4UL)
#define R_MTU_TADCR_ITB7VE_Msk           (0x0001UL)
#define R_MTU_TADCR_ITB7VE_Pos           (0UL)
#define R_MTU_TADCR_ITB6AE_Msk           (0x0002UL)
#define R_MTU_TADCR_ITB6AE_Pos           (1UL)
#define R_MTU_TADCR_ITA7VE_Msk           (0x0004UL)
#define R_MTU_TADCR_ITA7VE_Pos           (2UL)
#define R_MTU_TADCR_ITA6AE_Msk           (0x0008UL)
#define R_MTU_TADCR_ITA6AE_Pos           (3UL)
#define R_MTU_TADCR_DT7BE_Msk            (0x0010UL)
#define R_MTU_TADCR_DT7BE_Pos            (4UL)
#define R_MTU_TADCR_UT7BE_Msk            (0x0020UL)
#define R_MTU_TADCR_UT7BE_Pos            (5UL)
#define R_MTU_TADCR_DT7AE_Msk            (0x0040UL)
#define R_MTU_TADCR_DT7AE_Pos            (6UL)
#define R_MTU_TADCR_UT7AE_Msk            (0x0080UL)
#define R_MTU_TADCR_UT7AE_Pos            (7UL)
#define R_MTU_NFCR7_NFAEN_Msk            (0x01UL)
#define R_MTU_NFCR7_NFAEN_Pos            (0UL)
#define R_MTU_NFCR7_NFBEN_Msk            (0x02UL)
#define R_MTU_NFCR7_NFBEN_Pos            (1UL)
#define R_MTU_NFCR7_NFCEN_Msk            (0x04UL)
#define R_MTU_NFCR7_NFCEN_Pos            (2UL)
#define R_MTU_NFCR7_NFDEN_Msk            (0x08UL)
#define R_MTU_NFCR7_NFDEN_Pos            (3UL)
#define R_MTU_NFCR7_NFCS_Msk             (0x30UL)
#define R_MTU_NFCR7_NFCS_Pos             (4UL)
#define R_MTU_NFCR8_NFAEN_Msk            (0x01UL)
#define R_MTU_NFCR8_NFAEN_Pos            (0UL)
#define R_MTU_NFCR8_NFBEN_Msk            (0x02UL)
#define R_MTU_NFCR8_NFBEN_Pos            (1UL)
#define R_MTU_NFCR8_NFCEN_Msk            (0x04UL)
#define R_MTU_NFCR8_NFCEN_Pos            (2UL)
#define R_MTU_NFCR8_NFDEN_Msk            (0x08UL)
#define R_MTU_NFCR8_NFDEN_Pos            (3UL)
#define R_MTU_NFCR8_NFCS_Msk             (0x30UL)
#define R_MTU_NFCR8_NFCS_Pos             (4UL)

#endif
