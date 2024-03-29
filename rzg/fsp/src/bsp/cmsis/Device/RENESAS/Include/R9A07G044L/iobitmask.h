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
 * File Name    : iobitmask.h
 * Version      : 1.00
 * Description  : iobitmask header
 *********************************************************************************************************************/

#ifndef __IOBITMASK_HEADER__
#define __IOBITMASK_HEADER__

#include "iobitmasks/adc_c_iobitmask.h"
#include "iobitmasks/cpg_iobitmask.h"
#include "iobitmasks/canfd_iobitmask.h"
#include "iobitmasks/dmac_b_iobitmask.h"
#include "iobitmasks/gpio_iobitmask.h"
#include "iobitmasks/gpt_iobitmask.h"
#include "iobitmasks/gtm_iobitmask.h"
#include "iobitmasks/intc_im33_iobitmask.h"
#include "iobitmasks/mhu_iobitmask.h"
#include "iobitmasks/mtu_iobitmask.h"
#include "iobitmasks/poeg_iobitmask.h"
#include "iobitmasks/riic_iobitmask.h"
#include "iobitmasks/rspi_iobitmask.h"
#include "iobitmasks/scifa_iobitmask.h"
#include "iobitmasks/spibsc_iobitmask.h"
#include "iobitmasks/ssi_iobitmask.h"
#include "iobitmasks/sysc_iobitmask.h"
#include "iobitmasks/tsu_iobitmask.h"
#include "iobitmasks/wdt_iobitmask.h"

#ifdef BSP_OVERRIDE_MASK_HEADER_IOPORT
 #include BSP_OVERRIDE_MASK_HEADER_IOPORT
#endif

#endif                                 /* __IOBITMASK_HEADER__ */
