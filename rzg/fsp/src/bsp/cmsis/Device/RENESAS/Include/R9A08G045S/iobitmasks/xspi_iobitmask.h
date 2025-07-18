/*
* Copyright (c) 2020 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/**********************************************************************************************************************
 * File Name    : xspi_iobitmask.h
 * Version      : 1.00
 * Description  : IO bit mask file for xspi.
 *********************************************************************************************************************/

#ifndef XSPI_IOBITMASK_H
#define XSPI_IOBITMASK_H

#define R_XSPI0_WRAPCFG_CKSFTCS0_Msk         (0x0000001FUL)
#define R_XSPI0_WRAPCFG_CKSFTCS0_Pos         (0UL)
#define R_XSPI0_WRAPCFG_DSSFTCS0_Msk         (0x00001F00UL)
#define R_XSPI0_WRAPCFG_DSSFTCS0_Pos         (8UL)
#define R_XSPI0_WRAPCFG_CKSFTCS1_Msk         (0x001F0000UL)
#define R_XSPI0_WRAPCFG_CKSFTCS1_Pos         (16UL)
#define R_XSPI0_WRAPCFG_DSSFTCS1_Msk         (0x1F000000UL)
#define R_XSPI0_WRAPCFG_DSSFTCS1_Pos         (24UL)
#define R_XSPI0_COMCFG_OEASTEX_Msk           (0x00010000UL)
#define R_XSPI0_COMCFG_OEASTEX_Pos           (16UL)
#define R_XSPI0_COMCFG_OENEGEX_Msk           (0x00020000UL)
#define R_XSPI0_COMCFG_OENEGEX_Pos           (17UL)
#define R_XSPI0_BMCFG_WRMD_Msk               (0x00000001UL)
#define R_XSPI0_BMCFG_WRMD_Pos               (0UL)
#define R_XSPI0_BMCFG_MWRCOMB_Msk            (0x00000080UL)
#define R_XSPI0_BMCFG_MWRCOMB_Pos            (7UL)
#define R_XSPI0_BMCFG_MWRSIZE_Msk            (0x0000FF00UL)
#define R_XSPI0_BMCFG_MWRSIZE_Pos            (8UL)
#define R_XSPI0_BMCFG_PREEN_Msk              (0x00010000UL)
#define R_XSPI0_BMCFG_PREEN_Pos              (16UL)
#define R_XSPI0_BMCFG_CMBTIM_Msk             (0xFF000000UL)
#define R_XSPI0_BMCFG_CMBTIM_Pos             (24UL)
#define R_XSPI0_CSa_CMCFG0_FFMT_Msk          (0x00000003UL)
#define R_XSPI0_CSa_CMCFG0_FFMT_Pos          (0UL)
#define R_XSPI0_CSa_CMCFG0_ADDSIZE_Msk       (0x0000000CUL)
#define R_XSPI0_CSa_CMCFG0_ADDSIZE_Pos       (2UL)
#define R_XSPI0_CSa_CMCFG0_WPBSTMD_Msk       (0x00000010UL)
#define R_XSPI0_CSa_CMCFG0_WPBSTMD_Pos       (4UL)
#define R_XSPI0_CSa_CMCFG0_ARYAMD_Msk        (0x00000020UL)
#define R_XSPI0_CSa_CMCFG0_ARYAMD_Pos        (5UL)
#define R_XSPI0_CSa_CMCFG0_ADDRPEN_Msk       (0x00FF0000UL)
#define R_XSPI0_CSa_CMCFG0_ADDRPEN_Pos       (16UL)
#define R_XSPI0_CSa_CMCFG0_ADDRPCD_Msk       (0xFF000000UL)
#define R_XSPI0_CSa_CMCFG0_ADDRPCD_Pos       (24UL)
#define R_XSPI0_CSa_CMCFG1_RDCMD_Msk         (0x0000FFFFUL)
#define R_XSPI0_CSa_CMCFG1_RDCMD_Pos         (0UL)
#define R_XSPI0_CSa_CMCFG1_RDLATE_Msk        (0x001F0000UL)
#define R_XSPI0_CSa_CMCFG1_RDLATE_Pos        (16UL)
#define R_XSPI0_CSa_CMCFG2_WRCMD_Msk         (0x0000FFFFUL)
#define R_XSPI0_CSa_CMCFG2_WRCMD_Pos         (0UL)
#define R_XSPI0_CSa_CMCFG2_WRLATE_Msk        (0x001F0000UL)
#define R_XSPI0_CSa_CMCFG2_WRLATE_Pos        (16UL)
#define R_XSPI0_LIOCFGCS_PRTMD_Msk           (0x000003FFUL)
#define R_XSPI0_LIOCFGCS_PRTMD_Pos           (0UL)
#define R_XSPI0_LIOCFGCS_LATEMD_Msk          (0x00000400UL)
#define R_XSPI0_LIOCFGCS_LATEMD_Pos          (10UL)
#define R_XSPI0_LIOCFGCS_WRMSKMD_Msk         (0x00000800UL)
#define R_XSPI0_LIOCFGCS_WRMSKMD_Pos         (11UL)
#define R_XSPI0_LIOCFGCS_CSMIN_Msk           (0x000F0000UL)
#define R_XSPI0_LIOCFGCS_CSMIN_Pos           (16UL)
#define R_XSPI0_LIOCFGCS_CSASTEX_Msk         (0x00100000UL)
#define R_XSPI0_LIOCFGCS_CSASTEX_Pos         (20UL)
#define R_XSPI0_LIOCFGCS_CSNEGEX_Msk         (0x00200000UL)
#define R_XSPI0_LIOCFGCS_CSNEGEX_Pos         (21UL)
#define R_XSPI0_LIOCFGCS_SDRDRV_Msk          (0x00400000UL)
#define R_XSPI0_LIOCFGCS_SDRDRV_Pos          (22UL)
#define R_XSPI0_LIOCFGCS_SDRSMPMD_Msk        (0x00800000UL)
#define R_XSPI0_LIOCFGCS_SDRSMPMD_Pos        (23UL)
#define R_XSPI0_LIOCFGCS_SDRSMPSFT_Msk       (0x0F000000UL)
#define R_XSPI0_LIOCFGCS_SDRSMPSFT_Pos       (24UL)
#define R_XSPI0_LIOCFGCS_DDRSMPEX_Msk        (0xF0000000UL)
#define R_XSPI0_LIOCFGCS_DDRSMPEX_Pos        (28UL)
#define R_XSPI0_BMCTL0_CS0ACC_Msk            (0x00000003UL)
#define R_XSPI0_BMCTL0_CS0ACC_Pos            (0UL)
#define R_XSPI0_BMCTL0_CS1ACC_Msk            (0x0000000CUL)
#define R_XSPI0_BMCTL0_CS1ACC_Pos            (2UL)
#define R_XSPI0_BMCTL1_MWRPUSH_Msk           (0x00000100UL)
#define R_XSPI0_BMCTL1_MWRPUSH_Pos           (8UL)
#define R_XSPI0_BMCTL1_PBUFCLR_Msk           (0x00000400UL)
#define R_XSPI0_BMCTL1_PBUFCLR_Pos           (10UL)
#define R_XSPI0_CMCTL_XIPENCODE_Msk          (0x000000FFUL)
#define R_XSPI0_CMCTL_XIPENCODE_Pos          (0UL)
#define R_XSPI0_CMCTL_XIPEXCODE_Msk          (0x0000FF00UL)
#define R_XSPI0_CMCTL_XIPEXCODE_Pos          (8UL)
#define R_XSPI0_CMCTL_XIPEN_Msk              (0x00010000UL)
#define R_XSPI0_CMCTL_XIPEN_Pos              (16UL)
#define R_XSPI0_CDCTL0_TRREQ_Msk             (0x00000001UL)
#define R_XSPI0_CDCTL0_TRREQ_Pos             (0UL)
#define R_XSPI0_CDCTL0_PERMD_Msk             (0x00000002UL)
#define R_XSPI0_CDCTL0_PERMD_Pos             (1UL)
#define R_XSPI0_CDCTL0_CSSEL_Msk             (0x00000008UL)
#define R_XSPI0_CDCTL0_CSSEL_Pos             (3UL)
#define R_XSPI0_CDCTL0_TRNUM_Msk             (0x00000030UL)
#define R_XSPI0_CDCTL0_TRNUM_Pos             (4UL)
#define R_XSPI0_CDCTL0_PERITV_Msk            (0x001F0000UL)
#define R_XSPI0_CDCTL0_PERITV_Pos            (16UL)
#define R_XSPI0_CDCTL0_PERREP_Msk            (0x0F000000UL)
#define R_XSPI0_CDCTL0_PERREP_Pos            (24UL)
#define R_XSPI0_CDCTL1_PEREXP_Msk            (0xFFFFFFFFUL)
#define R_XSPI0_CDCTL1_PEREXP_Pos            (0UL)
#define R_XSPI0_CDCTL2_PERMSK_Msk            (0xFFFFFFFFUL)
#define R_XSPI0_CDCTL2_PERMSK_Pos            (0UL)
#define R_XSPI0_BUF_CDT_CMDSIZE_Msk          (0x00000003UL)
#define R_XSPI0_BUF_CDT_CMDSIZE_Pos          (0UL)
#define R_XSPI0_BUF_CDT_ADDSIZE_Msk          (0x0000001CUL)
#define R_XSPI0_BUF_CDT_ADDSIZE_Pos          (2UL)
#define R_XSPI0_BUF_CDT_DATASIZE_Msk         (0x000001E0UL)
#define R_XSPI0_BUF_CDT_DATASIZE_Pos         (5UL)
#define R_XSPI0_BUF_CDT_LATE_Msk             (0x00003E00UL)
#define R_XSPI0_BUF_CDT_LATE_Pos             (9UL)
#define R_XSPI0_BUF_CDT_TRTYPE_Msk           (0x00008000UL)
#define R_XSPI0_BUF_CDT_TRTYPE_Pos           (15UL)
#define R_XSPI0_BUF_CDT_CMD_Msk              (0xFFFF0000UL)
#define R_XSPI0_BUF_CDT_CMD_Pos              (16UL)
#define R_XSPI0_BUF_CDA_ADD_Msk              (0xFFFFFFFFUL)
#define R_XSPI0_BUF_CDA_ADD_Pos              (0UL)
#define R_XSPI0_BUF_CDD0_DATA_Msk            (0xFFFFFFFFUL)
#define R_XSPI0_BUF_CDD0_DATA_Pos            (0UL)
#define R_XSPI0_BUF_CDD1_DATA_Msk            (0xFFFFFFFFUL)
#define R_XSPI0_BUF_CDD1_DATA_Pos            (0UL)
#define R_XSPI0_LPCTL0_PATREQ_Msk            (0x00000001UL)
#define R_XSPI0_LPCTL0_PATREQ_Pos            (0UL)
#define R_XSPI0_LPCTL0_CSSEL_Msk             (0x00000008UL)
#define R_XSPI0_LPCTL0_CSSEL_Pos             (3UL)
#define R_XSPI0_LPCTL0_XDPIN_Msk             (0x00000030UL)
#define R_XSPI0_LPCTL0_XDPIN_Pos             (4UL)
#define R_XSPI0_LPCTL0_XD1LEN_Msk            (0x001F0000UL)
#define R_XSPI0_LPCTL0_XD1LEN_Pos            (16UL)
#define R_XSPI0_LPCTL0_XD1VAL_Msk            (0x00800000UL)
#define R_XSPI0_LPCTL0_XD1VAL_Pos            (23UL)
#define R_XSPI0_LPCTL0_XD2LEN_Msk            (0x1F000000UL)
#define R_XSPI0_LPCTL0_XD2LEN_Pos            (24UL)
#define R_XSPI0_LPCTL0_XD2VAL_Msk            (0x80000000UL)
#define R_XSPI0_LPCTL0_XD2VAL_Pos            (31UL)
#define R_XSPI0_LPCTL1_PATREQ_Msk            (0x00000003UL)
#define R_XSPI0_LPCTL1_PATREQ_Pos            (0UL)
#define R_XSPI0_LPCTL1_CSSEL_Msk             (0x00000008UL)
#define R_XSPI0_LPCTL1_CSSEL_Pos             (3UL)
#define R_XSPI0_LPCTL1_RSTREP_Msk            (0x00000030UL)
#define R_XSPI0_LPCTL1_RSTREP_Pos            (4UL)
#define R_XSPI0_LPCTL1_RSTWID_Msk            (0x00000700UL)
#define R_XSPI0_LPCTL1_RSTWID_Pos            (8UL)
#define R_XSPI0_LPCTL1_RSTSU_Msk             (0x00007000UL)
#define R_XSPI0_LPCTL1_RSTSU_Pos             (12UL)
#define R_XSPI0_LIOCTL_WPCS0_Msk             (0x00000001UL)
#define R_XSPI0_LIOCTL_WPCS0_Pos             (0UL)
#define R_XSPI0_LIOCTL_WPCS1_Msk             (0x00000002UL)
#define R_XSPI0_LIOCTL_WPCS1_Pos             (1UL)
#define R_XSPI0_LIOCTL_RSTCS0_Msk            (0x00010000UL)
#define R_XSPI0_LIOCTL_RSTCS0_Pos            (16UL)
#define R_XSPI0_LIOCTL_RSTCS1_Msk            (0x00020000UL)
#define R_XSPI0_LIOCTL_RSTCS1_Pos            (17UL)
#define R_XSPI0_CSb_CCCTL0_CAEN_Msk          (0x00000001UL)
#define R_XSPI0_CSb_CCCTL0_CAEN_Pos          (0UL)
#define R_XSPI0_CSb_CCCTL0_CANOWR_Msk        (0x00000002UL)
#define R_XSPI0_CSb_CCCTL0_CANOWR_Pos        (1UL)
#define R_XSPI0_CSb_CCCTL0_CAITV_Msk         (0x00001F00UL)
#define R_XSPI0_CSb_CCCTL0_CAITV_Pos         (8UL)
#define R_XSPI0_CSb_CCCTL0_CASFTSTA_Msk      (0x001F0000UL)
#define R_XSPI0_CSb_CCCTL0_CASFTSTA_Pos      (16UL)
#define R_XSPI0_CSb_CCCTL0_CASFTEND_Msk      (0x1F000000UL)
#define R_XSPI0_CSb_CCCTL0_CASFTEND_Pos      (24UL)
#define R_XSPI0_CSb_CCCTL1_CACMDSIZE_Msk     (0x00000003UL)
#define R_XSPI0_CSb_CCCTL1_CACMDSIZE_Pos     (0UL)
#define R_XSPI0_CSb_CCCTL1_CAADDSIZE_Msk     (0x0000001CUL)
#define R_XSPI0_CSb_CCCTL1_CAADDSIZE_Pos     (2UL)
#define R_XSPI0_CSb_CCCTL1_CADATASIZE_Msk    (0x000001E0UL)
#define R_XSPI0_CSb_CCCTL1_CADATASIZE_Pos    (5UL)
#define R_XSPI0_CSb_CCCTL1_CAWRLATE_Msk      (0x001F0000UL)
#define R_XSPI0_CSb_CCCTL1_CAWRLATE_Pos      (16UL)
#define R_XSPI0_CSb_CCCTL1_CARDLATE_Msk      (0x1F000000UL)
#define R_XSPI0_CSb_CCCTL1_CARDLATE_Pos      (24UL)
#define R_XSPI0_CSb_CCCTL2_CAWRCMD_Msk       (0x0000FFFFUL)
#define R_XSPI0_CSb_CCCTL2_CAWRCMD_Pos       (0UL)
#define R_XSPI0_CSb_CCCTL2_CARDCMD_Msk       (0xFFFF0000UL)
#define R_XSPI0_CSb_CCCTL2_CARDCMD_Pos       (16UL)
#define R_XSPI0_CSb_CCCTL3_CAADD_Msk         (0xFFFFFFFFUL)
#define R_XSPI0_CSb_CCCTL3_CAADD_Pos         (0UL)
#define R_XSPI0_CSb_CCCTL4_CADATA_Msk        (0xFFFFFFFFUL)
#define R_XSPI0_CSb_CCCTL4_CADATA_Pos        (0UL)
#define R_XSPI0_CSb_CCCTL5_CADATA_Msk        (0xFFFFFFFFUL)
#define R_XSPI0_CSb_CCCTL5_CADATA_Pos        (0UL)
#define R_XSPI0_CSb_CCCTL6_CADATA_Msk        (0xFFFFFFFFUL)
#define R_XSPI0_CSb_CCCTL6_CADATA_Pos        (0UL)
#define R_XSPI0_CSb_CCCTL7_CADATA_Msk        (0xFFFFFFFFUL)
#define R_XSPI0_CSb_CCCTL7_CADATA_Pos        (0UL)
#define R_XSPI0_VERSTT_VER_Msk               (0xFFFFFFFFUL)
#define R_XSPI0_VERSTT_VER_Pos               (0UL)
#define R_XSPI0_COMSTT_MEMACC_Msk            (0x00000001UL)
#define R_XSPI0_COMSTT_MEMACC_Pos            (0UL)
#define R_XSPI0_COMSTT_PBUFNE_Msk            (0x00000010UL)
#define R_XSPI0_COMSTT_PBUFNE_Pos            (4UL)
#define R_XSPI0_COMSTT_WRBUFNE_Msk           (0x00000040UL)
#define R_XSPI0_COMSTT_WRBUFNE_Pos           (6UL)
#define R_XSPI0_CASTTCS_CASUC_Msk            (0xFFFFFFFFUL)
#define R_XSPI0_CASTTCS_CASUC_Pos            (0UL)
#define R_XSPI0_INTS_CMDCMP_Msk              (0x00000001UL)
#define R_XSPI0_INTS_CMDCMP_Pos              (0UL)
#define R_XSPI0_INTS_PATCMP_Msk              (0x00000002UL)
#define R_XSPI0_INTS_PATCMP_Pos              (1UL)
#define R_XSPI0_INTS_INICMP_Msk              (0x00000004UL)
#define R_XSPI0_INTS_INICMP_Pos              (2UL)
#define R_XSPI0_INTS_PERTO_Msk               (0x00000008UL)
#define R_XSPI0_INTS_PERTO_Pos               (3UL)
#define R_XSPI0_INTS_DSTOCS0_Msk             (0x00000010UL)
#define R_XSPI0_INTS_DSTOCS0_Pos             (4UL)
#define R_XSPI0_INTS_DSTOCS1_Msk             (0x00000020UL)
#define R_XSPI0_INTS_DSTOCS1_Pos             (5UL)
#define R_XSPI0_INTS_BUSERR_Msk              (0x00100000UL)
#define R_XSPI0_INTS_BUSERR_Pos              (20UL)
#define R_XSPI0_INTS_CAFAILCS0_Msk           (0x10000000UL)
#define R_XSPI0_INTS_CAFAILCS0_Pos           (28UL)
#define R_XSPI0_INTS_CAFAILCS1_Msk           (0x20000000UL)
#define R_XSPI0_INTS_CAFAILCS1_Pos           (29UL)
#define R_XSPI0_INTS_CASUCCS0_Msk            (0x40000000UL)
#define R_XSPI0_INTS_CASUCCS0_Pos            (30UL)
#define R_XSPI0_INTS_CASUCCS1_Msk            (0x80000000UL)
#define R_XSPI0_INTS_CASUCCS1_Pos            (31UL)
#define R_XSPI0_INTC_CMDCMPC_Msk             (0x00000001UL)
#define R_XSPI0_INTC_CMDCMPC_Pos             (0UL)
#define R_XSPI0_INTC_PATCMPC_Msk             (0x00000002UL)
#define R_XSPI0_INTC_PATCMPC_Pos             (1UL)
#define R_XSPI0_INTC_INICMPC_Msk             (0x00000004UL)
#define R_XSPI0_INTC_INICMPC_Pos             (2UL)
#define R_XSPI0_INTC_PERTOC_Msk              (0x00000008UL)
#define R_XSPI0_INTC_PERTOC_Pos              (3UL)
#define R_XSPI0_INTC_DSTOCS0C_Msk            (0x00000010UL)
#define R_XSPI0_INTC_DSTOCS0C_Pos            (4UL)
#define R_XSPI0_INTC_DSTOCS1C_Msk            (0x00000020UL)
#define R_XSPI0_INTC_DSTOCS1C_Pos            (5UL)
#define R_XSPI0_INTC_BUSERRC_Msk             (0x00100000UL)
#define R_XSPI0_INTC_BUSERRC_Pos             (20UL)
#define R_XSPI0_INTC_CAFAILCS0C_Msk          (0x10000000UL)
#define R_XSPI0_INTC_CAFAILCS0C_Pos          (28UL)
#define R_XSPI0_INTC_CAFAILCS1C_Msk          (0x20000000UL)
#define R_XSPI0_INTC_CAFAILCS1C_Pos          (29UL)
#define R_XSPI0_INTC_CASUCCS0C_Msk           (0x40000000UL)
#define R_XSPI0_INTC_CASUCCS0C_Pos           (30UL)
#define R_XSPI0_INTC_CASUCCS1C_Msk           (0x80000000UL)
#define R_XSPI0_INTC_CASUCCS1C_Pos           (31UL)
#define R_XSPI0_INTE_CMDCMPE_Msk             (0x00000001UL)
#define R_XSPI0_INTE_CMDCMPE_Pos             (0UL)
#define R_XSPI0_INTE_PATCMPE_Msk             (0x00000002UL)
#define R_XSPI0_INTE_PATCMPE_Pos             (1UL)
#define R_XSPI0_INTE_INICMPE_Msk             (0x00000004UL)
#define R_XSPI0_INTE_INICMPE_Pos             (2UL)
#define R_XSPI0_INTE_PERTOE_Msk              (0x00000008UL)
#define R_XSPI0_INTE_PERTOE_Pos              (3UL)
#define R_XSPI0_INTE_DSTOCS0E_Msk            (0x00000010UL)
#define R_XSPI0_INTE_DSTOCS0E_Pos            (4UL)
#define R_XSPI0_INTE_DSTOCS1E_Msk            (0x00000020UL)
#define R_XSPI0_INTE_DSTOCS1E_Pos            (5UL)
#define R_XSPI0_INTE_BUSERRE_Msk             (0x00100000UL)
#define R_XSPI0_INTE_BUSERRE_Pos             (20UL)
#define R_XSPI0_INTE_CAFAILCS0E_Msk          (0x10000000UL)
#define R_XSPI0_INTE_CAFAILCS0E_Pos          (28UL)
#define R_XSPI0_INTE_CAFAILCS1E_Msk          (0x20000000UL)
#define R_XSPI0_INTE_CAFAILCS1E_Pos          (29UL)
#define R_XSPI0_INTE_CASUCCS0E_Msk           (0x40000000UL)
#define R_XSPI0_INTE_CASUCCS0E_Pos           (30UL)
#define R_XSPI0_INTE_CASUCCS1E_Msk           (0x80000000UL)
#define R_XSPI0_INTE_CASUCCS1E_Pos           (31UL)

#endif
