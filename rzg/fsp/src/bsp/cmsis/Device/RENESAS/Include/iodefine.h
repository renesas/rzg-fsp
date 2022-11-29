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
 * File Name    : iodefine.h
 * Version      : 1.00
 * Description  : iodefine header
 *********************************************************************************************************************/

#ifndef __IODEFINE_HEADER__
#define __IODEFINE_HEADER__

#include "iodefines/accctl_iodefine.h"
#include "iodefines/canfd_iodefine.h"
#include "iodefines/cpg_iodefine.h"
#ifndef BSP_OVERRIDE_REG_R_IOPORT
 #include "iodefines/gpio_iodefine.h"
#endif
#include "iodefines/gpt_iodefine.h"
#include "iodefines/gtm_iodefine.h"
#include "iodefines/intc_im33_iodefine.h"
#include "iodefines/mhu_iodefine.h"
#include "iodefines/mstp_iodefine.h"
#include "iodefines/poeg_iodefine.h"
#include "iodefines/riic_iodefine.h"
#include "iodefines/rspi_iodefine.h"
#include "iodefines/scifa_iodefine.h"
#include "iodefines/spibsc_iodefine.h"
#include "iodefines/ssi_iodefine.h"
#include "iodefines/sysc_iodefine.h"
#include "iodefines/wdt_iodefine.h"

#ifdef BSP_OVERRIDE_REG_HEADER_IOPORT
 #include BSP_OVERRIDE_REG_HEADER_IOPORT
#endif

#endif                                 /* __IODEFINE_HEADER__ */
