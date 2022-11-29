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
 * File Name    : bsp_module_stop.h
 * Version      : 1.00
 * Description  : bsp_module_stop header
 *********************************************************************************************************************/

#ifndef BSP_MODULE_H
#define BSP_MODULE_H

/** Common macro for FSP header files. There is also a corresponding FSP_FOOTER macro at the end of this file. */
FSP_HEADER

/******************************************************************************************************************//**
 * @addtogroup BSP_MCU
 * @{
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Macro definitions
 *********************************************************************************************************************/

/******************************************************************************************************************//**
 * Cancels the module stop state.
 *
 * @param      ip       bsp_mstp_ip_t enum value for the module to be started
 * @param      ch       The channel. Use ch 0 for modules without channels.
 *********************************************************************************************************************/
#define R_BSP_MSTPSTART(ip, ch)                      {BSP_MSTP_REG_ ## ip(ch) = 0x00000000U                         \
                                                                                | (BSP_MSTP_BIT_ ## ip(ch) << 16U); \
                                                      BSP_MSTP_REG_ ## ip(ch);}

/******************************************************************************************************************//**
 * Enables the module stop state.
 *
 * @param      ip       bsp_mstp_ip_t enum value for the module to be stopped
 * @param      ch       The channel. Use ch 0 for modules without channels.
 *********************************************************************************************************************/
#define R_BSP_MSTPSTOP(ip, ch)                       {BSP_MSTP_REG_ ## ip(ch) = 0x0000FFFFU                         \
                                                                                | (BSP_MSTP_BIT_ ## ip(ch) << 16U); \
                                                      BSP_MSTP_REG_ ## ip(ch);}

/** @} (end addtogroup BSP_MCU) */
#define BSP_MSTP_REG_FSP_IP_MXSRAM_A(channel)        R_MSTP->ACPU
#define BSP_MSTP_BIT_FSP_IP_MXSRAM_A(channel)        (1U << R_MSTP_ACPU_SRAM_A_Pos)
#define BSP_MSTP_REG_FSP_IP_MXSRAM_M(channel)        R_MSTP->MCPU1
#define BSP_MSTP_BIT_FSP_IP_MXSRAM_M(channel)        (1U << R_MSTP_MCPU1_MXSRAM_M_Pos)
#define BSP_MSTP_REG_FSP_IP_MHSPI(channel)           R_MSTP->MCPU1
#define BSP_MSTP_BIT_FSP_IP_MHSPI(channel)           (1U << R_MSTP_MCPU1_MHSPI_Pos)
#define BSP_MSTP_REG_FSP_IP_MHMTU3A(channel)         R_MSTP->MCPU1
#define BSP_MSTP_BIT_FSP_IP_MHMTU3A(channel)         (1U << R_MSTP_MCPU1_MHMTU3A_Pos)
#define BSP_MSTP_REG_FSP_IP_MHSRC(channel)           R_MSTP->MCPU1
#define BSP_MSTP_BIT_FSP_IP_MHSRC(channel)           (1U << R_MSTP_MCPU1_MHSRC_Pos)
#define BSP_MSTP_REG_FSP_IP_MHGPT(channel)           R_MSTP->MCPU1
#define BSP_MSTP_BIT_FSP_IP_MHGPT(channel)           (1U << R_MSTP_MCPU1_MHGPT_Pos)
#define BSP_MSTP_REG_FSP_IP_MHPOEG(channel)          R_MSTP->MCPU1
#define BSP_MSTP_BIT_FSP_IP_MHPOEG(channel)          (1U << (R_MSTP_MCPU1_MHPOEGA_Pos + channel))
#define BSP_MSTP_REG_FSP_IP_MHPOE3(channel)          R_MSTP->MCPU1
#define BSP_MSTP_BIT_FSP_IP_MHPOE3(channel)          (1U << R_MSTP_MCPU1_MHPOE3_Pos)
#define BSP_MSTP_REG_FSP_IP_MHSSIF(channel)          R_MSTP->MCPU1
#define BSP_MSTP_BIT_FSP_IP_MHSSIF(channel)          (1U << (R_MSTP_MCPU1_MHSSIF0_Pos + channel))
#define BSP_MSTP_REG_FSP_IP_MHRSPI(channel)          *((2U >= channel) ? &R_MSTP->MCPU1 : &R_MSTP->MCPU2)
#define BSP_MSTP_BIT_FSP_IP_MHRSPI(channel)          ((2U >= channel) ? (1U << (R_MSTP_MCPU1_MHRSPI0_Pos + channel)) \
                                                      : (1U << R_MSTP_MCPU2_MHRSPI2_Pos)
#define BSP_MSTP_REG_FSP_IP_MHSCIF(channel)          R_MSTP->MCPU2
#define BSP_MSTP_BIT_FSP_IP_MHSCIF(channel)          (1U << (R_MSTP_MCPU2_MHSCIF0_Pos + channel))
#define BSP_MSTP_REG_FSP_IP_MHIRDA(channel)          R_MSTP->MCPU2
#define BSP_MSTP_BIT_FSP_IP_MHIRDA(channel)          (1U << R_MSTP_MCPU2_MHIRDA_Pos)
#define BSP_MSTP_REG_FSP_IP_MHSCI(channel)           R_MSTP->MCPU2
#define BSP_MSTP_BIT_FSP_IP_MHSCI(channel)           (1U << (R_MSTP_MCPU2_MHSCI0_Pos + channel))
#define BSP_MSTP_REG_FSP_IP_MPCANFD(channel)         R_MSTP->MCPU2
#define BSP_MSTP_BIT_FSP_IP_MPCANFD(channel)         (1U << R_MSTP_MCPU2_MPCANFD_Pos)
#define BSP_MSTP_REG_FSP_IP_MPI2C(channel)           R_MSTP->MCPU2
#define BSP_MSTP_BIT_FSP_IP_MPI2C(channel)           (1U << (R_MSTP_MCPU2_MPI2C0_Pos + channel))
#define BSP_MSTP_REG_FSP_IP_MPADC(channel)           R_MSTP->MCPU2
#define BSP_MSTP_BIT_FSP_IP_MPADC(channel)           (1U << R_MSTP_MCPU2_MPADC_Pos)
#define BSP_MSTP_REG_FSP_IP_MPTSU(channel)           R_MSTP->MCPU2
#define BSP_MSTP_BIT_FSP_IP_MPTSU(channel)           (1U << R_MSTP_MCPU2_MPTSU_Pos)
#define BSP_MSTP_REG_FSP_IP_MXSDHI(channel)          R_MSTP->PERI_COM
#define BSP_MSTP_BIT_FSP_IP_MXSDHI(channel)          (1U << R_MSTP_PERI_COM_MXSDHI0_Pos + channel)
#define BSP_MSTP_REG_FSP_IP_MPGIGE(channel)          R_MSTP->PERI_COM
#define BSP_MSTP_BIT_FSP_IP_MPGIGE(channel)          (1U << R_MSTP_PERI_COM_MPGIGE0_Pos)
#define BSP_MSTP_REG_FSP_IP_MPUSBT(channel)          R_MSTP->PERI_COM
#define BSP_MSTP_BIT_FSP_IP_MPUSBT(channel)          (1U << R_MSTP_PERI_COM_MPUSBT_Pos)
#define BSP_MSTP_REG_FSP_IP_MHUSB2_0_H(channel)      R_MSTP->PERI_COM
#define BSP_MSTP_BIT_FSP_IP_MHUSB2_0_H(channel)      (1U << R_MSTP_PERI_COM_MHUSB2H_Pos)
#define BSP_MSTP_REG_FSP_IP_MHUSB2_0_F(channel)      R_MSTP->PERI_COM
#define BSP_MSTP_BIT_FSP_IP_MHUSB2_0_F(channel)      (1U << R_MSTP_PERI_COM_MHUSB2F_Pos)
#define BSP_MSTP_REG_FSP_IP_MHUSB2_1(channel)        R_MSTP->PERI_COM
#define BSP_MSTP_BIT_FSP_IP_MHUSB2_1(channel)        (1U << R_MSTP_PERI_COM_MHUSB21_Pos)
#define BSP_MSTP_REG_FSP_IP_MXCOM(channel)           R_MSTP->PERI_COM
#define BSP_MSTP_BIT_FSP_IP_MXCOM(channel)           (1U << R_MSTP_PERI_COM_MXCOM_Pos)
#define BSP_MSTP_REG_FSP_IP_MXMCPU(channel)          R_MSTP->PERI_CPU
#define BSP_MSTP_BIT_FSP_IP_MXMCPU(channel)          (1U << R_MSTP_PERI_CPU_MXMCPU_Pos)
#define BSP_MSTP_REG_FSP_IP_MXACPU(channel)          R_MSTP->PERI_CPU
#define BSP_MSTP_BIT_FSP_IP_MXACPU(channel)          (1U << R_MSTP_PERI_CPU_MXACPU_Pos)
#define BSP_MSTP_REG_FSP_IP_MPCST(channel)           R_MSTP->PERI_CPU
#define BSP_MSTP_BIT_FSP_IP_MPCST(channel)           (1U << R_MSTP_PERI_CPU_MPCST_Pos)
#define BSP_MSTP_REG_FSP_IP_MPSYC(channel)           R_MSTP->PERI_CPU
#define BSP_MSTP_BIT_FSP_IP_MPSYC(channel)           (1U << R_MSTP_PERI_CPU_MPSYC_Pos)
#define BSP_MSTP_REG_FSP_IP_MPCPG(channel)           R_MSTP->PERI_CPU
#define BSP_MSTP_BIT_FSP_IP_MPCPG(channel)           (1U << R_MSTP_PERI_CPU_MPCPG_Pos)
#define BSP_MSTP_REG_FSP_IP_MHGPIO(channel)          R_MSTP->PERI_CPU
#define BSP_MSTP_BIT_FSP_IP_MHGPIO(channel)          (1U << R_MSTP_PERI_CPU_MHGPIO_Pos)
#define BSP_MSTP_REG_FSP_IP_MPTZC(channel)           R_MSTP->PERI_CPU
#define BSP_MSTP_BIT_FSP_IP_MPTZC(channel)           (1U << (R_MSTP_PERI_CPU_MPTZC0_Pos + channel))
#define BSP_MSTP_REG_FSP_IP_MPSRAM_A(channel)        R_MSTP->PERI_CPU
#define BSP_MSTP_BIT_FSP_IP_MPSRAM_A(channel)        (1U << R_MSTP_PERI_CPU_MPSRAM_A_Pos)
#define BSP_MSTP_REG_FSP_IP_MPSRAM_M(channel)        R_MSTP->PERI_CPU
#define BSP_MSTP_BIT_FSP_IP_MPSRAM_M(channel)        (1U << R_MSTP_PERI_CPU_MPSRAM_M_Pos)
#define BSP_MSTP_REG_FSP_IP_MPIA55(channel)          R_MSTP->PERI_CPU
#define BSP_MSTP_BIT_FSP_IP_MPIA55(channel)          (1U << R_MSTP_PERI_CPU_MPIA55_Pos)
#define BSP_MSTP_REG_FSP_IP_MPIM33(channel)          R_MSTP->PERI_CPU
#define BSP_MSTP_BIT_FSP_IP_MPIM33(channel)          (1U << R_MSTP_PERI_CPU_MPIM33_Pos)
#define BSP_MSTP_REG_FSP_IP_MXREG0(channel)          R_MSTP->PERI_CPU
#define BSP_MSTP_BIT_FSP_IP_MXREG0(channel)          (1U << R_MSTP_PERI_CPU_MXREG0_Pos)
#define BSP_MSTP_REG_FSP_IP_MPPHY(channel)           R_MSTP->PERI_DDR
#define BSP_MSTP_BIT_FSP_IP_MPPHY(channel)           (1U << R_MSTP_PERI_DDR_MPPHY_Pos)
#define BSP_MSTP_REG_FSP_IP_MXMEMC_REG(channel)      R_MSTP->PERI_DDR
#define BSP_MSTP_BIT_FSP_IP_MXMEMC_REG(channel)      (1U << R_MSTP_PERI_DDR_MXMEMC_REG_Pos)
#define BSP_MSTP_REG_FSP_IP_MPVCP4L_V(channel)       R_MSTP->PERI_VIDEO
#define BSP_MSTP_BIT_FSP_IP_MPVCP4L_V(channel)       (1U << R_MSTP_PERI_VIDEO_MPVCP4L_V_Pos)
#define BSP_MSTP_REG_FSP_IP_MPVCP4L_C(channel)       R_MSTP->PERI_VIDEO
#define BSP_MSTP_BIT_FSP_IP_MPVCP4L_C(channel)       (1U << R_MSTP_PERI_VIDEO_MPVCP4L_C_Pos)
#define BSP_MSTP_REG_FSP_IP_MPFCPCS(channel)         R_MSTP->PERI_VIDEO
#define BSP_MSTP_BIT_FSP_IP_MPFCPCS(channel)         (1U << R_MSTP_PERI_VIDEO_MPFCPCS_Pos)
#define BSP_MSTP_REG_FSP_IP_MPCRU(channel)           R_MSTP->PERI_VIDEO
#define BSP_MSTP_BIT_FSP_IP_MPCRU(channel)           (1U << R_MSTP_PERI_VIDEO_MPCRU_Pos)
#define BSP_MSTP_REG_FSP_IP_MPISU(channel)           R_MSTP->PERI_VIDEO
#define BSP_MSTP_BIT_FSP_IP_MPISU(channel)           (1U << R_MSTP_PERI_VIDEO_MPISU_Pos)
#define BSP_MSTP_REG_FSP_IP_MPDSIPHY(channel)        R_MSTP->PERI_VIDEO
#define BSP_MSTP_BIT_FSP_IP_MPDSIPHY(channel)        (1U << R_MSTP_PERI_VIDEO_MPDSIPHY_Pos)
#define BSP_MSTP_REG_FSP_IP_MPDSIL(channel)          R_MSTP->PERI_VIDEO
#define BSP_MSTP_BIT_FSP_IP_MPDSIL(channel)          (1U << R_MSTP_PERI_VIDEO_MPDSIL_Pos)
#define BSP_MSTP_REG_FSP_IP_MPVSPD(channel)          R_MSTP->PERI_VIDEO
#define BSP_MSTP_BIT_FSP_IP_MPVSPD(channel)          (1U << R_MSTP_PERI_VIDEO_MPVSPD_Pos)
#define BSP_MSTP_REG_FSP_IP_MPFCPVD(channel)         R_MSTP->PERI_VIDEO
#define BSP_MSTP_BIT_FSP_IP_MPFCPVD(channel)         (1U << R_MSTP_PERI_VIDEO_MPCPVD_Pos)
#define BSP_MSTP_REG_FSP_IP_MPDU(channel)            R_MSTP->PERI_VIDEO
#define BSP_MSTP_BIT_FSP_IP_MPDU(channel)            (1U << R_MSTP_PERI_VIDEO_MPDU_Pos)
#define BSP_MSTP_REG_FSP_IP_MXVIDEO(channel)         R_MSTP->PERI_VIDEO
#define BSP_MSTP_BIT_FSP_IP_MXVIDEO(channel)         (1U << R_MSTP_PERI_VIDEO_MXVIDEO_Pos)
#define BSP_MSTP_REG_FSP_IP_MPWDT_PUP(channel)       R_MSTP->REG0
#define BSP_MSTP_BIT_FSP_IP_MPWDT_PUP(channel)       (1U << R_MSTP_REG0_MPWDT3_Pos)
#define BSP_MSTP_REG_FSP_IP_MPWDT_CM33(channel)      R_MSTP->REG0
#define BSP_MSTP_BIT_FSP_IP_MPWDT_CM33(channel)      (1U << R_MSTP_REG0_MPWDT2_Pos)
#define BSP_MSTP_REG_FSP_IP_MPWDT_CA55C0(channel)    R_MSTP->REG0
#define BSP_MSTP_BIT_FSP_IP_MPWDT_CA55C0(channel)    (1U << R_MSTP_REG0_MPWDT0_Pos)
#define BSP_MSTP_REG_FSP_IP_MPWDT_CA55C1(channel)    R_MSTP->REG0
#define BSP_MSTP_BIT_FSP_IP_MPWDT_CA55C1(channel)    (1U << R_MSTP_REG0_MPWDT1_Pos)
#define BSP_MSTP_REG_FSP_IP_MPOSTM(channel)          R_MSTP->REG0
#define BSP_MSTP_BIT_FSP_IP_MPOSTM(channel)          (1U << (R_MSTP_REG0_MPOSTM0_Pos + channel))
#define BSP_MSTP_REG_FSP_IP_MXDMAC_S(channel)        R_MSTP->REG1
#define BSP_MSTP_BIT_FSP_IP_MXDMAC_S(channel)        (1U << R_MSTP_REG1_MXDMAC_S_Pos)
#define BSP_MSTP_REG_FSP_IP_MPDMAC_S(channel)        R_MSTP->REG1
#define BSP_MSTP_BIT_FSP_IP_MPDMAC_S(channel)        (1U << R_MSTP_REG1_MPDMAC_S_Pos)
#define BSP_MSTP_REG_FSP_IP_MXDMAC_NS(channel)       R_MSTP->REG1
#define BSP_MSTP_BIT_FSP_IP_MXDMAC_NS(channel)       (1U << R_MSTP_REG1_MXDMAC_NS_Pos)
#define BSP_MSTP_REG_FSP_IP_MPDMAC_NS(channel)       R_MSTP->REG1
#define BSP_MSTP_BIT_FSP_IP_MPDMAC_NS(channel)       (1U << R_MSTP_REG1_MPDMAC_NS_Pos)
#define BSP_MSTP_REG_FSP_IP_MXMALI(channel)          R_MSTP->REG1
#define BSP_MSTP_BIT_FSP_IP_MXMALI(channel)          (1U << R_MSTP_REG1_MXMALI_Pos)
#define BSP_MSTP_REG_FSP_IP_MHTSIPG(channel)         R_MSTP->REG1
#define BSP_MSTP_BIT_FSP_IP_MHTSIPG(channel)         (1U << R_MSTP_REG1_MHTSIPG_Pos)
#define BSP_MSTP_REG_FSP_IP_MPTSIPG_OTP(channel)     R_MSTP->REG1
#define BSP_MSTP_BIT_FSP_IP_MPTSIPG_OTP(channel)     (1U << R_MSTP_REG1_MHTSIPG_OTP_Pos)
#define BSP_MSTP_REG_FSP_IP_MXGIC(channel)           R_MSTP->REG1
#define BSP_MSTP_BIT_FSP_IP_MXGIC(channel)           (1U << R_MSTP_REG1_MXGIC_Pos)
#define BSP_MSTP_REG_FSP_IP_TZCDDR(channel)          R_MSTP->TZCDDR
#define BSP_MSTP_BIT_FSP_IP_TZCDDR(channel)          (1U << (R_MSTP_TZCDDR_MSTOP0_Pos + channel))
#define BSP_MSTP_REG_FSP_IP_MHU(channel)             R_MSTP->MHU
#define BSP_MSTP_BIT_FSP_IP_MHU(channel)             (1U << R_MSTP_MHU_MSTOP_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MXSRAM_A(ch)           (R_MSTP->ACPU)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MXSRAM_A(ch)           (1U << R_MSTP_ACPU_MXSRAM_A_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MXSRAM_M(ch)           (R_MSTP->MCPU1)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MXSRAM_M(ch)           (1U << R_MSTP_MCPU1_MXSRAM_M_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MHSPI(ch)              (R_MSTP->MCPU1)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MHSPI(ch)              (1U << R_MSTP_MCPU1_MHSPI_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MHMTU3A(ch)            (R_MSTP->MCPU1)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MHMTU3A(ch)            (1U << R_MSTP_MCPU1_MHMTU3A_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MHSRC(ch)              (R_MSTP->MCPU1)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MHSRC(ch)              (1U << R_MSTP_MCPU1_MHSRC_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MHGPT(ch)              (R_MSTP->MCPU1)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MHGPT(ch)              (1U << R_MSTP_MCPU1_MHGPT_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MHPOEG(ch)             (R_MSTP->MCPU1)

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 3.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MHPOEG(ch)             (1U << (R_MSTP_MCPU1_MHPOEGA_Pos + (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MHPOE3(ch)             (R_MSTP->MCPU1)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MHPOE3(ch)             (1U << R_MSTP_MCPU1_MHPOE3_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MHSSIF(ch)             (R_MSTP->MCPU1)

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 3.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MHSSIF(ch)             (1U << (R_MSTP_MCPU1_MHSSIF0_Pos + (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 2.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MHRSPI(ch)             *((2U > (ch)) ? &(R_MSTP->MCPU1) : &(R_MSTP->MCPU2))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 2.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MHRSPI(ch)             ((2U > (ch)) ? (1U << (R_MSTP_MCPU1_MHRSPI0_Pos + (ch))) \
                                                      : (1U << R_MSTP_MCPU2_MHRSPI2_Pos))

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MHSCIF(ch)             (R_MSTP->MCPU2)

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 4.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MHSCIF(ch)             (1U << (R_MSTP_MCPU2_MHSCIF0_Pos + (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MHIRDA(ch)             (R_MSTP->MCPU2)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MHIRDA(ch)             (1U << R_MSTP_MCPU2_MHIRDA_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MHSCI(ch)              (R_MSTP->MCPU2)

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 1.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MHSCI(ch)              (1U << (R_MSTP_MCPU2_MHSCI0_Pos + (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPCANFD(ch)            (R_MSTP->MCPU2)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPCANFD(ch)            (1U << R_MSTP_MCPU2_MPCANFD_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPI2C(ch)              (R_MSTP->MCPU2)

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 3.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPI2C(ch)              (1U << (R_MSTP_MCPU2_MPI2C0_Pos + (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPADC(ch)              (R_MSTP->MCPU2)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPADC(ch)              (1U << R_MSTP_MCPU2_MPADC_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPTSU(ch)              (R_MSTP->MCPU2)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPTSU(ch)              (1U << R_MSTP_MCPU2_MPTSU_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MXSDHI(ch)             (R_MSTP->PERI_COM)

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 1.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MXSDHI(ch)             (1U << (R_MSTP_PERI_COM_MXSDHI0_Pos + (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPGIGE(ch)             (R_MSTP->PERI_COM)

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 1.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPGIGE(ch)             (1U << (R_MSTP_PERI_COM_MPGIGE0_Pos + (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPUSBT(ch)             (R_MSTP->PERI_COM)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPUSBT(ch)             (1U << R_MSTP_PERI_COM_MPUSBT_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MHUSB2_0_H(ch)         (R_MSTP->PERI_COM)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MHUSB2_0_H(ch)         (1U << R_MSTP_PERI_COM_MHUSB2H_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MHUSB2_0_F(ch)         (R_MSTP->PERI_COM)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MHUSB2_0_F(ch)         (1U << R_MSTP_PERI_COM_MHUSB2F_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MHUSB2_1(ch)           (R_MSTP->PERI_COM)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MHUSB2_1(ch)           (1U << R_MSTP_PERI_COM_MHUSB21_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MXCOM(ch)              (R_MSTP->PERI_COM)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MXCOM(ch)              (1U << R_MSTP_PERI_COM_MXCOM_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MXMCPU(ch)             (R_MSTP->PERI_CPU)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MXMCPU(ch)             (1U << R_MSTP_PERI_CPU_MXMCPU_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MXACPU(ch)             (R_MSTP->PERI_CPU)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MXACPU(ch)             (1U << R_MSTP_PERI_CPU_MXACPU_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPCST(ch)              (R_MSTP->PERI_CPU)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPCST(ch)              (1U << R_MSTP_PERI_CPU_MPCST_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPSYC(ch)              (R_MSTP->PERI_CPU)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPSYC(ch)              (1U << R_MSTP_PERI_CPU_MPSYC_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPCPG(ch)              (R_MSTP->PERI_CPU)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPCPG(ch)              (1U << R_MSTP_PERI_CPU_MPCPG_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MHGPIO(ch)             (R_MSTP->PERI_CPU)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MHGPIO(ch)             (1U << R_MSTP_PERI_CPU_MHGPIO_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPTZC(ch)              (R_MSTP->PERI_CPU)

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 3.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPTZC(ch)              (1U << (R_MSTP_PERI_CPU_MPTZC0_Pos + (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPSRAM_A(ch)           (R_MSTP->PERI_CPU)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPSRAM_A(ch)           (1U << R_MSTP_PERI_CPU_MPSRAM_A_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPSRAM_M(ch)           (R_MSTP->PERI_CPU)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPSRAM_M(ch)           (1U << R_MSTP_PERI_CPU_MPSRAM_M_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPIA55(ch)             (R_MSTP->PERI_CPU)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPIA55(ch)             (1U << R_MSTP_PERI_CPU_MPIA55_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPIM33(ch)             (R_MSTP->PERI_CPU)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPIM33(ch)             (1U << R_MSTP_PERI_CPU_MPIM33_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MXREG0(ch)             (R_MSTP->PERI_CPU)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MXREG0(ch)             (1U << R_MSTP_PERI_CPU_MXREG0_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPPHY(ch)              (R_MSTP->PERI_DDR)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPPHY(ch)              (1U << R_MSTP_PERI_DDR_MPPHY_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MXMEMC_REG(ch)         (R_MSTP->PERI_DDR)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MXMEMC_REG(ch)         (1U << R_MSTP_PERI_DDR_MXMEMC_REG_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPVCP4L_V(ch)          (R_MSTP->PERI_VIDEO)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPVCP4L_V(ch)          (1U << R_MSTP_PERI_VIDEO_MPVCP4L_V_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPVCP4L_C(ch)          (R_MSTP->PERI_VIDEO)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPVCP4L_C(ch)          (1U << R_MSTP_PERI_VIDEO_MPVCP4L_C_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPFCPCS(ch)            (R_MSTP->PERI_VIDEO)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPFCPCS(ch)            (1U << R_MSTP_PERI_VIDEO_MPFCPCS_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPCRU(ch)              (R_MSTP->PERI_VIDEO)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPCRU(ch)              (1U << R_MSTP_PERI_VIDEO_MPCRU_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPISU(ch)              (R_MSTP->PERI_VIDEO)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPISU(ch)              (1U << R_MSTP_PERI_VIDEO_MPISU_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPDSIPHY(ch)           (R_MSTP->PERI_VIDEO)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPDSIPHY(ch)           (1U << R_MSTP_PERI_VIDEO_MPDSIPHY_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPDSIL(ch)             (R_MSTP->PERI_VIDEO)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPDSIL(ch)             (1U << R_MSTP_PERI_VIDEO_MPDSIL_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPVSPD(ch)             (R_MSTP->PERI_VIDEO)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPVSPD(ch)             (1U << R_MSTP_PERI_VIDEO_MPVSPD_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPFCPVD(ch)            (R_MSTP->PERI_VIDEO)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPFCPVD(ch)            (1U << R_MSTP_PERI_VIDEO_MPCPVD_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPDU(ch)               (R_MSTP->PERI_VIDEO)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPDU(ch)               (1U << R_MSTP_PERI_VIDEO_MPDU_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MXVIDEO(ch)            (R_MSTP->PERI_VIDEO)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MXVIDEO(ch)            (1U << R_MSTP_PERI_VIDEO_MXVIDEO_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPWDT_PUP(ch)          (R_MSTP->REG0)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPWDT_PUP(ch)          (1U << R_MSTP_REG0_MPWDT3_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPWDT_CM33(ch)         (R_MSTP->REG0)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPWDT_CM33(ch)         (1U << R_MSTP_REG0_MPWDT2_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPWDT_CA55C0(ch)       (R_MSTP->REG0)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPWDT_CA55C0(ch)       (1U << R_MSTP_REG0_MPWDT0_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPWDT_CA55C1(ch)       (R_MSTP->REG0)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPWDT_CA55C1(ch)       (1U << R_MSTP_REG0_MPWDT1_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPOSTM(ch)             (R_MSTP->REG0)

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 2.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPOSTM(ch)             (1U << (R_MSTP_REG0_MPOSTM0_Pos + (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MXDMAC_S(ch)           (R_MSTP->REG1)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MXDMAC_S(ch)           (1U << R_MSTP_REG1_MXDMAC_S_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPDMAC_S(ch)           (R_MSTP->REG1)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPDMAC_S(ch)           (1U << R_MSTP_REG1_MPDMAC_S_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MXDMAC_NS(ch)          (R_MSTP->REG1)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MXDMAC_NS(ch)          (1U << R_MSTP_REG1_MXDMAC_NS_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPDMAC_NS(ch)          (R_MSTP->REG1)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPDMAC_NS(ch)          (1U << R_MSTP_REG1_MPDMAC_NS_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MXMALI(ch)             (R_MSTP->REG1)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MXMALI(ch)             (1U << R_MSTP_REG1_MXMALI_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MHTSIPG(ch)            (R_MSTP->REG1)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MHTSIPG(ch)            (1U << R_MSTP_REG1_MHTSIPG_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MPTSIPG_OTP(ch)        (R_MSTP->REG1)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MPTSIPG_OTP(ch)        (1U << R_MSTP_REG1_MHTSIPG_OTP_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MXGIC(ch)              (R_MSTP->REG1)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MXGIC(ch)              (1U << R_MSTP_REG1_MXGIC_Pos)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_TZCDDR(ch)             (R_MSTP->TZCDDR)

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 3.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_TZCDDR(ch)             (1U << (R_MSTP_TZCDDR_MSTOP0_Pos + (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_REG_BSP_MSTP_MHU(ch)                (R_MSTP->MHU)

/***********************************************************************************************************************
 *
 * @param      ch  Dummy parameter.
 **********************************************************************************************************************/
#define BSP_MSTP_BIT_BSP_MSTP_MHU(ch)                (1U << R_MSTP_MHU_MSTOP_Pos)

/** Common macro for FSP header files. There is also a corresponding FSP_HEADER macro at the top of this file. */
FSP_FOOTER

/***********************************************************************************************************************
 * Typedef definitions
 **********************************************************************************************************************/

/** Following IPs are available module stop & start. */
typedef enum e_bsp_mstp_ip
{
    BSP_MSTP_MXSRAM_A     = 0,
    BSP_MSTP_MXSRAM_M     = 1,
    BSP_MSTP_MHSPI        = 2,
    BSP_MSTP_MHMTU3A      = 3,
    BSP_MSTP_MHSRC        = 4,
    BSP_MSTP_MHGPT        = 5,
    BSP_MSTP_MHPOEG       = 6,
    BSP_MSTP_MHPOE3       = 7,
    BSP_MSTP_MHSSIF       = 8,
    BSP_MSTP_MHRSPI       = 9,
    BSP_MSTP_MHSCIF       = 10,
    BSP_MSTP_MHIRDA       = 11,
    BSP_MSTP_MHSCI        = 12,
    BSP_MSTP_MPCANFD      = 13,
    BSP_MSTP_MPI2C        = 14,
    BSP_MSTP_MPADC        = 15,
    BSP_MSTP_MPTSU        = 16,
    BSP_MSTP_MXSDHI       = 17,
    BSP_MSTP_MPGIGE       = 18,
    BSP_MSTP_MPUSBT       = 19,
    BSP_MSTP_MHUSB2_0_H   = 20,
    BSP_MSTP_MHUSB2_0_F   = 21,
    BSP_MSTP_MHUSB2_1     = 22,
    BSP_MSTP_MXCOM        = 23,
    BSP_MSTP_MXMCPU       = 24,
    BSP_MSTP_MXACPU       = 25,
    BSP_MSTP_MPCST        = 26,
    BSP_MSTP_MPSYC        = 27,
    BSP_MSTP_MPCPG        = 28,
    BSP_MSTP_MHGPIO       = 29,
    BSP_MSTP_MPTZC        = 30,
    BSP_MSTP_MPSRAM_A     = 31,
    BSP_MSTP_MPSRAM_M     = 32,
    BSP_MSTP_MPIA55       = 33,
    BSP_MSTP_MPIM33       = 34,
    BSP_MSTP_MXREG0       = 35,
    BSP_MSTP_MPPHY        = 36,
    BSP_MSTP_MXMEMC_REG   = 37,
    BSP_MSTP_MPVCP4L_V    = 38,
    BSP_MSTP_MPVCP4L_C    = 39,
    BSP_MSTP_MPFCPCS      = 40,
    BSP_MSTP_MPCRU        = 41,
    BSP_MSTP_MPISU        = 42,
    BSP_MSTP_MPDSIPHY     = 43,
    BSP_MSTP_MPDSIL       = 44,
    BSP_MSTP_MPVSPD       = 45,
    BSP_MSTP_MPFCPVD      = 46,
    BSP_MSTP_MPDU         = 47,
    BSP_MSTP_MXVIDEO      = 48,
    BSP_MSTP_MPWDT_PUP    = 49,
    BSP_MSTP_MPWDT_CM33   = 50,
    BSP_MSTP_MPWDT_CA55C0 = 51,
    BSP_MSTP_MPWDT_CA55C1 = 52,
    BSP_MSTP_MPOSTM       = 53,
    BSP_MSTP_MXDMAC_S     = 54,
    BSP_MSTP_MPDMAC_S     = 55,
    BSP_MSTP_MXDMAC_NS    = 56,
    BSP_MSTP_MPDMAC_NS    = 57,
    BSP_MSTP_MXMALI       = 58,
    BSP_MSTP_MHTSIPG      = 59,
    BSP_MSTP_MPTSIPG_OTP  = 60,
    BSP_MSTP_MXGIC        = 61,
    BSP_MSTP_TZCDDR       = 62,
    BSP_MSTP_MHU          = 63,
} bsp_mstp_ip_t;

/***********************************************************************************************************************
 * Exported global variables
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Exported global functions (to be accessed by other files)
 **********************************************************************************************************************/

#endif                                 /* BSP_MODULE_H */
