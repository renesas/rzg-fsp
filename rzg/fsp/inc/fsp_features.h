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

#ifndef FSP_FEATURES_H
#define FSP_FEATURES_H

/***********************************************************************************************************************
 * Includes   <System Includes> , "Project Includes"
 **********************************************************************************************************************/

/* C99 includes. */
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <assert.h>

/* Different compiler support. */
#include "fsp_common_api.h"
#include "../../fsp/src/bsp/mcu/all/bsp_compiler_support.h"
#include "../../fsp/src/bsp/mcu/all/bsp_module_stop.h"
#include "../../fsp/src/bsp/mcu/all/bsp_clocks.h"

/***********************************************************************************************************************
 * Macro definitions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Start clock supply
 *
 * @param      ip   fsp_ip_t enum value for the ip to which the clock is supplied.
 * @param      ch   The channel. Use ch 0 for units without channels. Only single bit can be set.
 **********************************************************************************************************************/
#define R_BSP_MODULE_CLKON(ip, ch)              (R_BSP_MODULE_CLKON_ ## ip(ch))

/***********************************************************************************************************************
 * Stop clock supply
 *
 * @param      ip   fsp_ip_t enum value for the unit to stop clock.
 * @param      ch   The channel. Use ch 0 for units without channels. Only single bit can be set.
 **********************************************************************************************************************/
#define R_BSP_MODULE_CLKOFF(ip, ch)             (R_BSP_MODULE_CLKOFF_ ## ip(ch))

/***********************************************************************************************************************
 * Reset ip
 *
 * @param      ip   fsp_ip_t enum value for the ip to be reset.
 * @param      ch   The channel. Use ch 0 for units without channels. Only single bit can be set.
 **********************************************************************************************************************/
#define R_BSP_MODULE_RSTON(ip, ch)              (R_BSP_MODULE_RSTON_ ## ip(ch))

/***********************************************************************************************************************
 * Reset ip
 *
 * @param      ip   fsp_ip_t enum value for the ip to be reset.
 * @param      ch   The channel. Use ch 0 for units without channels. Only single bit can be set.
 **********************************************************************************************************************/
#define R_BSP_MODULE_RSTOFF(ip, ch)             (R_BSP_MODULE_RSTOFF_ ## ip(ch))

/*******************************************************************************************************************//**
 * Cancels the module stop state.
 *
 * @param      ip   fsp_ip_t enum value for the module to be started
 * @param      ch   The channel. Use ch 0 for modules without channels.
 **********************************************************************************************************************/
#define R_BSP_MODULE_START(ip, ch)              (R_BSP_MODULE_START_ ## ip(ch))

/*******************************************************************************************************************//**
 * Enables the module stop state.
 *
 * @param      ip   fsp_ip_t enum value for the module to be stopped
 * @param      ch   The channel. Use ch 0 for modules without channels.
 **********************************************************************************************************************/
#define R_BSP_MODULE_STOP(ip, ch)               (R_BSP_MODULE_STOP_ ## ip(ch))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 2.
 **********************************************************************************************************************/
#define R_BSP_MODULE_CLKON_FSP_IP_GTM(ch)       (R_BSP_CLKON(BSP_CLK_GTM, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 2.
 **********************************************************************************************************************/
#define R_BSP_MODULE_CLKOFF_FSP_IP_GTM(ch)      (R_BSP_CLKOFF(BSP_CLK_GTM, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 2.
 **********************************************************************************************************************/
#define R_BSP_MODULE_RSTON_FSP_IP_GTM(ch)       (R_BSP_RSTON(BSP_CLK_GTM, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 2.
 **********************************************************************************************************************/
#define R_BSP_MODULE_RSTOFF_FSP_IP_GTM(ch)      (R_BSP_RSTOFF(BSP_CLK_GTM, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 2.
 **********************************************************************************************************************/
#define R_BSP_MODULE_START_FSP_IP_GTM(ch)       (R_BSP_MSTPSTART(BSP_MSTP_MPOSTM, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 2.
 **********************************************************************************************************************/
#define R_BSP_MODULE_STOP_FSP_IP_GTM(ch)        (R_BSP_MSTPSTOP(BSP_MSTP_MPOSTM, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0.
 **********************************************************************************************************************/
#define R_BSP_MODULE_CLKON_FSP_IP_GPT(ch)       (R_BSP_CLKON(BSP_CLK_GPT, 0))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0.
 **********************************************************************************************************************/
#define R_BSP_MODULE_CLKOFF_FSP_IP_GPT(ch)      (R_BSP_CLKOFF(BSP_CLK_GPT, 0))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0.
 **********************************************************************************************************************/
#define R_BSP_MODULE_RSTON_FSP_IP_GPT(ch)       (R_BSP_RSTON(BSP_CLK_GPT, 0))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0.
 **********************************************************************************************************************/
#define R_BSP_MODULE_RSTOFF_FSP_IP_GPT(ch)      (R_BSP_RSTOFF(BSP_CLK_GPT, 0))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0.
 **********************************************************************************************************************/
#define R_BSP_MODULE_START_FSP_IP_GPT(ch)       (R_BSP_MSTPSTART(BSP_MSTP_MHGPT, 0))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0.
 **********************************************************************************************************************/
#define R_BSP_MODULE_STOP_FSP_IP_GPT(ch)        (R_BSP_MSTPSTOP(BSP_MSTP_MHGPT, 0))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 3.
 **********************************************************************************************************************/
#define R_BSP_MODULE_CLKON_FSP_IP_POEG(ch)      (R_BSP_CLKON(BSP_CLK_POEG, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 3.
 **********************************************************************************************************************/
#define R_BSP_MODULE_CLKOFF_FSP_IP_POEG(ch)     (R_BSP_CLKOFF(BSP_CLK_POEG, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 3.
 **********************************************************************************************************************/
#define R_BSP_MODULE_RSTON_FSP_IP_POEG(ch)      (R_BSP_RSTON(BSP_CLK_POEG, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 3.
 **********************************************************************************************************************/
#define R_BSP_MODULE_RSTOFF_FSP_IP_POEG(ch)     (R_BSP_RSTOFF(BSP_CLK_POEG, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 3.
 **********************************************************************************************************************/
#define R_BSP_MODULE_START_FSP_IP_POEG(ch)      (R_BSP_MSTPSTART(BSP_MSTP_MHPOEG, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 3.
 **********************************************************************************************************************/
#define R_BSP_MODULE_STOP_FSP_IP_POEG(ch)       (R_BSP_MSTPSTOP(BSP_MSTP_MHPOEG, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0.
 **********************************************************************************************************************/
#define R_BSP_MODULE_CLKON_FSP_IP_PORT(ch)      (R_BSP_CLKON(BSP_CLK_GPIO, 0))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0.
 **********************************************************************************************************************/
#define R_BSP_MODULE_CLKOFF_FSP_IP_PORT(ch)     (R_BSP_CLKOFF(BSP_CLK_GPIO, 0))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0.
 **********************************************************************************************************************/
#define R_BSP_MODULE_RSTON_FSP_IP_PORT(ch)      (R_BSP_RSTON(BSP_CLK_GPIO, 0))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0.
 **********************************************************************************************************************/
#define R_BSP_MODULE_RSTOFF_FSP_IP_PORT(ch)     (R_BSP_RSTOFF(BSP_CLK_GPIO, 0))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0.
 **********************************************************************************************************************/
#define R_BSP_MODULE_START_FSP_IP_PORT(ch)      (R_BSP_MSTPSTART(BSP_MSTP_MHGPIO, 0))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0.
 **********************************************************************************************************************/
#define R_BSP_MODULE_STOP_FSP_IP_PORT(ch)       (R_BSP_MSTPSTOP(BSP_MSTP_MHGPIO, 0))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 1.
 **********************************************************************************************************************/
#define R_BSP_MODULE_CLKON_FSP_IP_IM33(ch)      (R_BSP_CLKON(BSP_CLK_IM33, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 1.
 **********************************************************************************************************************/
#define R_BSP_MODULE_CLKOFF_FSP_IP_IM33(ch)     (R_BSP_CLKOFF(BSP_CLK_IM33, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0.
 **********************************************************************************************************************/
#define R_BSP_MODULE_RSTON_FSP_IP_IM33(ch)      (R_BSP_RSTON(BSP_CLK_IM33, 0))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0.
 **********************************************************************************************************************/
#define R_BSP_MODULE_RSTOFF_FSP_IP_IM33(ch)     (R_BSP_RSTOFF(BSP_CLK_IM33, 0))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0.
 **********************************************************************************************************************/
#define R_BSP_MODULE_START_FSP_IP_IM33(ch)      (R_BSP_MSTPSTART(BSP_MSTP_MPIM33, 0))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0.
 **********************************************************************************************************************/
#define R_BSP_MODULE_STOP_FSP_IP_IM33(ch)       (R_BSP_MSTPSTOP(BSP_MSTP_MPIM33, 0))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 4.
 **********************************************************************************************************************/
#define R_BSP_MODULE_CLKON_FSP_IP_SCIF(ch)      (R_BSP_CLKON(BSP_CLK_SCIF, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 4.
 **********************************************************************************************************************/
#define R_BSP_MODULE_CLKOFF_FSP_IP_SCIF(ch)     (R_BSP_CLKOFF(BSP_CLK_SCIF, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 4.
 **********************************************************************************************************************/
#define R_BSP_MODULE_RSTON_FSP_IP_SCIF(ch)      (R_BSP_RSTON(BSP_CLK_SCIF, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 4.
 **********************************************************************************************************************/
#define R_BSP_MODULE_RSTOFF_FSP_IP_SCIF(ch)     (R_BSP_RSTOFF(BSP_CLK_SCIF, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 4.
 **********************************************************************************************************************/
#define R_BSP_MODULE_START_FSP_IP_SCIF(ch)      (R_BSP_MSTPSTART(BSP_MSTP_MHSCIF, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 4.
 **********************************************************************************************************************/
#define R_BSP_MODULE_STOP_FSP_IP_SCIF(ch)       (R_BSP_MSTPSTOP(BSP_MSTP_MHSCIF, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 3.
 **********************************************************************************************************************/
#define R_BSP_MODULE_CLKON_FSP_IP_RIIC(ch)      (R_BSP_CLKON(BSP_CLK_I2C, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 3.
 **********************************************************************************************************************/
#define R_BSP_MODULE_CLKOFF_FSP_IP_RIIC(ch)     (R_BSP_CLKOFF(BSP_CLK_I2C, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 3.
 **********************************************************************************************************************/
#define R_BSP_MODULE_RSTON_FSP_IP_RIIC(ch)      (R_BSP_RSTON(BSP_CLK_I2C, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 3.
 **********************************************************************************************************************/
#define R_BSP_MODULE_RSTOFF_FSP_IP_RIIC(ch)     (R_BSP_RSTOFF(BSP_CLK_I2C, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 3.
 **********************************************************************************************************************/
#define R_BSP_MODULE_START_FSP_IP_RIIC(ch)      (R_BSP_MSTPSTART(BSP_MSTP_MPI2C, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 3.
 **********************************************************************************************************************/
#define R_BSP_MODULE_STOP_FSP_IP_RIIC(ch)       (R_BSP_MSTPSTOP(BSP_MSTP_MPI2C, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 2.
 **********************************************************************************************************************/
#define R_BSP_MODULE_CLKON_FSP_IP_RSPI(ch)      (R_BSP_CLKON(BSP_CLK_RSPI, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 2.
 **********************************************************************************************************************/
#define R_BSP_MODULE_CLKOFF_FSP_IP_RSPI(ch)     (R_BSP_CLKOFF(BSP_CLK_RSPI, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 2.
 **********************************************************************************************************************/
#define R_BSP_MODULE_RSTON_FSP_IP_RSPI(ch)      (R_BSP_RSTON(BSP_CLK_RSPI, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 2.
 **********************************************************************************************************************/
#define R_BSP_MODULE_RSTOFF_FSP_IP_RSPI(ch)     (R_BSP_RSTOFF(BSP_CLK_RSPI, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 2.
 **********************************************************************************************************************/
#define R_BSP_MODULE_START_FSP_IP_RSPI(ch)      (R_BSP_MSTPSTART(BSP_MSTP_MHRSPI, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 2.
 **********************************************************************************************************************/
#define R_BSP_MODULE_STOP_FSP_IP_RSPI(ch)       (R_BSP_MSTPSTOP(BSP_MSTP_MHRSPI, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 5.
 **********************************************************************************************************************/
#define R_BSP_MODULE_CLKON_FSP_IP_MHU(ch)       (R_BSP_CLKON(BSP_CLK_MHU, 0))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 5.
 **********************************************************************************************************************/
#define R_BSP_MODULE_CLKOFF_FSP_IP_MHU(ch)      (R_BSP_CLKOFF(BSP_CLK_MHU, 0))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 5.
 **********************************************************************************************************************/
#define R_BSP_MODULE_RSTON_FSP_IP_MHU(ch)       (R_BSP_RSTON(BSP_CLK_MHU, 0))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 5.
 **********************************************************************************************************************/
#define R_BSP_MODULE_RSTOFF_FSP_IP_MHU(ch)      (R_BSP_RSTOFF(BSP_CLK_MHU, 0))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 5.
 **********************************************************************************************************************/
#define R_BSP_MODULE_START_FSP_IP_MHU(ch)       (R_BSP_MSTPSTART(BSP_MSTP_MHU, 0))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 5.
 **********************************************************************************************************************/
#define R_BSP_MODULE_STOP_FSP_IP_MHU(ch)        (R_BSP_MSTPSTOP(BSP_MSTP_MHU, 0))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 1.
 **********************************************************************************************************************/
#define R_BSP_MODULE_CLKON_FSP_IP_DMAC(ch)      (R_BSP_CLKON(BSP_CLK_DMAC, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 1.
 **********************************************************************************************************************/
#define R_BSP_MODULE_CLKOFF_FSP_IP_DMAC(ch)     (R_BSP_CLKOFF(BSP_CLK_DMAC, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 1.
 **********************************************************************************************************************/
#define R_BSP_MODULE_RSTON_FSP_IP_DMAC(ch)      (R_BSP_RSTON(BSP_CLK_DMAC, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 1.
 **********************************************************************************************************************/
#define R_BSP_MODULE_RSTOFF_FSP_IP_DMAC(ch)     (R_BSP_RSTOFF(BSP_CLK_DMAC, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 1.
 **********************************************************************************************************************/
#define R_BSP_MODULE_START_FSP_IP_DMAC(ch)      {R_BSP_MSTPSTART(BSP_MSTP_MXDMAC_NS, (ch)); \
                                                 R_BSP_MSTPSTART(BSP_MSTP_MPDMAC_NS, (ch));}

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 1.
 **********************************************************************************************************************/
#define R_BSP_MODULE_STOP_FSP_IP_DMAC(ch)       {R_BSP_MSTPSTOP(BSP_MSTP_MXDMAC_NS, (ch)); \
                                                 R_BSP_MSTPSTOP(BSP_MSTP_MPDMAC_NS, (ch));}

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 3.
 **********************************************************************************************************************/
#define R_BSP_MODULE_CLKON_FSP_IP_SSI(ch)       (R_BSP_CLKON(BSP_CLK_SSIF, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 3.
 **********************************************************************************************************************/
#define R_BSP_MODULE_CLKOFF_FSP_IP_SSI(ch)      (R_BSP_CLKOFF(BSP_CLK_SSIF, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 3.
 **********************************************************************************************************************/
#define R_BSP_MODULE_RSTON_FSP_IP_SSI(ch)       (R_BSP_RSTON(BSP_CLK_SSIF, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 3.
 **********************************************************************************************************************/
#define R_BSP_MODULE_RSTOFF_FSP_IP_SSI(ch)      (R_BSP_RSTOFF(BSP_CLK_SSIF, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 3.
 **********************************************************************************************************************/
#define R_BSP_MODULE_START_FSP_IP_SSI(ch)       (R_BSP_MSTPSTART(BSP_MSTP_MHSSIF, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 3.
 **********************************************************************************************************************/
#define R_BSP_MODULE_STOP_FSP_IP_SSI(ch)        (R_BSP_MSTPSTOP(BSP_MSTP_MHSSIF, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 1.
 **********************************************************************************************************************/
#define R_BSP_MODULE_CLKON_FSP_IP_CANFD(ch)     (R_BSP_CLKON(BSP_CLK_CANFD, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 1.
 **********************************************************************************************************************/
#define R_BSP_MODULE_CLKOFF_FSP_IP_CANFD(ch)    (R_BSP_CLKOFF(BSP_CLK_CANFD, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 1.
 **********************************************************************************************************************/
#define R_BSP_MODULE_RSTON_FSP_IP_CANFD(ch)     (R_BSP_RSTON(BSP_CLK_CANFD, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 1.
 **********************************************************************************************************************/
#define R_BSP_MODULE_RSTOFF_FSP_IP_CANFD(ch)    (R_BSP_RSTOFF(BSP_CLK_CANFD, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 1.
 **********************************************************************************************************************/
#define R_BSP_MODULE_START_FSP_IP_CANFD(ch)     (R_BSP_MSTPSTART(BSP_MSTP_MPCANFD, (ch)))

/***********************************************************************************************************************
 *
 * @param      ch  The channel. Use ch 0 for units without channels. Only single bit can be set. ch 0 - 1.
 **********************************************************************************************************************/
#define R_BSP_MODULE_STOP_FSP_IP_CANFD(ch)      (R_BSP_MSTPSTOP(BSP_MSTP_MPCANFD, (ch)))

/*******************************************************************************************************************//**
 * @addtogroup BSP_MCU
 * @{
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Typedef definitions
 **********************************************************************************************************************/

/** Following IPs are available. Used for module standby release / transition, clock ON / OFF, and reset assert / negate. */
typedef enum e_fsp_ip
{
    FSP_IP_GTM   = 0,                  ///< General Timer
    FSP_IP_GPT   = 1,                  ///< General PWM Timer
    FSP_IP_POEG  = 2,                  ///< Port Output Enable for GPT
    FSP_IP_PORT  = 3,                  ///< I/O Ports
    FSP_IP_IM33  = 4,                  ///< IM33 (Interrupt controller)
    FSP_IP_SCIF  = 5,                  ///< Serial Communications Interface with FIFO
    FSP_IP_RIIC  = 6,                  ///< I2C Bus Interface
    FSP_IP_RSPI  = 7,                  ///< Renesas Serial Peripheral Interface
    FSP_IP_MHU   = 8,                  ///< Message Handling Unit
    FSP_IP_DMAC  = 9,                  ///< Direct Memory Access Controller
    FSP_IP_SSI   = 10,                 ///< Serial Sound Interface
    FSP_IP_CANFD = 11,                 ///< CANFD Interface (RS-CANFD)
} fsp_ip_t;

typedef void (* fsp_vector_t)(void);

/** @} (end addtogroup BSP_MCU) */

#endif                                 /* FSP_FEATURES_H */
