/*
* Copyright (c) 2020 - 2024 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/**********************************************************************************************************************
 * File Name    : dmac_b_iobitmask.h
 * Version      : 1.00
 * Description  : IO bit mask file for dmac.
 *********************************************************************************************************************/

#ifndef DMAC_B_IOBITMASK_H
#define DMAC_B_IOBITMASK_H

#define R_DMAC_B0_GRP_CH_CHSTAT_EN_Msk           (0x00000001UL)
#define R_DMAC_B0_GRP_CH_CHSTAT_EN_Pos           (0UL)
#define R_DMAC_B0_GRP_CH_CHSTAT_RQST_Msk         (0x00000002UL)
#define R_DMAC_B0_GRP_CH_CHSTAT_RQST_Pos         (1UL)
#define R_DMAC_B0_GRP_CH_CHSTAT_TACT_Msk         (0x00000004UL)
#define R_DMAC_B0_GRP_CH_CHSTAT_TACT_Pos         (2UL)
#define R_DMAC_B0_GRP_CH_CHSTAT_SUS_Msk          (0x00000008UL)
#define R_DMAC_B0_GRP_CH_CHSTAT_SUS_Pos          (3UL)
#define R_DMAC_B0_GRP_CH_CHSTAT_ER_Msk           (0x00000010UL)
#define R_DMAC_B0_GRP_CH_CHSTAT_ER_Pos           (4UL)
#define R_DMAC_B0_GRP_CH_CHSTAT_END_Msk          (0x00000020UL)
#define R_DMAC_B0_GRP_CH_CHSTAT_END_Pos          (5UL)
#define R_DMAC_B0_GRP_CH_CHSTAT_TC_Msk           (0x00000040UL)
#define R_DMAC_B0_GRP_CH_CHSTAT_TC_Pos           (6UL)
#define R_DMAC_B0_GRP_CH_CHSTAT_SR_Msk           (0x00000080UL)
#define R_DMAC_B0_GRP_CH_CHSTAT_SR_Pos           (7UL)
#define R_DMAC_B0_GRP_CH_CHSTAT_DL_Msk           (0x00000100UL)
#define R_DMAC_B0_GRP_CH_CHSTAT_DL_Pos           (8UL)
#define R_DMAC_B0_GRP_CH_CHSTAT_DW_Msk           (0x00000200UL)
#define R_DMAC_B0_GRP_CH_CHSTAT_DW_Pos           (9UL)
#define R_DMAC_B0_GRP_CH_CHSTAT_DER_Msk          (0x00000400UL)
#define R_DMAC_B0_GRP_CH_CHSTAT_DER_Pos          (10UL)
#define R_DMAC_B0_GRP_CH_CHSTAT_MODE_Msk         (0x00000800UL)
#define R_DMAC_B0_GRP_CH_CHSTAT_MODE_Pos         (11UL)
#define R_DMAC_B0_GRP_CH_CHSTAT_INTMSK_Msk       (0x00010000UL)
#define R_DMAC_B0_GRP_CH_CHSTAT_INTMSK_Pos       (16UL)
#define R_DMAC_B0_GRP_CH_CHCTRL_SETEN_Msk        (0x00000001UL)
#define R_DMAC_B0_GRP_CH_CHCTRL_SETEN_Pos        (0UL)
#define R_DMAC_B0_GRP_CH_CHCTRL_CLREN_Msk        (0x00000002UL)
#define R_DMAC_B0_GRP_CH_CHCTRL_CLREN_Pos        (1UL)
#define R_DMAC_B0_GRP_CH_CHCTRL_STG_Msk          (0x00000004UL)
#define R_DMAC_B0_GRP_CH_CHCTRL_STG_Pos          (2UL)
#define R_DMAC_B0_GRP_CH_CHCTRL_SWRST_Msk        (0x00000008UL)
#define R_DMAC_B0_GRP_CH_CHCTRL_SWRST_Pos        (3UL)
#define R_DMAC_B0_GRP_CH_CHCTRL_CLRRQ_Msk        (0x00000010UL)
#define R_DMAC_B0_GRP_CH_CHCTRL_CLRRQ_Pos        (4UL)
#define R_DMAC_B0_GRP_CH_CHCTRL_CLREND_Msk       (0x00000020UL)
#define R_DMAC_B0_GRP_CH_CHCTRL_CLREND_Pos       (5UL)
#define R_DMAC_B0_GRP_CH_CHCTRL_CLRTC_Msk        (0x00000040UL)
#define R_DMAC_B0_GRP_CH_CHCTRL_CLRTC_Pos        (6UL)
#define R_DMAC_B0_GRP_CH_CHCTRL_SETSUS_Msk       (0x00000100UL)
#define R_DMAC_B0_GRP_CH_CHCTRL_SETSUS_Pos       (8UL)
#define R_DMAC_B0_GRP_CH_CHCTRL_CLRSUS_Msk       (0x00000200UL)
#define R_DMAC_B0_GRP_CH_CHCTRL_CLRSUS_Pos       (9UL)
#define R_DMAC_B0_GRP_CH_CHCTRL_SETINTMSK_Msk    (0x00010000UL)
#define R_DMAC_B0_GRP_CH_CHCTRL_SETINTMSK_Pos    (16UL)
#define R_DMAC_B0_GRP_CH_CHCTRL_CLRINTMSK_Msk    (0x00020000UL)
#define R_DMAC_B0_GRP_CH_CHCTRL_CLRINTMSK_Pos    (17UL)
#define R_DMAC_B0_GRP_CH_CHCFG_SEL_Msk           (0x00000007UL)
#define R_DMAC_B0_GRP_CH_CHCFG_SEL_Pos           (0UL)
#define R_DMAC_B0_GRP_CH_CHCFG_REQD_Msk          (0x00000008UL)
#define R_DMAC_B0_GRP_CH_CHCFG_REQD_Pos          (3UL)
#define R_DMAC_B0_GRP_CH_CHCFG_LOEN_Msk          (0x00000010UL)
#define R_DMAC_B0_GRP_CH_CHCFG_LOEN_Pos          (4UL)
#define R_DMAC_B0_GRP_CH_CHCFG_HIEN_Msk          (0x00000020UL)
#define R_DMAC_B0_GRP_CH_CHCFG_HIEN_Pos          (5UL)
#define R_DMAC_B0_GRP_CH_CHCFG_LVL_Msk           (0x00000040UL)
#define R_DMAC_B0_GRP_CH_CHCFG_LVL_Pos           (6UL)
#define R_DMAC_B0_GRP_CH_CHCFG_AM_Msk            (0x00000700UL)
#define R_DMAC_B0_GRP_CH_CHCFG_AM_Pos            (8UL)
#define R_DMAC_B0_GRP_CH_CHCFG_SDS_Msk           (0x0000F000UL)
#define R_DMAC_B0_GRP_CH_CHCFG_SDS_Pos           (12UL)
#define R_DMAC_B0_GRP_CH_CHCFG_DDS_Msk           (0x000F0000UL)
#define R_DMAC_B0_GRP_CH_CHCFG_DDS_Pos           (16UL)
#define R_DMAC_B0_GRP_CH_CHCFG_SAD_Msk           (0x00100000UL)
#define R_DMAC_B0_GRP_CH_CHCFG_SAD_Pos           (20UL)
#define R_DMAC_B0_GRP_CH_CHCFG_DAD_Msk           (0x00200000UL)
#define R_DMAC_B0_GRP_CH_CHCFG_DAD_Pos           (21UL)
#define R_DMAC_B0_GRP_CH_CHCFG_TM_Msk            (0x00400000UL)
#define R_DMAC_B0_GRP_CH_CHCFG_TM_Pos            (22UL)
#define R_DMAC_B0_GRP_CH_CHCFG_DEM_Msk           (0x01000000UL)
#define R_DMAC_B0_GRP_CH_CHCFG_DEM_Pos           (24UL)
#define R_DMAC_B0_GRP_CH_CHCFG_TCM_Msk           (0x02000000UL)
#define R_DMAC_B0_GRP_CH_CHCFG_TCM_Pos           (25UL)
#define R_DMAC_B0_GRP_CH_CHCFG_SBE_Msk           (0x08000000UL)
#define R_DMAC_B0_GRP_CH_CHCFG_SBE_Pos           (27UL)
#define R_DMAC_B0_GRP_CH_CHCFG_RSEL_Msk          (0x10000000UL)
#define R_DMAC_B0_GRP_CH_CHCFG_RSEL_Pos          (28UL)
#define R_DMAC_B0_GRP_CH_CHCFG_RSW_Msk           (0x20000000UL)
#define R_DMAC_B0_GRP_CH_CHCFG_RSW_Pos           (29UL)
#define R_DMAC_B0_GRP_CH_CHCFG_REN_Msk           (0x40000000UL)
#define R_DMAC_B0_GRP_CH_CHCFG_REN_Pos           (30UL)
#define R_DMAC_B0_GRP_CH_CHCFG_DMS_Msk           (0x80000000UL)
#define R_DMAC_B0_GRP_CH_CHCFG_DMS_Pos           (31UL)
#define R_DMAC_B0_GRP_CH_CHITVL_ITVL_Msk         (0x0000FFFFUL)
#define R_DMAC_B0_GRP_CH_CHITVL_ITVL_Pos         (0UL)
#define R_DMAC_B0_GRP_CH_CHEXT_SPR_Msk           (0x00000007UL)
#define R_DMAC_B0_GRP_CH_CHEXT_SPR_Pos           (0UL)
#define R_DMAC_B0_GRP_CH_CHEXT_SCA_Msk           (0x000000F0UL)
#define R_DMAC_B0_GRP_CH_CHEXT_SCA_Pos           (4UL)
#define R_DMAC_B0_GRP_CH_CHEXT_DPR_Msk           (0x00000700UL)
#define R_DMAC_B0_GRP_CH_CHEXT_DPR_Pos           (8UL)
#define R_DMAC_B0_GRP_CH_CHEXT_DCA_Msk           (0x0000F000UL)
#define R_DMAC_B0_GRP_CH_CHEXT_DCA_Pos           (12UL)
#define R_DMAC_B0_GRP_DCTRL_PR_Msk               (0x00000001UL)
#define R_DMAC_B0_GRP_DCTRL_PR_Pos               (0UL)
#define R_DMAC_B0_GRP_DCTRL_LVINT_Msk            (0x00000002UL)
#define R_DMAC_B0_GRP_DCTRL_LVINT_Pos            (1UL)
#define R_DMAC_B0_GRP_DCTRL_LDPR_Msk             (0x00070000UL)
#define R_DMAC_B0_GRP_DCTRL_LDPR_Pos             (16UL)
#define R_DMAC_B0_GRP_DCTRL_LDCA_Msk             (0x00F00000UL)
#define R_DMAC_B0_GRP_DCTRL_LDCA_Pos             (20UL)
#define R_DMAC_B0_GRP_DCTRL_LWPR_Msk             (0x07000000UL)
#define R_DMAC_B0_GRP_DCTRL_LWPR_Pos             (24UL)
#define R_DMAC_B0_GRP_DCTRL_LWCA_Msk             (0xF0000000UL)
#define R_DMAC_B0_GRP_DCTRL_LWCA_Pos             (28UL)
#define R_DMAC_B0_GRP_DST_EN_EN0_Msk             (0x00000001UL)
#define R_DMAC_B0_GRP_DST_EN_EN0_Pos             (0UL)
#define R_DMAC_B0_GRP_DST_EN_EN1_Msk             (0x00000002UL)
#define R_DMAC_B0_GRP_DST_EN_EN1_Pos             (1UL)
#define R_DMAC_B0_GRP_DST_EN_EN2_Msk             (0x00000004UL)
#define R_DMAC_B0_GRP_DST_EN_EN2_Pos             (2UL)
#define R_DMAC_B0_GRP_DST_EN_EN3_Msk             (0x00000008UL)
#define R_DMAC_B0_GRP_DST_EN_EN3_Pos             (3UL)
#define R_DMAC_B0_GRP_DST_EN_EN4_Msk             (0x00000010UL)
#define R_DMAC_B0_GRP_DST_EN_EN4_Pos             (4UL)
#define R_DMAC_B0_GRP_DST_EN_EN5_Msk             (0x00000020UL)
#define R_DMAC_B0_GRP_DST_EN_EN5_Pos             (5UL)
#define R_DMAC_B0_GRP_DST_EN_EN6_Msk             (0x00000040UL)
#define R_DMAC_B0_GRP_DST_EN_EN6_Pos             (6UL)
#define R_DMAC_B0_GRP_DST_EN_EN7_Msk             (0x00000080UL)
#define R_DMAC_B0_GRP_DST_EN_EN7_Pos             (7UL)
#define R_DMAC_B0_GRP_DST_ER_ER0_Msk             (0x00000001UL)
#define R_DMAC_B0_GRP_DST_ER_ER0_Pos             (0UL)
#define R_DMAC_B0_GRP_DST_ER_ER1_Msk             (0x00000002UL)
#define R_DMAC_B0_GRP_DST_ER_ER1_Pos             (1UL)
#define R_DMAC_B0_GRP_DST_ER_ER2_Msk             (0x00000004UL)
#define R_DMAC_B0_GRP_DST_ER_ER2_Pos             (2UL)
#define R_DMAC_B0_GRP_DST_ER_ER3_Msk             (0x00000008UL)
#define R_DMAC_B0_GRP_DST_ER_ER3_Pos             (3UL)
#define R_DMAC_B0_GRP_DST_ER_ER4_Msk             (0x00000010UL)
#define R_DMAC_B0_GRP_DST_ER_ER4_Pos             (4UL)
#define R_DMAC_B0_GRP_DST_ER_ER5_Msk             (0x00000020UL)
#define R_DMAC_B0_GRP_DST_ER_ER5_Pos             (5UL)
#define R_DMAC_B0_GRP_DST_ER_ER6_Msk             (0x00000040UL)
#define R_DMAC_B0_GRP_DST_ER_ER6_Pos             (6UL)
#define R_DMAC_B0_GRP_DST_ER_ER7_Msk             (0x00000080UL)
#define R_DMAC_B0_GRP_DST_ER_ER7_Pos             (7UL)
#define R_DMAC_B0_GRP_DST_END_END0_Msk           (0x00000001UL)
#define R_DMAC_B0_GRP_DST_END_END0_Pos           (0UL)
#define R_DMAC_B0_GRP_DST_END_END1_Msk           (0x00000002UL)
#define R_DMAC_B0_GRP_DST_END_END1_Pos           (1UL)
#define R_DMAC_B0_GRP_DST_END_END2_Msk           (0x00000004UL)
#define R_DMAC_B0_GRP_DST_END_END2_Pos           (2UL)
#define R_DMAC_B0_GRP_DST_END_END3_Msk           (0x00000008UL)
#define R_DMAC_B0_GRP_DST_END_END3_Pos           (3UL)
#define R_DMAC_B0_GRP_DST_END_END4_Msk           (0x00000010UL)
#define R_DMAC_B0_GRP_DST_END_END4_Pos           (4UL)
#define R_DMAC_B0_GRP_DST_END_END5_Msk           (0x00000020UL)
#define R_DMAC_B0_GRP_DST_END_END5_Pos           (5UL)
#define R_DMAC_B0_GRP_DST_END_END6_Msk           (0x00000040UL)
#define R_DMAC_B0_GRP_DST_END_END6_Pos           (6UL)
#define R_DMAC_B0_GRP_DST_END_END7_Msk           (0x00000080UL)
#define R_DMAC_B0_GRP_DST_END_END7_Pos           (7UL)
#define R_DMAC_B0_GRP_DST_TC_TC0_Msk             (0x00000001UL)
#define R_DMAC_B0_GRP_DST_TC_TC0_Pos             (0UL)
#define R_DMAC_B0_GRP_DST_TC_TC1_Msk             (0x00000002UL)
#define R_DMAC_B0_GRP_DST_TC_TC1_Pos             (1UL)
#define R_DMAC_B0_GRP_DST_TC_TC2_Msk             (0x00000004UL)
#define R_DMAC_B0_GRP_DST_TC_TC2_Pos             (2UL)
#define R_DMAC_B0_GRP_DST_TC_TC3_Msk             (0x00000008UL)
#define R_DMAC_B0_GRP_DST_TC_TC3_Pos             (3UL)
#define R_DMAC_B0_GRP_DST_TC_TC4_Msk             (0x00000010UL)
#define R_DMAC_B0_GRP_DST_TC_TC4_Pos             (4UL)
#define R_DMAC_B0_GRP_DST_TC_TC5_Msk             (0x00000020UL)
#define R_DMAC_B0_GRP_DST_TC_TC5_Pos             (5UL)
#define R_DMAC_B0_GRP_DST_TC_TC6_Msk             (0x00000040UL)
#define R_DMAC_B0_GRP_DST_TC_TC6_Pos             (6UL)
#define R_DMAC_B0_GRP_DST_TC_TC7_Msk             (0x00000080UL)
#define R_DMAC_B0_GRP_DST_TC_TC7_Pos             (7UL)
#define R_DMAC_B0_GRP_DST_SUS_SUS0_Msk           (0x00000001UL)
#define R_DMAC_B0_GRP_DST_SUS_SUS0_Pos           (0UL)
#define R_DMAC_B0_GRP_DST_SUS_SUS1_Msk           (0x00000002UL)
#define R_DMAC_B0_GRP_DST_SUS_SUS1_Pos           (1UL)
#define R_DMAC_B0_GRP_DST_SUS_SUS2_Msk           (0x00000004UL)
#define R_DMAC_B0_GRP_DST_SUS_SUS2_Pos           (2UL)
#define R_DMAC_B0_GRP_DST_SUS_SUS3_Msk           (0x00000008UL)
#define R_DMAC_B0_GRP_DST_SUS_SUS3_Pos           (3UL)
#define R_DMAC_B0_GRP_DST_SUS_SUS4_Msk           (0x00000010UL)
#define R_DMAC_B0_GRP_DST_SUS_SUS4_Pos           (4UL)
#define R_DMAC_B0_GRP_DST_SUS_SUS5_Msk           (0x00000020UL)
#define R_DMAC_B0_GRP_DST_SUS_SUS5_Pos           (5UL)
#define R_DMAC_B0_GRP_DST_SUS_SUS6_Msk           (0x00000040UL)
#define R_DMAC_B0_GRP_DST_SUS_SUS6_Pos           (6UL)
#define R_DMAC_B0_GRP_DST_SUS_SUS7_Msk           (0x00000080UL)
#define R_DMAC_B0_GRP_DST_SUS_SUS7_Pos           (7UL)
#define R_DMAC_B0_EX_DMARS0_CH0_RID_Msk          (0x00000003UL)
#define R_DMAC_B0_EX_DMARS0_CH0_RID_Pos          (0UL)
#define R_DMAC_B0_EX_DMARS0_CH0_MID_Msk          (0x000003FCUL)
#define R_DMAC_B0_EX_DMARS0_CH0_MID_Pos          (2UL)
#define R_DMAC_B0_EX_DMARS0_CH1_RID_Msk          (0x00030000UL)
#define R_DMAC_B0_EX_DMARS0_CH1_RID_Pos          (16UL)
#define R_DMAC_B0_EX_DMARS0_CH1_MID_Msk          (0x03FC0000UL)
#define R_DMAC_B0_EX_DMARS0_CH1_MID_Pos          (18UL)
#define R_DMAC_B0_EX_DMARS1_CH2_RID_Msk          (0x00000003UL)
#define R_DMAC_B0_EX_DMARS1_CH2_RID_Pos          (0UL)
#define R_DMAC_B0_EX_DMARS1_CH2_MID_Msk          (0x000003FCUL)
#define R_DMAC_B0_EX_DMARS1_CH2_MID_Pos          (2UL)
#define R_DMAC_B0_EX_DMARS1_CH3_RID_Msk          (0x00030000UL)
#define R_DMAC_B0_EX_DMARS1_CH3_RID_Pos          (16UL)
#define R_DMAC_B0_EX_DMARS1_CH3_MID_Msk          (0x03FC0000UL)
#define R_DMAC_B0_EX_DMARS1_CH3_MID_Pos          (18UL)
#define R_DMAC_B0_EX_DMARS2_CH4_RID_Msk          (0x00000003UL)
#define R_DMAC_B0_EX_DMARS2_CH4_RID_Pos          (0UL)
#define R_DMAC_B0_EX_DMARS2_CH4_MID_Msk          (0x000003FCUL)
#define R_DMAC_B0_EX_DMARS2_CH4_MID_Pos          (2UL)
#define R_DMAC_B0_EX_DMARS2_CH5_RID_Msk          (0x00030000UL)
#define R_DMAC_B0_EX_DMARS2_CH5_RID_Pos          (16UL)
#define R_DMAC_B0_EX_DMARS2_CH5_MID_Msk          (0x03FC0000UL)
#define R_DMAC_B0_EX_DMARS2_CH5_MID_Pos          (18UL)
#define R_DMAC_B0_EX_DMARS3_CH6_RID_Msk          (0x00000003UL)
#define R_DMAC_B0_EX_DMARS3_CH6_RID_Pos          (0UL)
#define R_DMAC_B0_EX_DMARS3_CH6_MID_Msk          (0x000003FCUL)
#define R_DMAC_B0_EX_DMARS3_CH6_MID_Pos          (2UL)
#define R_DMAC_B0_EX_DMARS3_CH7_RID_Msk          (0x00030000UL)
#define R_DMAC_B0_EX_DMARS3_CH7_RID_Pos          (16UL)
#define R_DMAC_B0_EX_DMARS3_CH7_MID_Msk          (0x03FC0000UL)
#define R_DMAC_B0_EX_DMARS3_CH7_MID_Pos          (18UL)
#define R_DMAC_B0_EX_DMARS4_CH8_RID_Msk          (0x00000003UL)
#define R_DMAC_B0_EX_DMARS4_CH8_RID_Pos          (0UL)
#define R_DMAC_B0_EX_DMARS4_CH8_MID_Msk          (0x000003FCUL)
#define R_DMAC_B0_EX_DMARS4_CH8_MID_Pos          (2UL)
#define R_DMAC_B0_EX_DMARS4_CH9_RID_Msk          (0x00030000UL)
#define R_DMAC_B0_EX_DMARS4_CH9_RID_Pos          (16UL)
#define R_DMAC_B0_EX_DMARS4_CH9_MID_Msk          (0x03FC0000UL)
#define R_DMAC_B0_EX_DMARS4_CH9_MID_Pos          (18UL)
#define R_DMAC_B0_EX_DMARS5_CH10_RID_Msk         (0x00000003UL)
#define R_DMAC_B0_EX_DMARS5_CH10_RID_Pos         (0UL)
#define R_DMAC_B0_EX_DMARS5_CH10_MID_Msk         (0x000003FCUL)
#define R_DMAC_B0_EX_DMARS5_CH10_MID_Pos         (2UL)
#define R_DMAC_B0_EX_DMARS5_CH11_RID_Msk         (0x00030000UL)
#define R_DMAC_B0_EX_DMARS5_CH11_RID_Pos         (16UL)
#define R_DMAC_B0_EX_DMARS5_CH11_MID_Msk         (0x03FC0000UL)
#define R_DMAC_B0_EX_DMARS5_CH11_MID_Pos         (18UL)
#define R_DMAC_B0_EX_DMARS6_CH12_RID_Msk         (0x00000003UL)
#define R_DMAC_B0_EX_DMARS6_CH12_RID_Pos         (0UL)
#define R_DMAC_B0_EX_DMARS6_CH12_MID_Msk         (0x000003FCUL)
#define R_DMAC_B0_EX_DMARS6_CH12_MID_Pos         (2UL)
#define R_DMAC_B0_EX_DMARS6_CH13_RID_Msk         (0x00030000UL)
#define R_DMAC_B0_EX_DMARS6_CH13_RID_Pos         (16UL)
#define R_DMAC_B0_EX_DMARS6_CH13_MID_Msk         (0x03FC0000UL)
#define R_DMAC_B0_EX_DMARS6_CH13_MID_Pos         (18UL)
#define R_DMAC_B0_EX_DMARS7_CH14_RID_Msk         (0x00000003UL)
#define R_DMAC_B0_EX_DMARS7_CH14_RID_Pos         (0UL)
#define R_DMAC_B0_EX_DMARS7_CH14_MID_Msk         (0x000003FCUL)
#define R_DMAC_B0_EX_DMARS7_CH14_MID_Pos         (2UL)
#define R_DMAC_B0_EX_DMARS7_CH15_RID_Msk         (0x00030000UL)
#define R_DMAC_B0_EX_DMARS7_CH15_RID_Pos         (16UL)
#define R_DMAC_B0_EX_DMARS7_CH15_MID_Msk         (0x03FC0000UL)
#define R_DMAC_B0_EX_DMARS7_CH15_MID_Pos         (18UL)

#endif
