/*
* Copyright (c) 2020 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/***********************************************************************************************************************
 * Includes
 **********************************************************************************************************************/
#include "r_mtu3_cfg.h"
#include "r_mtu3.h"

/***********************************************************************************************************************
 * Macro definitions
 **********************************************************************************************************************/

/* "MTU3" in ASCII, used to determine if channel is open. */
#define MTU3_OPEN                           (0x4D545533ULL)

#define MTU3_TOERA_MSK                      (R_MTU_TOERA_OE4D_Msk | R_MTU_TOERA_OE4C_Msk | R_MTU_TOERA_OE3D_Msk | \
                                             R_MTU_TOERA_OE4B_Msk | R_MTU_TOERA_OE4A_Msk | R_MTU_TOERA_OE3B_Msk)

#define MTU3_TOERB_MSK                      (R_MTU_TOERB_OE7D_Msk | R_MTU_TOERB_OE7C_Msk | R_MTU_TOERB_OE6D_Msk | \
                                             R_MTU_TOERB_OE7B_Msk | R_MTU_TOERB_OE7A_Msk | R_MTU_TOERB_OE6B_Msk)

#define MTU3_TCR_TPSC_POS                   (3U) /* MTUx.TCR.TPSC bit2-0 */
#define MTU3_TIOR_CAPTURE_MSK               (0x8)

#define MTU3_PCLK_DIV_1                     (1U)
#define MTU3_PCLK_DIV_2                     (2U)
#define MTU3_PCLK_DIV_4                     (4U)
#define MTU3_PCLK_DIV_8                     (8U)
#define MTU3_PCLK_DIV_16                    (16U)
#define MTU3_PCLK_DIV_32                    (32U)
#define MTU3_PCLK_DIV_64                    (64U)
#define MTU3_PCLK_DIV_256                   (256U)
#define MTU3_PCLK_DIV_1024                  (1024U)

#define MTU3_TPSC_OFS_ARRAY                 (8U)  /* MTUxTCR.TPSC bit2-0(The value is 0-7) */

#define MTU3_CLK_TPSC_NUM                   (15U) /* TPSC and TPSC2 setting range */
#define MTU3_MAX_COUNT                      (UINT16_MAX + 1U)

/* MTU3_CFG_OUTPUT_SUPPORT_ENABLE is set to 2 to enable extra features. */
#define MTU3_PRV_EXTRA_FEATURES_ENABLED     (2U)

/* Noise fileter offset address */
#define MTU0_NOISEFILTER_OFFSET_ADDRESS     (0x0000U)
#define MTU1_NOISEFILTER_OFFSET_ADDRESS     (0x0001U)
#define MTU2_NOISEFILTER_OFFSET_ADDRESS     (0x0002U)
#define MTU3_NOISEFILTER_OFFSET_ADDRESS     (0x0003U)
#define MTU4_NOISEFILTER_OFFSET_ADDRESS     (0x0004U)
#define MTU5_NOISEFILTER_OFFSET_ADDRESS     (0x0805U)
#define MTU6_NOISEFILTER_OFFSET_ADDRESS     (0x0803U)
#define MTU7_NOISEFILTER_OFFSET_ADDRESS     (0x0804U)
#define MTU8_NOISEFILTER_OFFSET_ADDRESS     (0x0008U)
#define MTU_NOISEFILTER_C_OFFSET_ADDRESS    (0x0009U)

/* MTUx.TCR offset address */
#define MTU0_TCR_OFFSET_ADDRESS             (0x0070U)
#define MTU1_TCR_OFFSET_ADDRESS             (0x00F0U)
#define MTU2_TCR_OFFSET_ADDRESS             (0x016EU)
#define MTU3_TCR_OFFSET_ADDRESS             (0x0000U)
#define MTU4_TCR_OFFSET_ADDRESS             (0x0001U)
#define MTU5_TCR_OFFSET_ADDRESS             (0x01F0U)
#define MTU6_TCR_OFFSET_ADDRESS             (0x0000U)
#define MTU7_TCR_OFFSET_ADDRESS             (0x0001U)
#define MTU8_TCR_OFFSET_ADDRESS             (0x0368U)

/* MTUx.TCR2 offset address */
#define MTU0_TCR2_OFFSET_ADDRESS            (0x0098U)
#define MTU1_TCR2_OFFSET_ADDRESS            (0x0104U)
#define MTU2_TCR2_OFFSET_ADDRESS            (0x017AU)
#define MTU3_TCR2_OFFSET_ADDRESS            (0x004CU)
#define MTU4_TCR2_OFFSET_ADDRESS            (0x004DU)
#define MTU5_TCR2_OFFSET_ADDRESS            (0x01F1U)
#define MTU6_TCR2_OFFSET_ADDRESS            (0x004CU)
#define MTU7_TCR2_OFFSET_ADDRESS            (0x004DU)
#define MTU8_TCR2_OFFSET_ADDRESS            (0x036EU)

/* MTUx.TMDR1 offset address */
#define MTU0_TMDR1_OFFSET_ADDRESS           (0x0071U)
#define MTU1_TMDR1_OFFSET_ADDRESS           (0x00F1U)
#define MTU2_TMDR1_OFFSET_ADDRESS           (0x016FU)
#define MTU3_TMDR1_OFFSET_ADDRESS           (0x0002U)
#define MTU4_TMDR1_OFFSET_ADDRESS           (0x0003U)
#define MTU5_TMDR1_OFFSET_ADDRESS           (0x0000U) /* Nothing */
#define MTU6_TMDR1_OFFSET_ADDRESS           (0x0002U)
#define MTU7_TMDR1_OFFSET_ADDRESS           (0x0003U)
#define MTU8_TMDR1_OFFSET_ADDRESS           (0x0369U)

/* MTUx.TIOR offset address */
#define MTU0_TIOR_OFFSET_ADDRESS            (0x0072U)
#define MTU1_TIOR_OFFSET_ADDRESS            (0x00F2U)
#define MTU2_TIOR_OFFSET_ADDRESS            (0x0170U)
#define MTU3_TIOR_OFFSET_ADDRESS            (0x0004U)
#define MTU4_TIOR_OFFSET_ADDRESS            (0x0006U)
#define MTU5_TIOR_OFFSET_ADDRESS            (0x01F2U)
#define MTU6_TIOR_OFFSET_ADDRESS            (0x0004U)
#define MTU7_TIOR_OFFSET_ADDRESS            (0x0006U)
#define MTU8_TIOR_OFFSET_ADDRESS            (0x036AU)

/* MTUx.TIER offset address */
#define MTU0_TIER_OFFSET_ADDRESS            (0x0074U)
#define MTU1_TIER_OFFSET_ADDRESS            (0x00F4U)
#define MTU2_TIER_OFFSET_ADDRESS            (0x0172U)
#define MTU3_TIER_OFFSET_ADDRESS            (0x0008U)
#define MTU4_TIER_OFFSET_ADDRESS            (0x0009U)
#define MTU5_TIER_OFFSET_ADDRESS            (0x021EU)
#define MTU6_TIER_OFFSET_ADDRESS            (0x0008U)
#define MTU7_TIER_OFFSET_ADDRESS            (0x0009U)
#define MTU8_TIER_OFFSET_ADDRESS            (0x036CU)

/* MTUx.TCNT offset address */
#define MTU0_TCNT_OFFSET_ADDRESS            (0x0076U)
#define MTU1_TCNT_OFFSET_ADDRESS            (0x00F6U)
#define MTU2_TCNT_OFFSET_ADDRESS            (0x0174U)
#define MTU3_TCNT_OFFSET_ADDRESS            (0x0010U)
#define MTU4_TCNT_OFFSET_ADDRESS            (0x0012U)
#define MTU5_TCNT_OFFSET_ADDRESS            (0x01ECU)
#define MTU6_TCNT_OFFSET_ADDRESS            (0x0010U)
#define MTU7_TCNT_OFFSET_ADDRESS            (0x0012U)
#define MTU8_TCNT_OFFSET_ADDRESS            (0x0370U)

/* MTUx.TGRA offset address */
#define MTU0_TGRA_OFFSET_ADDRESS            (0x0078U)
#define MTU1_TGRA_OFFSET_ADDRESS            (0x00F8U)
#define MTU2_TGRA_OFFSET_ADDRESS            (0x0176U)
#define MTU3_TGRA_OFFSET_ADDRESS            (0x0018U)
#define MTU4_TGRA_OFFSET_ADDRESS            (0x001CU)
#define MTU5_TGRA_OFFSET_ADDRESS            (0x01EEU)
#define MTU6_TGRA_OFFSET_ADDRESS            (0x0018U)
#define MTU7_TGRA_OFFSET_ADDRESS            (0x001CU)
#define MTU8_TGRA_OFFSET_ADDRESS            (0x0374U)

/* MTUx.TGRC offset address */
#define MTU0_TGRC_OFFSET_ADDRESS            (0x007CU)
#define MTU1_TGRC_OFFSET_ADDRESS            (0x000AU) /* Nothing */
#define MTU2_TGRC_OFFSET_ADDRESS            (0x000AU) /* Nothing */
#define MTU3_TGRC_OFFSET_ADDRESS            (0x0024U)
#define MTU4_TGRC_OFFSET_ADDRESS            (0x0028U)
#define MTU5_TGRC_OFFSET_ADDRESS            (0x0082U) /* Nothing */
#define MTU6_TGRC_OFFSET_ADDRESS            (0x0024U)
#define MTU7_TGRC_OFFSET_ADDRESS            (0x0028U)
#define MTU8_TGRC_OFFSET_ADDRESS            (0x037CU)

/* MTUx.TADCR offset address */
#define MTU0_TADCR_OFFSET_ADDRESS           (0x0000U) /* Nothing */
#define MTU1_TADCR_OFFSET_ADDRESS           (0x0000U) /* Nothing */
#define MTU2_TADCR_OFFSET_ADDRESS           (0x0000U) /* Nothing */
#define MTU3_TADCR_OFFSET_ADDRESS           (0x0000U) /* Nothing */
#define MTU4_TADCR_OFFSET_ADDRESS           (0x0040U)
#define MTU5_TADCR_OFFSET_ADDRESS           (0x0000U) /* Nothing */
#define MTU6_TADCR_OFFSET_ADDRESS           (0x0000U) /* Nothing */
#define MTU7_TADCR_OFFSET_ADDRESS           (0x0040U)
#define MTU8_TADCR_OFFSET_ADDRESS           (0x0000U) /* Nothing */

/* TGR offset address */
#define MTU3_TGRB_D_OFFSET_WORD             (0x2U)
#define MTU3_TGRB_D_OFFSET_LONG             (0x4U)

/* Phase count setting */
#define MTU3_PHASE_COUNTING_MODE_1_MD       (0x4U)
#define MTU3_PHASE_COUNTING_MODE_2_MD       (0x5U)
#define MTU3_PHASE_COUNTING_MODE_3_MD       (0x6U)
#define MTU3_PHASE_COUNTING_MODE_4_MD       (0x7U)
#define MTU3_PHASE_COUNTING_MODE_5_MD       (0x9U)

#define MTU3_PHASE_COUNTING_MODE_PCB_0      (0x0U)
#define MTU3_PHASE_COUNTING_MODE_PCB_1      (0x1U << 3)
#define MTU3_PHASE_COUNTING_MODE_PCB_2      (0x2U << 3)
#define MTU_TIOR_INPUT_RISING_EDGE          (0x08U) /* Input capture at rising edge */
#define MTU_TIOR_INPUT_FALLING_EDGE         (0x09U) /* Input capture at falling edge */
#define MTU_TIOR_INPUT_BOTH_EDGE            (0x0AU) /* Input capture at both edge */

/***********************************************************************************************************************
 * Typedef definitions
 **********************************************************************************************************************/

typedef enum e_mtu3_prv_capture_event
{
    MTU3_PRV_CAPTURE_EVENT_A = 0U,
    MTU3_PRV_CAPTURE_EVENT_B = 1U,
} mtu3_prv_capture_event_t;

/** MTU3 Channel No */
typedef enum e_mtu3_channel
{
    MTU3_CHANNEL_0 = 0,                ///< MTU3 channel 0
    MTU3_CHANNEL_1 = 1,                ///< MTU3 channel 1
    MTU3_CHANNEL_2 = 2,                ///< MTU3 channel 2
    MTU3_CHANNEL_3 = 3,                ///< MTU3 channel 3
    MTU3_CHANNEL_4 = 4,                ///< MTU3 channel 4
    MTU3_CHANNEL_6 = 6,                ///< MTU3 channel 6
    MTU3_CHANNEL_7 = 7,                ///< MTU3 channel 7
    MTU3_CHANNEL_8 = 8,                ///< MTU3 channel 8
} mtu3_channel_t;

/***********************************************************************************************************************
 * Private function prototypes
 **********************************************************************************************************************/
static void     mtu3_hardware_initialize(mtu3_instance_ctrl_t * const p_instance_ctrl, timer_cfg_t const * const p_cfg);
static void     mtu3_counter_initialize(mtu3_instance_ctrl_t * const p_instance_ctrl, timer_cfg_t const * const p_cfg);
static void     mtu3_common_open(mtu3_instance_ctrl_t * const p_instance_ctrl, timer_cfg_t const * const p_cfg);
static void     mtu3_set_count(mtu3_instance_ctrl_t * const p_instance_ctrl, uint32_t counter);
static void     mtu3_stop_timer(mtu3_instance_ctrl_t * const p_instance_ctrl);
static uint32_t mtu3_clock_frequency_get(mtu3_instance_ctrl_t * const p_instance_ctrl, uint32_t ch_addr_ofs);
static uint8_t  mtu3_get_tstr(mtu3_instance_ctrl_t * const p_instance_ctrl);
static void     r_mtu3_disable_irq(IRQn_Type irq);
static void     r_mtu3_enable_irq(IRQn_Type const irq, uint32_t priority, void * p_context) __attribute__((noinline));
static void     mtu3_enable_interrupt(mtu3_instance_ctrl_t * const p_instance_ctrl);
static void     mtu3_disable_interrupt(mtu3_instance_ctrl_t * const p_instance_ctrl);
static void     r_mtu3_call_callback(mtu3_instance_ctrl_t * p_ctrl, timer_event_t event, uint32_t capture);
static void     mtu3_count_mode_set(mtu3_instance_ctrl_t * const p_instance_ctrl, mtu3_phase_counting_mode_t mode);
static void     mtu3_count_mode_hardware_initialize(mtu3_instance_ctrl_t * const      p_instance_ctrl,
                                                    mtu3_extended_cfg_t const * const p_extend);

/***********************************************************************************************************************
 * ISR prototypes
 **********************************************************************************************************************/
void mtu3_counter_overflow_isr(void);
void mtu3_capture_compare_a_isr(void);
void mtu3_capture_compare_b_isr(void);

/***********************************************************************************************************************
 * Private global variables
 **********************************************************************************************************************/

/* Divided value table of MTU3. */
/* Defined based on the values of TCR.TPSC and TCR2.TPSC2.(External clock(MTCLKA, MTIOC1A, etc) is defined as 1 division) */
/* [0]-[7]: TCR.TPSC setting value. [8]-[15]: TCR2.TPSC2 setting value(For other than ch5) */
/* [0]-[3]: TCR.TPSC setting value. [4]-[12]: TCR2.TPSC2-TCR2.CKEG setting value(For ch5) */
static const uint16_t mtu3_clk_div[BSP_FEATURE_MTU3_MAX_CHANNELS][MTU3_CLK_TPSC_NUM] =
{
    {MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_4, MTU3_PCLK_DIV_16, MTU3_PCLK_DIV_64, MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1,      /* MTU ch0 */
     MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_2, MTU3_PCLK_DIV_8, MTU3_PCLK_DIV_32, MTU3_PCLK_DIV_256,
     MTU3_PCLK_DIV_1024, MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1},
    {MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_4, MTU3_PCLK_DIV_16, MTU3_PCLK_DIV_64, MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1,      /* MTU ch1 */
     MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_2, MTU3_PCLK_DIV_8, MTU3_PCLK_DIV_32, MTU3_PCLK_DIV_1024,
     MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1},
    {MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_4, MTU3_PCLK_DIV_16, MTU3_PCLK_DIV_64, MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1,      /* MTU ch2 */
     MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1024, MTU3_PCLK_DIV_2, MTU3_PCLK_DIV_8, MTU3_PCLK_DIV_32, MTU3_PCLK_DIV_256,
     MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1},
    {MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_4, MTU3_PCLK_DIV_16, MTU3_PCLK_DIV_64, MTU3_PCLK_DIV_256, MTU3_PCLK_DIV_1024, /* MTU ch3 */
     MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_2, MTU3_PCLK_DIV_8, MTU3_PCLK_DIV_32, MTU3_PCLK_DIV_1,
     MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1},
    {MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_4, MTU3_PCLK_DIV_16, MTU3_PCLK_DIV_64, MTU3_PCLK_DIV_256, MTU3_PCLK_DIV_1024, /* MTU ch4 */
     MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_2, MTU3_PCLK_DIV_8, MTU3_PCLK_DIV_32, MTU3_PCLK_DIV_1,
     MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1},
    {MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_4, MTU3_PCLK_DIV_16, MTU3_PCLK_DIV_64, MTU3_PCLK_DIV_2, MTU3_PCLK_DIV_8,      /* MTU ch5 */
     MTU3_PCLK_DIV_32, MTU3_PCLK_DIV_256, MTU3_PCLK_DIV_1024, MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1,
     MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1},
    {MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_4, MTU3_PCLK_DIV_16, MTU3_PCLK_DIV_64, MTU3_PCLK_DIV_256, MTU3_PCLK_DIV_1024, /* MTU ch6 */
     MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_2, MTU3_PCLK_DIV_8, MTU3_PCLK_DIV_32, MTU3_PCLK_DIV_1,
     MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1},
    {MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_4, MTU3_PCLK_DIV_16, MTU3_PCLK_DIV_64, MTU3_PCLK_DIV_256, MTU3_PCLK_DIV_1024, /* MTU ch7 */
     MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_2, MTU3_PCLK_DIV_8, MTU3_PCLK_DIV_32, MTU3_PCLK_DIV_1,
     MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1},
    {MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_4, MTU3_PCLK_DIV_16, MTU3_PCLK_DIV_64, MTU3_PCLK_DIV_256, MTU3_PCLK_DIV_1024, /* MTU ch8 */
     MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_2, MTU3_PCLK_DIV_8, MTU3_PCLK_DIV_32, MTU3_PCLK_DIV_1,
     MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1, MTU3_PCLK_DIV_1},
};

/* Noise fileter offset address */
static const uint32_t nfcr_ofs_addr[BSP_FEATURE_MTU3_MAX_CHANNELS] =
{
    MTU0_NOISEFILTER_OFFSET_ADDRESS,
    MTU1_NOISEFILTER_OFFSET_ADDRESS,
    MTU2_NOISEFILTER_OFFSET_ADDRESS,
    MTU3_NOISEFILTER_OFFSET_ADDRESS,
    MTU4_NOISEFILTER_OFFSET_ADDRESS,
    MTU5_NOISEFILTER_OFFSET_ADDRESS,
    MTU6_NOISEFILTER_OFFSET_ADDRESS,
    MTU7_NOISEFILTER_OFFSET_ADDRESS,
    MTU8_NOISEFILTER_OFFSET_ADDRESS,
};

/* MTUx.TCR offset address */
static const uint32_t tcr_ofs_addr[BSP_FEATURE_MTU3_MAX_CHANNELS] =
{
    MTU0_TCR_OFFSET_ADDRESS,
    MTU1_TCR_OFFSET_ADDRESS,
    MTU2_TCR_OFFSET_ADDRESS,
    MTU3_TCR_OFFSET_ADDRESS,
    MTU4_TCR_OFFSET_ADDRESS,
    MTU5_TCR_OFFSET_ADDRESS,
    MTU6_TCR_OFFSET_ADDRESS,
    MTU7_TCR_OFFSET_ADDRESS,
    MTU8_TCR_OFFSET_ADDRESS,
};

/* MTUx.TCR2 offset address */
static const uint32_t tcr2_ofs_addr[BSP_FEATURE_MTU3_MAX_CHANNELS] =
{
    MTU0_TCR2_OFFSET_ADDRESS,
    MTU1_TCR2_OFFSET_ADDRESS,
    MTU2_TCR2_OFFSET_ADDRESS,
    MTU3_TCR2_OFFSET_ADDRESS,
    MTU4_TCR2_OFFSET_ADDRESS,
    MTU5_TCR2_OFFSET_ADDRESS,
    MTU6_TCR2_OFFSET_ADDRESS,
    MTU7_TCR2_OFFSET_ADDRESS,
    MTU8_TCR2_OFFSET_ADDRESS,
};

/* MTUx.TMDR1 offset address */
static const uint32_t tmdr1_ofs_addr[BSP_FEATURE_MTU3_MAX_CHANNELS] =
{
    MTU0_TMDR1_OFFSET_ADDRESS,
    MTU1_TMDR1_OFFSET_ADDRESS,
    MTU2_TMDR1_OFFSET_ADDRESS,
    MTU3_TMDR1_OFFSET_ADDRESS,
    MTU4_TMDR1_OFFSET_ADDRESS,
    MTU5_TMDR1_OFFSET_ADDRESS,         /* Nothing */
    MTU6_TMDR1_OFFSET_ADDRESS,
    MTU7_TMDR1_OFFSET_ADDRESS,
    MTU8_TMDR1_OFFSET_ADDRESS,
};

/* MTUx.TIOR offset address */
static const uint32_t tior_ofs_addr[BSP_FEATURE_MTU3_MAX_CHANNELS] =
{
    MTU0_TIOR_OFFSET_ADDRESS,
    MTU1_TIOR_OFFSET_ADDRESS,
    MTU2_TIOR_OFFSET_ADDRESS,
    MTU3_TIOR_OFFSET_ADDRESS,
    MTU4_TIOR_OFFSET_ADDRESS,
    MTU5_TIOR_OFFSET_ADDRESS,
    MTU6_TIOR_OFFSET_ADDRESS,
    MTU7_TIOR_OFFSET_ADDRESS,
    MTU8_TIOR_OFFSET_ADDRESS,
};

/* MTUx.TIER offset address */
static const uint32_t tier_ofs_addr[BSP_FEATURE_MTU3_MAX_CHANNELS] =
{
    MTU0_TIER_OFFSET_ADDRESS,
    MTU1_TIER_OFFSET_ADDRESS,
    MTU2_TIER_OFFSET_ADDRESS,
    MTU3_TIER_OFFSET_ADDRESS,
    MTU4_TIER_OFFSET_ADDRESS,
    MTU5_TIER_OFFSET_ADDRESS,
    MTU6_TIER_OFFSET_ADDRESS,
    MTU7_TIER_OFFSET_ADDRESS,
    MTU8_TIER_OFFSET_ADDRESS,
};

/* MTUx.TCNT offset address */
static const uint32_t tcnt_ofs_addr[BSP_FEATURE_MTU3_MAX_CHANNELS] =
{
    MTU0_TCNT_OFFSET_ADDRESS,
    MTU1_TCNT_OFFSET_ADDRESS,
    MTU2_TCNT_OFFSET_ADDRESS,
    MTU3_TCNT_OFFSET_ADDRESS,
    MTU4_TCNT_OFFSET_ADDRESS,
    MTU5_TCNT_OFFSET_ADDRESS,          /* (Nothing) */
    MTU6_TCNT_OFFSET_ADDRESS,
    MTU7_TCNT_OFFSET_ADDRESS,
    MTU8_TCNT_OFFSET_ADDRESS,
};

/* MTUx.TGRA offset address */
static const uint32_t tgra_ofs_addr[BSP_FEATURE_MTU3_MAX_CHANNELS] =
{
    MTU0_TGRA_OFFSET_ADDRESS,
    MTU1_TGRA_OFFSET_ADDRESS,
    MTU2_TGRA_OFFSET_ADDRESS,
    MTU3_TGRA_OFFSET_ADDRESS,
    MTU4_TGRA_OFFSET_ADDRESS,
    MTU5_TGRA_OFFSET_ADDRESS,          /* (Nothing) */
    MTU6_TGRA_OFFSET_ADDRESS,
    MTU7_TGRA_OFFSET_ADDRESS,
    MTU8_TGRA_OFFSET_ADDRESS,
};

/* MTUx.TGRC offset address */
static const uint32_t tgrc_ofs_addr[BSP_FEATURE_MTU3_MAX_CHANNELS] =
{
    MTU0_TGRC_OFFSET_ADDRESS,
    MTU1_TGRC_OFFSET_ADDRESS,          /* (Nothing) */
    MTU2_TGRC_OFFSET_ADDRESS,          /* (Nothing) */
    MTU3_TGRC_OFFSET_ADDRESS,
    MTU4_TGRC_OFFSET_ADDRESS,
    MTU5_TGRC_OFFSET_ADDRESS,          /* (Nothing) */
    MTU6_TGRC_OFFSET_ADDRESS,
    MTU7_TGRC_OFFSET_ADDRESS,
    MTU8_TGRC_OFFSET_ADDRESS,
};

/* MTUx.TADCR offset address */
static const uint32_t tadcr_ofs_addr[BSP_FEATURE_MTU3_MAX_CHANNELS] =
{
    MTU0_TADCR_OFFSET_ADDRESS,         /* Nothing */
    MTU1_TADCR_OFFSET_ADDRESS,         /* Nothing */
    MTU2_TADCR_OFFSET_ADDRESS,         /* Nothing */
    MTU3_TADCR_OFFSET_ADDRESS,         /* Nothing */
    MTU4_TADCR_OFFSET_ADDRESS,
    MTU5_TADCR_OFFSET_ADDRESS,         /* Nothing */
    MTU6_TADCR_OFFSET_ADDRESS,         /* Nothing */
    MTU7_TADCR_OFFSET_ADDRESS,
    MTU8_TADCR_OFFSET_ADDRESS,         /* Nothing */
};

/* MTU3.TSTR value */
static const uint8_t mtu3_tstr_val[BSP_FEATURE_MTU3_MAX_CHANNELS] =
{
    (1U << R_MTU_TSTRA_CST0_Pos),
    (1U << R_MTU_TSTRA_CST1_Pos),
    (1U << R_MTU_TSTRA_CST2_Pos),
    (1U << R_MTU_TSTRA_CST3_Pos),
    (1U << R_MTU_TSTRA_CST4_Pos),
    0U,
    (1U << R_MTU_TSTRB_CST6_Pos),
    (1U << R_MTU_TSTRB_CST7_Pos),
    (1U << R_MTU_TSTRA_CST8_Pos),
};

/* Look-up table for MTU Clock divider */
static const uint8_t mtu3_clock_lut[BSP_FEATURE_MTU3_MAX_CHANNELS][MTU3_CLK_TPSC_NUM] =
{
    {
    [TIMER_SOURCE_DIV_1]    = 0,       /* MTU ch0 */
    [TIMER_SOURCE_DIV_2]    = 8,
    [TIMER_SOURCE_DIV_4]    = 1,
    [TIMER_SOURCE_DIV_8]    = 16,
    [TIMER_SOURCE_DIV_16]   = 2,
    [TIMER_SOURCE_DIV_32]   = 24,
    [TIMER_SOURCE_DIV_64]   = 3,
    [TIMER_SOURCE_DIV_256]  = 32,
    [TIMER_SOURCE_DIV_1024] = 48,
    },
    {
    [TIMER_SOURCE_DIV_1]    = 0,       /* MTU ch1 */
    [TIMER_SOURCE_DIV_2]    = 8,
    [TIMER_SOURCE_DIV_4]    = 1,
    [TIMER_SOURCE_DIV_8]    = 16,
    [TIMER_SOURCE_DIV_16]   = 2,
    [TIMER_SOURCE_DIV_32]   = 24,
    [TIMER_SOURCE_DIV_64]   = 3,
    [TIMER_SOURCE_DIV_256]  = 6,
    [TIMER_SOURCE_DIV_1024] = 32,
    },
    {
    [TIMER_SOURCE_DIV_1]    = 0,       /* MTU ch2 */
    [TIMER_SOURCE_DIV_2]    = 8,
    [TIMER_SOURCE_DIV_4]    = 1,
    [TIMER_SOURCE_DIV_8]    = 16,
    [TIMER_SOURCE_DIV_16]   = 2,
    [TIMER_SOURCE_DIV_32]   = 24,
    [TIMER_SOURCE_DIV_64]   = 3,
    [TIMER_SOURCE_DIV_256]  = 32,
    [TIMER_SOURCE_DIV_1024] = 7,
    },
    {
    [TIMER_SOURCE_DIV_1]    = 0,       /* MTU ch3 */
    [TIMER_SOURCE_DIV_2]    = 8,
    [TIMER_SOURCE_DIV_4]    = 1,
    [TIMER_SOURCE_DIV_8]    = 16,
    [TIMER_SOURCE_DIV_16]   = 2,
    [TIMER_SOURCE_DIV_32]   = 24,
    [TIMER_SOURCE_DIV_64]   = 3,
    [TIMER_SOURCE_DIV_256]  = 4,
    [TIMER_SOURCE_DIV_1024] = 5,
    },
    {
    [TIMER_SOURCE_DIV_1]    = 0,       /* MTU ch4 */
    [TIMER_SOURCE_DIV_2]    = 8,
    [TIMER_SOURCE_DIV_4]    = 1,
    [TIMER_SOURCE_DIV_8]    = 16,
    [TIMER_SOURCE_DIV_16]   = 2,
    [TIMER_SOURCE_DIV_32]   = 24,
    [TIMER_SOURCE_DIV_64]   = 3,
    [TIMER_SOURCE_DIV_256]  = 4,
    [TIMER_SOURCE_DIV_1024] = 5,
    },
    {
    [TIMER_SOURCE_DIV_1]    = 0,       /* MTU ch5 */
    [TIMER_SOURCE_DIV_2]    = 8,
    [TIMER_SOURCE_DIV_4]    = 1,
    [TIMER_SOURCE_DIV_8]    = 16,
    [TIMER_SOURCE_DIV_16]   = 2,
    [TIMER_SOURCE_DIV_32]   = 12,
    [TIMER_SOURCE_DIV_64]   = 3,
    [TIMER_SOURCE_DIV_256]  = 16,
    [TIMER_SOURCE_DIV_1024] = 20,
    },
    {
    [TIMER_SOURCE_DIV_1]    = 0,       /* MTU ch6 */
    [TIMER_SOURCE_DIV_2]    = 8,
    [TIMER_SOURCE_DIV_4]    = 1,
    [TIMER_SOURCE_DIV_8]    = 16,
    [TIMER_SOURCE_DIV_16]   = 2,
    [TIMER_SOURCE_DIV_32]   = 24,
    [TIMER_SOURCE_DIV_64]   = 3,
    [TIMER_SOURCE_DIV_256]  = 4,
    [TIMER_SOURCE_DIV_1024] = 5,
    },
    {
    [TIMER_SOURCE_DIV_1]    = 0,       /* MTU ch7 */
    [TIMER_SOURCE_DIV_2]    = 8,
    [TIMER_SOURCE_DIV_4]    = 1,
    [TIMER_SOURCE_DIV_8]    = 16,
    [TIMER_SOURCE_DIV_16]   = 2,
    [TIMER_SOURCE_DIV_32]   = 24,
    [TIMER_SOURCE_DIV_64]   = 3,
    [TIMER_SOURCE_DIV_256]  = 4,
    [TIMER_SOURCE_DIV_1024] = 5,
    },
    {
    [TIMER_SOURCE_DIV_1]    = 0,       /* MTU ch8 */
    [TIMER_SOURCE_DIV_2]    = 8,
    [TIMER_SOURCE_DIV_4]    = 1,
    [TIMER_SOURCE_DIV_8]    = 16,
    [TIMER_SOURCE_DIV_16]   = 2,
    [TIMER_SOURCE_DIV_32]   = 24,
    [TIMER_SOURCE_DIV_64]   = 3,
    [TIMER_SOURCE_DIV_256]  = 4,
    [TIMER_SOURCE_DIV_1024] = 5,
    },
};

/***********************************************************************************************************************
 * Global Variables
 **********************************************************************************************************************/

/* MTU3 implementation of timer interface  */
const timer_api_t g_timer_on_mtu3 =
{
    .open            = R_MTU3_Open,
    .stop            = R_MTU3_Stop,
    .start           = R_MTU3_Start,
    .reset           = R_MTU3_Reset,
    .enable          = R_MTU3_Enable,
    .disable         = R_MTU3_Disable,
    .periodSet       = R_MTU3_PeriodSet,
    .dutyCycleSet    = R_MTU3_DutyCycleSet,
    .compareMatchSet = R_MTU3_CompareMatchSet,
    .infoGet         = R_MTU3_InfoGet,
    .statusGet       = R_MTU3_StatusGet,
    .callbackSet     = R_MTU3_CallbackSet,
    .close           = R_MTU3_Close
};

/*******************************************************************************************************************//**
 * @addtogroup MTU3
 * @{
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Functions
 **********************************************************************************************************************/

/*******************************************************************************************************************//**
 * Initializes the timer module and applies configurations. Implements @ref timer_api_t::open.
 *
 * The MTU3 implementation of the general timer can accept a mtu3_extended_cfg_t extension parameter.
 *
 * Example:
 * @snippet r_mtu3_example.c R_MTU3_Open
 *
 * @retval FSP_SUCCESS                    Initialization was successful and timer has started.
 * @retval FSP_ERR_ASSERTION              A required input pointer is NULL or the source divider is invalid.
 * @retval FSP_ERR_ALREADY_OPEN           Module is already open.
 * @retval FSP_ERR_IRQ_BSP_DISABLED       timer_cfg_t::mode is ::TIMER_MODE_ONE_SHOT or timer_cfg_t::p_callback is not
 *                                        NULL, but ISR is not enabled.  ISR must be enabled to use one-shot mode or
 *                                        callback.
 * @retval FSP_ERR_INVALID_MODE           Only PERIODIC and PWM are supported.
 * @retval FSP_ERR_IP_CHANNEL_NOT_PRESENT The channel requested in the p_cfg parameter is not available on this device.
 **********************************************************************************************************************/
fsp_err_t R_MTU3_Open (timer_ctrl_t * const p_ctrl, timer_cfg_t const * const p_cfg)
{
    mtu3_instance_ctrl_t * p_instance_ctrl = (mtu3_instance_ctrl_t *) p_ctrl;

#if MTU3_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(NULL != p_cfg);
    FSP_ASSERT(NULL != p_cfg->p_extend);
    FSP_ASSERT(NULL != p_instance_ctrl);

#if (2U == BSP_FEATURE_MTU3_CLOCK_DIVIDER_STEP_SIZE)
 #if (BSP_FEATURE_MTU3_CLOCK_DIVIDER_VALUE_7_9_VALID)
   FSP_ASSERT(p_cfg->source_div <= 10U);
 #else
   FSP_ASSERT((p_cfg->source_div != 7U) && (p_cfg->source_div != 9U) && (p_cfg->source_div <= 10U));
 #endif
#else
   FSP_ASSERT((0U == (p_cfg->source_div % 2U)) && (p_cfg->source_div <= 10U));
#endif

    FSP_ERROR_RETURN(p_cfg->mode <= TIMER_MODE_PWM, FSP_ERR_INVALID_MODE);
    FSP_ERROR_RETURN(MTU3_OPEN != p_instance_ctrl->open, FSP_ERR_ALREADY_OPEN);
    FSP_ERROR_RETURN((1U << p_cfg->channel) & BSP_FEATURE_MTU3_VALID_CHANNEL_MASK, FSP_ERR_IP_CHANNEL_NOT_PRESENT);
    mtu3_extended_cfg_t * p_extend = (mtu3_extended_cfg_t *) p_cfg->p_extend;
    FSP_ASSERT(NULL != p_extend->p_reg);
    if ((p_cfg->p_callback) || (TIMER_MODE_ONE_SHOT == p_cfg->mode))
    {
        FSP_ERROR_RETURN(((p_extend->capture_a_irq >= 0) || (p_extend->capture_b_irq >= 0) || (p_cfg->cycle_end_irq >= 0)), FSP_ERR_IRQ_BSP_DISABLED);
    }

#endif

    /* Initialize control structure based on configurations. */
    mtu3_common_open(p_instance_ctrl, p_cfg);

    mtu3_hardware_initialize(p_instance_ctrl, p_cfg);

    p_instance_ctrl->open = MTU3_OPEN;

    return FSP_SUCCESS;
}

/*******************************************************************************************************************//**
 * Stops timer. Implements @ref timer_api_t::stop.
 *
 * Example:
 * @snippet r_mtu3_example.c R_MTU3_Stop
 *
 * @retval FSP_SUCCESS                 Timer successfully stopped.
 * @retval FSP_ERR_ASSERTION           p_ctrl was NULL.
 * @retval FSP_ERR_NOT_OPEN            The instance is not opened.
 **********************************************************************************************************************/
fsp_err_t R_MTU3_Stop (timer_ctrl_t * const p_ctrl)
{
    mtu3_instance_ctrl_t * p_instance_ctrl = (mtu3_instance_ctrl_t *) p_ctrl;
#if MTU3_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(NULL != p_instance_ctrl);
    FSP_ERROR_RETURN(MTU3_OPEN == p_instance_ctrl->open, FSP_ERR_NOT_OPEN);
#endif

    mtu3_extended_cfg_t * p_extend = (mtu3_extended_cfg_t *) p_instance_ctrl->p_cfg->p_extend;

    /* Stop timer */
    mtu3_stop_timer(p_instance_ctrl);

    /*Set the output level to stop_level */
    if (!(p_extend->custom_waveform_enabled) && !(p_extend->mtioc_ctrl_setting.retain_level))
    {
        *((uint8_t *) p_instance_ctrl->p_reg +
          tior_ofs_addr[p_instance_ctrl->p_cfg->channel]) =
            ((uint8_t) (p_instance_ctrl->tior_iob << R_MTU_TIORH_IOB_Pos) | p_instance_ctrl->tior_ioa);
    }

    return FSP_SUCCESS;
}

/*******************************************************************************************************************//**
 * Starts timer. Implements @ref timer_api_t::start.
 *
 * Example:
 * @snippet r_mtu3_example.c R_MTU3_Start
 *
 * @retval FSP_SUCCESS                 Timer successfully started.
 * @retval FSP_ERR_ASSERTION           p_ctrl was NULL.
 * @retval FSP_ERR_NOT_OPEN            The instance is not opened.
 **********************************************************************************************************************/
fsp_err_t R_MTU3_Start (timer_ctrl_t * const p_ctrl)
{
    mtu3_instance_ctrl_t * p_instance_ctrl = (mtu3_instance_ctrl_t *) p_ctrl;
#if MTU3_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(NULL != p_instance_ctrl);
    FSP_ERROR_RETURN(MTU3_OPEN == p_instance_ctrl->open, FSP_ERR_NOT_OPEN);
#endif

    mtu3_extended_cfg_t * p_extend = (mtu3_extended_cfg_t *) p_instance_ctrl->p_cfg->p_extend;

    if (!(p_extend->custom_waveform_enabled) && (TIMER_MODE_PWM == p_instance_ctrl->p_cfg->mode))
    {
        /* Setting for specifying the high level duty ratio. */
        if (MTU3_PIN_LEVEL_HIGH == p_extend->mtioc_ctrl_setting.initial_level)
        {
            if (MTU3_TCNT_CLEAR_TGRA == p_extend->mtu3_clear)
            {
                *((uint8_t *) p_instance_ctrl->p_reg +
                  tior_ofs_addr[p_instance_ctrl->p_cfg->channel]) =
                    ((uint8_t) (MTU3_IO_PIN_LEVEL_INITIAL_HIGH_COMPARE_LOW << R_MTU_TIORH_IOB_Pos) |
                     MTU3_IO_PIN_LEVEL_INITIAL_HIGH_COMPARE_HIGH);
            }
            else
            {
                *((uint8_t *) p_instance_ctrl->p_reg +
                  tior_ofs_addr[p_instance_ctrl->p_cfg->channel]) =
                    ((uint8_t) (MTU3_IO_PIN_LEVEL_INITIAL_HIGH_COMPARE_HIGH << R_MTU_TIORH_IOB_Pos) |
                     MTU3_IO_PIN_LEVEL_INITIAL_HIGH_COMPARE_LOW);
            }
        }
        /* Setting for specifying the low level duty ratio. */
        else
        {
            if (MTU3_TCNT_CLEAR_TGRA == p_extend->mtu3_clear)
            {
                *((uint8_t *) p_instance_ctrl->p_reg +
                  tior_ofs_addr[p_instance_ctrl->p_cfg->channel]) =
                    ((uint8_t) (MTU3_IO_PIN_LEVEL_INITIAL_LOW_COMPARE_HIGH << R_MTU_TIORH_IOB_Pos) |
                     MTU3_IO_PIN_LEVEL_INITIAL_LOW_COMPARE_LOW);
            }
            else
            {
                *((uint8_t *) p_instance_ctrl->p_reg +
                  tior_ofs_addr[p_instance_ctrl->p_cfg->channel]) =
                    ((uint8_t) (MTU3_IO_PIN_LEVEL_INITIAL_LOW_COMPARE_LOW << R_MTU_TIORH_IOB_Pos) |
                     MTU3_IO_PIN_LEVEL_INITIAL_LOW_COMPARE_HIGH);
            }
        }
    }
    /* Write 1 to TGR, which is not a buffer register.
       This setting is required when resuming using only the start function. */
    if (TIMER_MODE_ONE_SHOT == p_instance_ctrl->p_cfg->mode)
    {
        p_instance_ctrl->oneshot_interrupt_flag = false;
        /* MTU ch8 should be written in 32-bit length */
        if (MTU3_CHANNEL_8 == p_instance_ctrl->p_cfg->channel)
        {
            if (MTU3_TCNT_CLEAR_TGRA == p_extend->mtu3_clear)
            {
                *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                               tgra_ofs_addr[p_instance_ctrl->p_cfg->channel]) = 1U;
            }
            else
            {
                *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                               MTU3_TGRB_D_OFFSET_LONG) = 1U;
            }
        }
        else
        {
            if (MTU3_TCNT_CLEAR_TGRA == p_extend->mtu3_clear)
            {
                *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                               tgra_ofs_addr[p_instance_ctrl->p_cfg->channel]) = 1U;
            }
            else
            {
                *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                               MTU3_TGRB_D_OFFSET_WORD) = 1U;
            }
        }
    }

    /* Start timer */
    if ((MTU3_CHANNEL_6 == p_instance_ctrl->p_cfg->channel) || (MTU3_CHANNEL_7 == p_instance_ctrl->p_cfg->channel))
    {
        p_instance_ctrl->p_reg_com->TSTRB |= mtu3_tstr_val[p_instance_ctrl->p_cfg->channel];
    }
    /* Start timer for counting mode */
    else if ((MTU3_PHASE_COUNTING_MODE_NONE != p_extend->counting_mode) &&
             (MTU3_BIT_MODE_NORMAL_32BIT == p_extend->bit_mode))
    {
        p_instance_ctrl->p_reg_com->TSTRA |= (R_MTU_TSTRA_CST1_Msk | R_MTU_TSTRA_CST2_Msk);
    }
    else
    {
        p_instance_ctrl->p_reg_com->TSTRA |= mtu3_tstr_val[p_instance_ctrl->p_cfg->channel];
    }

    return FSP_SUCCESS;
}

/*******************************************************************************************************************//**
 * Resets the counter value to 0. Implements @ref timer_api_t::reset.
 *
 * @note This function also updates to the new period if no counter overflow has occurred since the last call to
 * R_MTU3_PeriodSet().
 *
 * @retval FSP_SUCCESS                 Counter value written successfully.
 * @retval FSP_ERR_ASSERTION           p_ctrl was NULL.
 * @retval FSP_ERR_NOT_OPEN            The instance is not opened.
 **********************************************************************************************************************/
fsp_err_t R_MTU3_Reset (timer_ctrl_t * const p_ctrl)
{
    mtu3_instance_ctrl_t * p_instance_ctrl = (mtu3_instance_ctrl_t *) p_ctrl;
#if MTU3_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(NULL != p_instance_ctrl);
    FSP_ERROR_RETURN(MTU3_OPEN == p_instance_ctrl->open, FSP_ERR_NOT_OPEN);
#endif

    mtu3_set_count(p_instance_ctrl, 0U);

    return FSP_SUCCESS;
}

/*******************************************************************************************************************//**
 * Sets period value provided. If the timer is running, the period will be updated after the next compare match.
 * If the timer is stopped, this function resets the counter and updates the period.
 * Implements @ref timer_api_t::periodSet.
 *
 * Example:
 * @snippet r_mtu3_example.c R_MTU3_PeriodSet
 *
 * @retval FSP_SUCCESS                 Period value written successfully.
 * @retval FSP_ERR_ASSERTION           A required pointer was NULL, or the period was not in the valid range of
 *                                     1 to 0xFFFF.
 * @retval FSP_ERR_NOT_OPEN            The instance is not opened.
 **********************************************************************************************************************/
fsp_err_t R_MTU3_PeriodSet (timer_ctrl_t * const p_ctrl, uint32_t const period_counts)
{
    mtu3_instance_ctrl_t * p_instance_ctrl = (mtu3_instance_ctrl_t *) p_ctrl;

#if MTU3_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(NULL != p_instance_ctrl);
    FSP_ASSERT(0U != period_counts);
    FSP_ASSERT(period_counts <= MTU3_MAX_COUNT);
    FSP_ERROR_RETURN(MTU3_OPEN == p_instance_ctrl->open, FSP_ERR_NOT_OPEN);
#endif

    mtu3_extended_cfg_t * p_extend = (mtu3_extended_cfg_t *) p_instance_ctrl->p_cfg->p_extend;

    /* Update period buffer register. The actual period is one cycle longer than the register value.
     * Reference section "Note on Cycle Setting" */
    uint32_t new_period_counts = period_counts - 1U;

    /* If the counter is not counting, update period register, buffer register and reset counter. */
    if (0U == mtu3_get_tstr(p_instance_ctrl))
    {
        if (MTU3_CHANNEL_8 == p_instance_ctrl->p_cfg->channel)
        {
            if (MTU3_TCNT_CLEAR_TGRA == p_extend->mtu3_clear)
            {
                *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                               tgra_ofs_addr[p_instance_ctrl->p_cfg->channel]) = new_period_counts;
                *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                               tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel]) = new_period_counts;
            }
            else if (MTU3_TCNT_CLEAR_TGRB == p_extend->mtu3_clear)
            {
                *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                               MTU3_TGRB_D_OFFSET_LONG) = new_period_counts;
                *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                               MTU3_TGRB_D_OFFSET_LONG) = new_period_counts;
            }
            else
            {
                /* Do nothing. */
            }
        }
        else
        {
            if (MTU3_TCNT_CLEAR_TGRA == p_extend->mtu3_clear)
            {
                *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                               tgra_ofs_addr[p_instance_ctrl->p_cfg->channel]) = (uint16_t) new_period_counts;
                if ((MTU3_CHANNEL_1 != p_instance_ctrl->p_cfg->channel) &&
                    (MTU3_CHANNEL_2 != p_instance_ctrl->p_cfg->channel))
                {
                    *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                   tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel]) = (uint16_t) new_period_counts;
                }
            }
            else if (MTU3_TCNT_CLEAR_TGRB == p_extend->mtu3_clear)
            {
                *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                               MTU3_TGRB_D_OFFSET_WORD) = (uint16_t) new_period_counts;
                if ((MTU3_CHANNEL_1 != p_instance_ctrl->p_cfg->channel) &&
                    (MTU3_CHANNEL_2 != p_instance_ctrl->p_cfg->channel))
                {
                    *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                                   MTU3_TGRB_D_OFFSET_WORD) = (uint16_t) new_period_counts;
                }
            }
            else
            {
                /* Do nothing. */
            }
        }

        mtu3_set_count(p_instance_ctrl, 0U);
    }
    /* If the counter is counting, update buffer register counter. */
    else
    {
        if (MTU3_CHANNEL_8 == p_instance_ctrl->p_cfg->channel)
        {
            if (MTU3_TCNT_CLEAR_TGRA == p_extend->mtu3_clear)
            {
                *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                               tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel]) = new_period_counts;
            }
            else if (MTU3_TCNT_CLEAR_TGRB == p_extend->mtu3_clear)
            {
                *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                               MTU3_TGRB_D_OFFSET_LONG) = new_period_counts;
            }
            else
            {
                /* Do nothing. */
            }
        }
        else if ((MTU3_CHANNEL_1 == p_instance_ctrl->p_cfg->channel) ||
                 (MTU3_CHANNEL_2 == p_instance_ctrl->p_cfg->channel))
        {
            /* MTU1 and 2 without TGRC and TGRD should write TGRA and TGRB */
            if (MTU3_TCNT_CLEAR_TGRA == p_extend->mtu3_clear)
            {
                *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                               tgra_ofs_addr[p_instance_ctrl->p_cfg->channel]) = (uint16_t) new_period_counts;
            }
            else if (MTU3_TCNT_CLEAR_TGRB == p_extend->mtu3_clear)
            {
                *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                               MTU3_TGRB_D_OFFSET_WORD) = (uint16_t) new_period_counts;
            }
            else
            {
                /* Do nothing. */
            }
        }
        else
        {
            if (MTU3_TCNT_CLEAR_TGRA == p_extend->mtu3_clear)
            {
                *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                               tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel]) = (uint16_t) new_period_counts;
            }
            else if (MTU3_TCNT_CLEAR_TGRB == p_extend->mtu3_clear)
            {
                *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                               MTU3_TGRB_D_OFFSET_WORD) = (uint16_t) new_period_counts;
            }
            else
            {
                /* Do nothing. */
            }
        }
    }

    return FSP_SUCCESS;
}

/*******************************************************************************************************************//**
 * Sets duty cycle. Implements @ref timer_api_t::dutyCycleSet.
 *
 * Duty cycle is updated in the TGRx register.
 *
 *
 * @param[in] p_ctrl                   Pointer to instance control block.
 * @param[in] duty_cycle_counts        Duty cycle to set in counts.
 *                                     When the initial output setting of the period register is LOW,
 *                                     entering a value greater than the period register will result in a 0% duty cycle.
 * @param[in] pin                      Not Used.
 *
 * @retval FSP_SUCCESS                 Duty cycle updated successfully.
 * @retval FSP_ERR_ASSERTION           A required pointer was NULL, or the period was not in the valid range of
 *                                     1 to 0xFFFF.
 * @retval FSP_ERR_NOT_OPEN            The instance is not opened.
 * @retval FSP_ERR_INVALID_ARGUMENT    Duty cycle is larger than period.
 * @retval FSP_ERR_UNSUPPORTED         MTU3_CFG_OUTPUT_SUPPORT_ENABLE is 0.
 **********************************************************************************************************************/
fsp_err_t R_MTU3_DutyCycleSet (timer_ctrl_t * const p_ctrl, uint32_t const duty_cycle_counts, uint32_t const pin)
{
#if MTU3_CFG_OUTPUT_SUPPORT_ENABLE
    FSP_PARAMETER_NOT_USED(pin);
    mtu3_instance_ctrl_t * p_instance_ctrl = (mtu3_instance_ctrl_t *) p_ctrl;

 #if MTU3_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(NULL != p_instance_ctrl);
    FSP_ASSERT(0U != duty_cycle_counts);
    FSP_ERROR_RETURN(MTU3_OPEN == p_instance_ctrl->open, FSP_ERR_NOT_OPEN);

    mtu3_extended_cfg_t * p_extend = (mtu3_extended_cfg_t *) p_instance_ctrl->p_cfg->p_extend;
    if (MTU3_CHANNEL_8 == p_instance_ctrl->p_cfg->channel)
    {
        if (MTU3_TCNT_CLEAR_TGRA == p_extend->mtu3_clear)
        {
            FSP_ERROR_RETURN(duty_cycle_counts <= (*(uint32_t *)((uint8_t *) p_instance_ctrl->p_reg +
                    tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel])), FSP_ERR_INVALID_ARGUMENT);
        }
        else
        {
            FSP_ERROR_RETURN(duty_cycle_counts <= (*(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                    MTU3_TGRB_D_OFFSET_WORD)), FSP_ERR_INVALID_ARGUMENT);
        }
    }
    else if ((MTU3_CHANNEL_1 == p_instance_ctrl->p_cfg->channel) || (MTU3_CHANNEL_2 == p_instance_ctrl->p_cfg->channel))
    {
        if (MTU3_TCNT_CLEAR_TGRA == p_extend->mtu3_clear)
        {
            FSP_ERROR_RETURN(duty_cycle_counts <= (*(uint16_t *)((uint8_t *) p_instance_ctrl->p_reg +
                    tgra_ofs_addr[p_instance_ctrl->p_cfg->channel])), FSP_ERR_INVALID_ARGUMENT);
        }
        else
        {
            FSP_ERROR_RETURN(duty_cycle_counts <= (*(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                    MTU3_TGRB_D_OFFSET_WORD)), FSP_ERR_INVALID_ARGUMENT);
        }        
    }
    else
    {
        if (MTU3_TCNT_CLEAR_TGRA == p_extend->mtu3_clear)
        {
            FSP_ERROR_RETURN(duty_cycle_counts <= (*(uint16_t *)((uint8_t *) p_instance_ctrl->p_reg +
                    tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel])), FSP_ERR_INVALID_ARGUMENT);
        }
        else
        {
            FSP_ERROR_RETURN(duty_cycle_counts <= (*(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                    MTU3_TGRB_D_OFFSET_WORD)), FSP_ERR_INVALID_ARGUMENT);
        }
    }
 #else
    mtu3_extended_cfg_t * p_extend = (mtu3_extended_cfg_t *) p_instance_ctrl->p_cfg->p_extend;
 #endif

    /* Update duty cycle. */
    uint32_t new_duty_cycle_counts = duty_cycle_counts - 1U;

    /* If the counter is not counting, update duty cycle and reset counter. */
    if (0U == mtu3_get_tstr(p_instance_ctrl))
    {
        if (MTU3_CHANNEL_8 == p_instance_ctrl->p_cfg->channel)
        {
            if (MTU3_TCNT_CLEAR_TGRA == p_extend->mtu3_clear)
            {
                *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                               MTU3_TGRB_D_OFFSET_LONG) = new_duty_cycle_counts;
                *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                               MTU3_TGRB_D_OFFSET_LONG) = new_duty_cycle_counts;
            }
            else if (MTU3_TCNT_CLEAR_TGRB == p_extend->mtu3_clear)
            {
                *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                               tgra_ofs_addr[p_instance_ctrl->p_cfg->channel]) = new_duty_cycle_counts;
                *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                               tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel]) = new_duty_cycle_counts;
            }
            else
            {
                /* Do nothing. */
            }
        }
        else
        {
            if (MTU3_TCNT_CLEAR_TGRA == p_extend->mtu3_clear)
            {
                *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                               MTU3_TGRB_D_OFFSET_WORD) = (uint16_t) new_duty_cycle_counts;

                if ((MTU3_CHANNEL_1 != p_instance_ctrl->p_cfg->channel) &&
                    (MTU3_CHANNEL_2 != p_instance_ctrl->p_cfg->channel))
                {
                    *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                                   MTU3_TGRB_D_OFFSET_WORD) = (uint16_t) new_duty_cycle_counts;
                }
            }
            else if (MTU3_TCNT_CLEAR_TGRB == p_extend->mtu3_clear)
            {
                *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                               tgra_ofs_addr[p_instance_ctrl->p_cfg->channel]) = (uint16_t) new_duty_cycle_counts;

                if ((MTU3_CHANNEL_1 != p_instance_ctrl->p_cfg->channel) &&
                    (MTU3_CHANNEL_2 != p_instance_ctrl->p_cfg->channel))
                {
                    *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                   tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel]) = (uint16_t) new_duty_cycle_counts;
                }
            }
            else
            {
                /* Do nothing. */
            }
        }

        mtu3_set_count(p_instance_ctrl, 0U);
    }
    /* If the counter is counting, update buffer register counter. */
    else
    {
        if (MTU3_CHANNEL_8 == p_instance_ctrl->p_cfg->channel)
        {
            if (MTU3_TCNT_CLEAR_TGRA == p_extend->mtu3_clear)
            {
                *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                               MTU3_TGRB_D_OFFSET_LONG) = new_duty_cycle_counts;
            }
            else if (MTU3_TCNT_CLEAR_TGRB == p_extend->mtu3_clear)
            {
                *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                               tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel]) = new_duty_cycle_counts;
            }
            else
            {
                /* Do nothing. */
            }
        }
        else if ((MTU3_CHANNEL_1 == p_instance_ctrl->p_cfg->channel) ||
                 (MTU3_CHANNEL_2 == p_instance_ctrl->p_cfg->channel))
        {
            /* MTU1 and 2 without TGRC and TGRD should write TGRA and TGRB */
            if (MTU3_TCNT_CLEAR_TGRA == p_extend->mtu3_clear)
            {
                *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                               MTU3_TGRB_D_OFFSET_WORD) = (uint16_t) new_duty_cycle_counts;
            }
            else if (MTU3_TCNT_CLEAR_TGRB == p_extend->mtu3_clear)
            {
                *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                               tgra_ofs_addr[p_instance_ctrl->p_cfg->channel]) = (uint16_t) new_duty_cycle_counts;
            }
            else
            {
                /* Do nothing. */
            }
        }
        else
        {
            if (MTU3_TCNT_CLEAR_TGRA == p_extend->mtu3_clear)
            {
                *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                               MTU3_TGRB_D_OFFSET_WORD) = (uint16_t) new_duty_cycle_counts;
            }
            else if (MTU3_TCNT_CLEAR_TGRB == p_extend->mtu3_clear)
            {
                *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                               tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel]) = (uint16_t) new_duty_cycle_counts;
            }
            else
            {
                /* Do nothing. */
            }
        }
    }

    return FSP_SUCCESS;
#else
    FSP_PARAMETER_NOT_USED(p_ctrl);
    FSP_PARAMETER_NOT_USED(duty_cycle_counts);
    FSP_PARAMETER_NOT_USED(pin);

    FSP_RETURN(FSP_ERR_UNSUPPORTED);
#endif
}

/*******************************************************************************************************************//**
 * Set value for compare match feature. Implements @ref timer_api_t::compareMatchSet.
 *
 * @note This API should be used when timer is stop counting. And shall not be used along with PWM operation.
 *
 * Example:
 * @snippet r_mtu3_example.c R_MTU3_CompareMatchSet
 *
 * @retval FSP_SUCCESS              Set the compare match value successfully.
 * @retval FSP_ERR_ASSERTION        p_ctrl was NULL.
 * @retval FSP_ERR_NOT_OPEN         The instance is not opened.
 **********************************************************************************************************************/
fsp_err_t R_MTU3_CompareMatchSet (timer_ctrl_t * const        p_ctrl,
                                  uint32_t const              compare_match_value,
                                  timer_compare_match_t const match_channel)
{
    mtu3_instance_ctrl_t * p_instance_ctrl = (mtu3_instance_ctrl_t *) p_ctrl;

#if MTU3_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(NULL != p_instance_ctrl);
    FSP_ASSERT(0U != compare_match_value);
    FSP_ASSERT(compare_match_value <= MTU3_MAX_COUNT);
    FSP_ERROR_RETURN(MTU3_OPEN == p_instance_ctrl->open, FSP_ERR_NOT_OPEN);
#endif

    /* Update compare match register. The actual period is one cycle longer than the register value.
     * Reference section "Note on Cycle Setting" */
    uint32_t new_compare_match_value = compare_match_value - 1U;

    /* If the counter is not counting, update compare match register. */
    if (0U == mtu3_get_tstr(p_instance_ctrl))
    {
        if (MTU3_CHANNEL_8 == p_instance_ctrl->p_cfg->channel)
        {
            if (TIMER_COMPARE_MATCH_A == match_channel)
            {
                *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                               tgra_ofs_addr[p_instance_ctrl->p_cfg->channel]) = new_compare_match_value;
                *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                               tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel]) = new_compare_match_value;
            }

            if (TIMER_COMPARE_MATCH_B == match_channel)
            {
                *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                               MTU3_TGRB_D_OFFSET_LONG) = new_compare_match_value;
                *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                               MTU3_TGRB_D_OFFSET_LONG) = new_compare_match_value;
            }
            else
            {
                /* Do nothing. */
            }
        }
        else
        {
            if (TIMER_COMPARE_MATCH_A == match_channel)
            {
                *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                               tgra_ofs_addr[p_instance_ctrl->p_cfg->channel]) = (uint16_t) new_compare_match_value;

                if ((MTU3_CHANNEL_1 != p_instance_ctrl->p_cfg->channel) &&
                    (MTU3_CHANNEL_2 != p_instance_ctrl->p_cfg->channel))
                {
                    *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                   tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel]) = (uint16_t) new_compare_match_value;
                }
            }

            if (TIMER_COMPARE_MATCH_B == match_channel)
            {
                *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                               MTU3_TGRB_D_OFFSET_WORD) = (uint16_t) new_compare_match_value;

                if ((MTU3_CHANNEL_1 != p_instance_ctrl->p_cfg->channel) &&
                    (MTU3_CHANNEL_2 != p_instance_ctrl->p_cfg->channel))
                {
                    *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                                   MTU3_TGRB_D_OFFSET_WORD) = (uint16_t) new_compare_match_value;
                }
            }
            else
            {
                /* Do nothing. */
            }
        }
    }
    /* If the counter is counting, update buffer register counter. */
    else
    {
        if (MTU3_CHANNEL_8 == p_instance_ctrl->p_cfg->channel)
        {
            if (TIMER_COMPARE_MATCH_A == match_channel)
            {
                *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                               tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel]) = new_compare_match_value;
            }
            else if (TIMER_COMPARE_MATCH_B == match_channel)
            {
                *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                               MTU3_TGRB_D_OFFSET_LONG) = new_compare_match_value;
            }
            else
            {
                /* Do nothing. */
            }
        }
        else if ((MTU3_CHANNEL_1 == p_instance_ctrl->p_cfg->channel) ||
                 (MTU3_CHANNEL_2 == p_instance_ctrl->p_cfg->channel))
        {
            /* MTU1 and 2 without TGRC and TGRD should write TGRA and TGRB */
            if (TIMER_COMPARE_MATCH_A == match_channel)
            {
                *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                               tgra_ofs_addr[p_instance_ctrl->p_cfg->channel]) = (uint16_t) new_compare_match_value;
            }
            else if (TIMER_COMPARE_MATCH_B == match_channel)
            {
                *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                               MTU3_TGRB_D_OFFSET_WORD) = (uint16_t) new_compare_match_value;
            }
            else
            {
                /* Do nothing. */
            }
        }
        else
        {
            if (TIMER_COMPARE_MATCH_A == match_channel)
            {
                *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                               tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel]) = (uint16_t) new_compare_match_value;
            }
            else if (TIMER_COMPARE_MATCH_B == match_channel)
            {
                *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                               MTU3_TGRB_D_OFFSET_WORD) = (uint16_t) new_compare_match_value;
            }
            else
            {
                /* Do nothing. */
            }
        }
    }

    return FSP_SUCCESS;
}

/*******************************************************************************************************************//**
 * Get timer information and store it in provided pointer p_info. Implements @ref timer_api_t::infoGet.
 *
 * @retval FSP_SUCCESS                 TGRx, count direction, frequency, structure successfully.
 * @retval FSP_ERR_ASSERTION           p_ctrl or p_info was NULL.
 * @retval FSP_ERR_NOT_OPEN            The instance is not opened.
 **********************************************************************************************************************/
fsp_err_t R_MTU3_InfoGet (timer_ctrl_t * const p_ctrl, timer_info_t * const p_info)
{
    mtu3_instance_ctrl_t * p_instance_ctrl = (mtu3_instance_ctrl_t *) p_ctrl;

#if MTU3_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(NULL != p_instance_ctrl);
    FSP_ASSERT(NULL != p_info);
    FSP_ERROR_RETURN(MTU3_OPEN == p_instance_ctrl->open, FSP_ERR_NOT_OPEN);
#endif

    mtu3_extended_cfg_t * p_extend = (mtu3_extended_cfg_t *) p_instance_ctrl->p_cfg->p_extend;

    /* Get tgrx value */
    if (MTU3_CHANNEL_8 == p_instance_ctrl->p_cfg->channel)
    {
        if (MTU3_TCNT_CLEAR_TGRA == p_extend->mtu3_clear)
        {
            p_info->period_counts =
                *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_instance_ctrl->p_cfg->channel]);
        }
        else if (MTU3_TCNT_CLEAR_TGRB == p_extend->mtu3_clear)
        {
            p_info->period_counts =
                *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                               MTU3_TGRB_D_OFFSET_LONG);
        }
        else
        {
            /* Do nothing. */
        }
    }
    else
    {
        if (MTU3_TCNT_CLEAR_TGRA == p_extend->mtu3_clear)
        {
            p_info->period_counts =
                *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_instance_ctrl->p_cfg->channel]);
        }
        else if (MTU3_TCNT_CLEAR_TGRB == p_extend->mtu3_clear)
        {
            p_info->period_counts =
                *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                               MTU3_TGRB_D_OFFSET_WORD);
        }
        else
        {
            /* Do nothing. */
        }
    }

    /* Get and store clock frequency */
    p_info->clock_frequency = mtu3_clock_frequency_get(p_instance_ctrl, 0U);

    /* Get and store clock counting direction. Read count direction setting */
    p_info->count_direction = TIMER_DIRECTION_UP;

    return FSP_SUCCESS;
}

/*******************************************************************************************************************//**
 * Get current timer status and store it in provided pointer p_status. Implements @ref timer_api_t::statusGet.
 *
 * Example:
 * @snippet r_mtu3_example.c R_MTU3_StatusGet
 *
 * @retval FSP_SUCCESS                 Current timer state and counter value set successfully.
 * @retval FSP_ERR_ASSERTION           p_ctrl or p_status was NULL.
 * @retval FSP_ERR_NOT_OPEN            The instance is not opened.
 **********************************************************************************************************************/
fsp_err_t R_MTU3_StatusGet (timer_ctrl_t * const p_ctrl, timer_status_t * const p_status)
{
    mtu3_instance_ctrl_t * p_instance_ctrl = (mtu3_instance_ctrl_t *) p_ctrl;
#if MTU3_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(NULL != p_instance_ctrl);
    FSP_ASSERT(NULL != p_status);
    FSP_ERROR_RETURN(MTU3_OPEN == p_instance_ctrl->open, FSP_ERR_NOT_OPEN);
#endif

    /* Get counter state. */
    if (0U == mtu3_get_tstr(p_instance_ctrl))
    {
        p_status->state = TIMER_STATE_STOPPED;
    }
    else
    {
        p_status->state = TIMER_STATE_COUNTING;
    }

    /* Get counter value */
    if (MTU3_CHANNEL_8 == p_instance_ctrl->p_cfg->channel)
    {
        /* MTU8.TCNT should be accessed in 32-bit units */
        p_status->counter =
            *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tcnt_ofs_addr[p_instance_ctrl->p_cfg->channel]);
    }
    else
    {
        p_status->counter =
            *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tcnt_ofs_addr[p_instance_ctrl->p_cfg->channel]);
    }

    return FSP_SUCCESS;
}

/*******************************************************************************************************************//**
 * Set counter value.
 *
 * @note Do not call this API while the counter is counting.  The counter value can only be updated while the counter
 * is stopped.
 *
 * @retval FSP_SUCCESS                 Counter value updated.
 * @retval FSP_ERR_ASSERTION           p_ctrl was NULL.
 * @retval FSP_ERR_NOT_OPEN            The instance is not opened.
 * @retval FSP_ERR_IN_USE              The timer is running.  Stop the timer before calling this function.
 **********************************************************************************************************************/
fsp_err_t R_MTU3_CounterSet (timer_ctrl_t * const p_ctrl, uint32_t counter)
{
    mtu3_instance_ctrl_t * p_instance_ctrl = (mtu3_instance_ctrl_t *) p_ctrl;
#if MTU3_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(NULL != p_instance_ctrl);
    FSP_ERROR_RETURN(MTU3_OPEN == p_instance_ctrl->open, FSP_ERR_NOT_OPEN);
    FSP_ERROR_RETURN(0U == mtu3_get_tstr(p_instance_ctrl), FSP_ERR_IN_USE);
#endif

    /* Set counter value */
    mtu3_set_count(p_instance_ctrl, counter);

    return FSP_SUCCESS;
}

/*******************************************************************************************************************//**
 * Enable output for MTIOCA and/or MTIOCB.
 *
 * @retval FSP_SUCCESS                 Output is enabled.
 * @retval FSP_ERR_ASSERTION           p_ctrl was NULL.
 * @retval FSP_ERR_NOT_OPEN            The instance is not opened.
 **********************************************************************************************************************/
fsp_err_t R_MTU3_OutputEnable (timer_ctrl_t * const p_ctrl, mtu3_output_pin_t pin_level)
{
    mtu3_instance_ctrl_t * p_instance_ctrl = (mtu3_instance_ctrl_t *) p_ctrl;
#if MTU3_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(NULL != p_instance_ctrl);
    FSP_ERROR_RETURN(MTU3_OPEN == p_instance_ctrl->open, FSP_ERR_NOT_OPEN);
#endif

    *((uint8_t *) p_instance_ctrl->p_reg + tior_ofs_addr[p_instance_ctrl->p_cfg->channel]) =
        (uint8_t) ((pin_level.output_pin_level_b << R_MTU_TIORH_IOB_Pos) | pin_level.output_pin_level_a);

    return FSP_SUCCESS;
}

/*******************************************************************************************************************//**
 * Disable output for MTIOCA and/or MTIOCB.
 *
 * @retval FSP_SUCCESS                 Output is disabled.
 * @retval FSP_ERR_ASSERTION           p_ctrl was NULL.
 * @retval FSP_ERR_NOT_OPEN            The instance is not opened.
 **********************************************************************************************************************/
fsp_err_t R_MTU3_OutputDisable (timer_ctrl_t * const p_ctrl, mtu3_io_pin_t pin)
{
    mtu3_instance_ctrl_t * p_instance_ctrl = (mtu3_instance_ctrl_t *) p_ctrl;
#if MTU3_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(NULL != p_instance_ctrl);
    FSP_ERROR_RETURN(MTU3_OPEN == p_instance_ctrl->open, FSP_ERR_NOT_OPEN);
#endif

    uint8_t tior = *((uint8_t *) p_instance_ctrl->p_reg + tior_ofs_addr[p_instance_ctrl->p_cfg->channel]);
    if (MTU3_IO_PIN_MTIOCB != pin)
    {
        /* MTIOCA or both MTIOCA and MTIOCB. */
        tior &= (uint8_t) ~R_MTU_TIORH_IOA_Msk;
    }

    if (MTU3_IO_PIN_MTIOCA != pin)
    {
        /* MTIOCB or both MTIOCA and MTIOCB. */
        tior &= (uint8_t) ~R_MTU_TIORH_IOB_Msk;
    }

    *((uint8_t *) p_instance_ctrl->p_reg + tior_ofs_addr[p_instance_ctrl->p_cfg->channel]) = tior;

    return FSP_SUCCESS;
}

/*******************************************************************************************************************//**
 * Enables external event triggers that capture the counter. Implements @ref timer_api_t::enable.
 *
 * @retval FSP_SUCCESS                 External events successfully enabled.
 * @retval FSP_ERR_ASSERTION           p_ctrl was NULL.
 * @retval FSP_ERR_NOT_OPEN            The instance is not opened.
 **********************************************************************************************************************/
fsp_err_t R_MTU3_Enable (timer_ctrl_t * const p_ctrl)
{
    mtu3_instance_ctrl_t * p_instance_ctrl = (mtu3_instance_ctrl_t *) p_ctrl;
#if MTU3_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(NULL != p_instance_ctrl);
    FSP_ERROR_RETURN(MTU3_OPEN == p_instance_ctrl->open, FSP_ERR_NOT_OPEN);
#endif

    mtu3_extended_cfg_t * p_extend = (mtu3_extended_cfg_t *) p_instance_ctrl->p_cfg->p_extend;

    /* TIOR setting for input capture. */
    if ((p_extend->mtioc_ctrl_setting.output_pin_level_a & MTU3_TIOR_CAPTURE_MSK) ||
        (p_extend->mtioc_ctrl_setting.output_pin_level_b & MTU3_TIOR_CAPTURE_MSK))
    {
        *((uint8_t *) p_instance_ctrl->p_reg + tior_ofs_addr[p_instance_ctrl->p_cfg->channel]) =
            (uint8_t) ((p_extend->mtioc_ctrl_setting.output_pin_level_b << R_MTU_TIORH_IOB_Pos) |
                       p_extend->mtioc_ctrl_setting.output_pin_level_a);
    }

    /* Start timer */
    if ((MTU3_CHANNEL_6 == p_instance_ctrl->p_cfg->channel) || (MTU3_CHANNEL_7 == p_instance_ctrl->p_cfg->channel))
    {
        p_instance_ctrl->p_reg_com->TSTRB |= mtu3_tstr_val[p_instance_ctrl->p_cfg->channel];
    }
    else
    {
        p_instance_ctrl->p_reg_com->TSTRA |= mtu3_tstr_val[p_instance_ctrl->p_cfg->channel];
    }

    return FSP_SUCCESS;
}

/*******************************************************************************************************************//**
 * Disables external event triggers that capture the counter. Implements @ref timer_api_t::disable.
 *
 * @note The timer could be running after R_GPT_Disable(). To ensure it is stopped, call R_GPT_Stop().
 *
 * @retval FSP_SUCCESS                 External events successfully disabled.
 * @retval FSP_ERR_ASSERTION           p_ctrl was NULL.
 * @retval FSP_ERR_NOT_OPEN            The instance is not opened.
 **********************************************************************************************************************/
fsp_err_t R_MTU3_Disable (timer_ctrl_t * const p_ctrl)
{
    mtu3_instance_ctrl_t * p_instance_ctrl = (mtu3_instance_ctrl_t *) p_ctrl;
#if MTU3_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(NULL != p_instance_ctrl);
    FSP_ERROR_RETURN(MTU3_OPEN == p_instance_ctrl->open, FSP_ERR_NOT_OPEN);
#endif

    mtu3_extended_cfg_t * p_extend = (mtu3_extended_cfg_t *) p_instance_ctrl->p_cfg->p_extend;

    /* Initialize the TIOR setting. */
    if ((p_extend->mtioc_ctrl_setting.output_pin_level_a & MTU3_TIOR_CAPTURE_MSK) ||
        (p_extend->mtioc_ctrl_setting.output_pin_level_b & MTU3_TIOR_CAPTURE_MSK))
    {
        *((uint8_t *) p_instance_ctrl->p_reg + tior_ofs_addr[p_instance_ctrl->p_cfg->channel]) =
            (uint8_t) ((0 << R_MTU_TIORH_IOB_Pos) | (0 << R_MTU_TIORH_IOA_Pos));
    }

    /* Stop timer */
    mtu3_stop_timer(p_instance_ctrl);

    return FSP_SUCCESS;
}

/*******************************************************************************************************************//**
 * Set A/D converter start request compare match value.
 *
 * @note MTU ch4, ch7 only
 *
 * @retval FSP_SUCCESS                 Counter value updated.
 * @retval FSP_ERR_ASSERTION           p_ctrl was NULL.
 * @retval FSP_ERR_NOT_OPEN            The instance is not opened.
 **********************************************************************************************************************/
fsp_err_t R_MTU3_AdcTriggerSet (timer_ctrl_t * const     p_ctrl,
                                mtu3_adc_compare_match_t which_compare_match,
                                uint16_t                 compare_match_value)
{
    mtu3_instance_ctrl_t * p_instance_ctrl = (mtu3_instance_ctrl_t *) p_ctrl;
#if MTU3_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(NULL != p_instance_ctrl);
    FSP_ERROR_RETURN(MTU3_OPEN == p_instance_ctrl->open, FSP_ERR_NOT_OPEN);
#endif

    /* Set A/D converter start request compare match value. */
    if (MTU3_ADC_COMPARE_MATCH_ADC_A == which_compare_match)
    {
        if (MTU3_CHANNEL_4 == p_instance_ctrl->p_cfg->channel)
        {
            R_MTU4->TADCORA = compare_match_value;
        }
        else
        {
            R_MTU7->TADCORA = compare_match_value;
        }
    }

    if (MTU3_ADC_COMPARE_MATCH_ADC_B == which_compare_match)
    {
        if (MTU3_CHANNEL_4 == p_instance_ctrl->p_cfg->channel)
        {
            R_MTU4->TADCORB = compare_match_value;
        }
        else
        {
            R_MTU7->TADCORB = compare_match_value;
        }
    }

    return FSP_SUCCESS;
}

/*******************************************************************************************************************//**
 * Updates the user callback with the option to provide memory for the callback argument structure.
 * Implements @ref timer_api_t::callbackSet.
 *
 * @retval  FSP_SUCCESS                  Callback updated successfully.
 * @retval  FSP_ERR_ASSERTION            A required pointer is NULL.
 * @retval  FSP_ERR_NOT_OPEN             The control block has not been opened.
 **********************************************************************************************************************/
fsp_err_t R_MTU3_CallbackSet (timer_ctrl_t * const          p_api_ctrl,
                              void (                      * p_callback)(timer_callback_args_t *),
                              void const * const            p_context,
                              timer_callback_args_t * const p_callback_memory)
{
    mtu3_instance_ctrl_t * p_ctrl = (mtu3_instance_ctrl_t *) p_api_ctrl;

#if MTU3_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(p_ctrl);
    FSP_ASSERT(p_callback);
    FSP_ERROR_RETURN(MTU3_OPEN == p_ctrl->open, FSP_ERR_NOT_OPEN);
#endif

    /* Store callback and context */
    p_ctrl->p_callback        = p_callback;
    p_ctrl->p_context         = p_context;
    p_ctrl->p_callback_memory = p_callback_memory;

    return FSP_SUCCESS;
}

/*******************************************************************************************************************//**
 * Stops counter, disables output pins, and clears internal driver data. Implements @ref timer_api_t::close.
 *
 * @retval FSP_SUCCESS                 Successful close.
 * @retval FSP_ERR_ASSERTION           p_ctrl was NULL.
 * @retval FSP_ERR_NOT_OPEN            The instance is not opened.
 **********************************************************************************************************************/
fsp_err_t R_MTU3_Close (timer_ctrl_t * const p_ctrl)
{
    mtu3_instance_ctrl_t * p_instance_ctrl = (mtu3_instance_ctrl_t *) p_ctrl;
    fsp_err_t              err             = FSP_SUCCESS;

#if MTU3_CFG_PARAM_CHECKING_ENABLE
    FSP_ASSERT(NULL != p_instance_ctrl);
    FSP_ERROR_RETURN(MTU3_OPEN == p_instance_ctrl->open, FSP_ERR_NOT_OPEN);
#endif

    /* Stop counter. */
    mtu3_stop_timer(p_instance_ctrl);

    /* Clear open flag. */
    p_instance_ctrl->open = 0U;

    /* Disable output. */
    *((uint8_t *) p_instance_ctrl->p_reg + tior_ofs_addr[p_instance_ctrl->p_cfg->channel]) = 0U;

    /* Disable interrupts. */
    mtu3_disable_interrupt(p_instance_ctrl);

    return err;
}

/** @} (end addtogroup MTU3) */

/*******************************************************************************************************************//**
 * Private Functions
 **********************************************************************************************************************/

/*******************************************************************************************************************//**
 * Initializes control structure based on configuration.
 *
 * @param[in]  p_instance_ctrl         Instance control block.
 * @param[in]  p_cfg                   Pointer to timer configuration.
 **********************************************************************************************************************/
static void mtu3_common_open (mtu3_instance_ctrl_t * const p_instance_ctrl, timer_cfg_t const * const p_cfg)
{
    /* Initialize control structure.  */
    p_instance_ctrl->p_cfg = p_cfg;

    /* If callback is not null, make sure the IRQ is enabled and store callback in the control block. */

    /* Save register base address. */
    mtu3_extended_cfg_t * p_extend = (mtu3_extended_cfg_t *) p_cfg->p_extend;

    p_instance_ctrl->p_reg_com = R_MTU;
    p_instance_ctrl->p_reg_nf  = (void *) R_MTU0;
    p_instance_ctrl->p_reg     = p_extend->p_reg;

    /* Set callback and context pointers, if configured */
    p_instance_ctrl->p_callback        = p_cfg->p_callback;
    p_instance_ctrl->p_context         = p_cfg->p_context;
    p_instance_ctrl->p_callback_memory = NULL;
}

/*******************************************************************************************************************//**
 * Performs hardware initialization of the MTU3.
 *
 * @param[in]  p_instance_ctrl        Instance control block.
 * @param[in]  p_cfg                  Pointer to timer configuration.
 **********************************************************************************************************************/
static void mtu3_hardware_initialize (mtu3_instance_ctrl_t * const p_instance_ctrl, timer_cfg_t const * const p_cfg)
{
    /* Save pointer to extended configuration structure. */
    mtu3_extended_cfg_t * p_extend = (mtu3_extended_cfg_t *) p_cfg->p_extend;

    /* Counter related initialization */
    mtu3_counter_initialize(p_instance_ctrl, p_cfg);

    /* In MTU3 and MTU4, set TOERA prior to setting TIOR. */
    p_instance_ctrl->p_reg_com->TOERA = MTU3_TOERA_MSK;
    p_instance_ctrl->p_reg_com->TOERB = MTU3_TOERB_MSK;

#if MTU3_PRV_EXTRA_FEATURES_ENABLED == MTU3_CFG_OUTPUT_SUPPORT_ENABLE
    mtu3_extended_pwm_cfg_t const * p_pwm_cfg = p_extend->p_pwm_cfg;
    if (NULL != p_pwm_cfg)
    {
        /* Interrupt Skipping Function Select */
        p_instance_ctrl->p_reg_com->TITMRA = p_pwm_cfg->interrupt_skip_mode_a;
        p_instance_ctrl->p_reg_com->TITMRB = p_pwm_cfg->interrupt_skip_mode_b;

        switch (p_cfg->channel)
        {
            case MTU3_CHANNEL_3:
            {
                /* When TITMRA = 0 */
                if (MTU3_INTERRUPT_SKIP_MODE_1 == p_pwm_cfg->interrupt_skip_mode_a)
                {
                    /* T3ACNT clear */
                    p_instance_ctrl->p_reg_com->TITCR1A &=
                        (uint8_t) ~((uint8_t) R_MTU_TITCR1A_T3AEN_Msk | R_MTU_TITCR1A_T3ACOR_Msk);
                    p_instance_ctrl->p_reg_com->TITCR1A = (uint8_t) ((uint8_t) R_MTU_TITCR1A_T3AEN_Msk | \
                                                                     (uint8_t) p_pwm_cfg->interrupt_skip_count_tgia3 <<
                                                                     R_MTU_TITCR1A_T3ACOR_Pos);
                }

                break;
            }

            case MTU3_CHANNEL_4:
            {
                /* When TITMRA = 0 */
                if (MTU3_INTERRUPT_SKIP_MODE_1 == p_pwm_cfg->interrupt_skip_mode_a)
                {
                    /* T4VCNT clear */
                    p_instance_ctrl->p_reg_com->TITCR1A &=
                        (uint8_t) ~((uint8_t) R_MTU_TITCR1A_T4VEN_Msk | R_MTU_TITCR1A_T4VCOR_Msk);
                    p_instance_ctrl->p_reg_com->TITCR1A = (uint8_t) ((uint8_t) R_MTU_TITCR1A_T4VEN_Msk | \
                                                                     (uint8_t) p_pwm_cfg->interrupt_skip_count_tciv4 <<
                                                                     R_MTU_TITCR1A_T4VCOR_Pos);
                }
                /* When TITMRA = 1 */
                else
                {
                    /* TRG4CNT clear */
                    p_instance_ctrl->p_reg_com->TITCR2A &= (uint8_t) ~((uint8_t) R_MTU_TITCR2A_TRG4COR_Msk);
                    p_instance_ctrl->p_reg_com->TITCR2A  = (uint8_t) (p_pwm_cfg->interrupt_skip_count_tgr4an_bn <<
                                                                     R_MTU_TITCR2A_TRG4COR_Pos);
                }

                R_MTU4->TADCORA = p_pwm_cfg->adc_a_compare_match;
                R_MTU4->TADCORB = p_pwm_cfg->adc_b_compare_match;
                break;
            }

            case MTU3_CHANNEL_6:
            {
                /* When TITMRB = 0 */
                if (MTU3_INTERRUPT_SKIP_MODE_1 == p_pwm_cfg->interrupt_skip_mode_b)
                {
                    /* T6ACNT clear */
                    p_instance_ctrl->p_reg_com->TITCR1B &=
                        (uint8_t) ~((uint8_t) R_MTU_TITCR1B_T6AEN_Msk | R_MTU_TITCR1B_T6ACOR_Msk);
                    p_instance_ctrl->p_reg_com->TITCR1B = (uint8_t) ((uint8_t) R_MTU_TITCR1B_T6AEN_Msk | \
                                                                     (uint8_t) p_pwm_cfg->interrupt_skip_count_tgia6 <<
                                                                     R_MTU_TITCR1B_T6ACOR_Pos);
                }

                break;
            }

            case MTU3_CHANNEL_7:
            {
                /* When TITMRB = 0 */
                if (MTU3_INTERRUPT_SKIP_MODE_1 == p_pwm_cfg->interrupt_skip_mode_b)
                {
                    /* T7VCNT clear */
                    p_instance_ctrl->p_reg_com->TITCR1B &=
                        (uint8_t) ~(R_MTU_TITCR1B_T7VEN_Msk | R_MTU_TITCR1B_T7VCOR_Msk);
                    p_instance_ctrl->p_reg_com->TITCR1B = (uint8_t) ((uint8_t) R_MTU_TITCR1B_T7VEN_Msk | \
                                                                     (uint8_t) p_pwm_cfg->interrupt_skip_count_tciv7 <<
                                                                     R_MTU_TITCR1B_T7VCOR_Pos);
                }
                /* When TITMRB = 1 */
                else
                {
                    /* TRG7CNT clear */
                    p_instance_ctrl->p_reg_com->TITCR2B &= (uint8_t) ~(R_MTU_TITCR2B_TRG7COR_Msk);
                    p_instance_ctrl->p_reg_com->TITCR2B  = (uint8_t) (p_pwm_cfg->interrupt_skip_count_tgr7an_bn <<
                                                                     R_MTU_TITCR2B_TRG7COR_Pos);
                }

                R_MTU7->TADCORA = p_pwm_cfg->adc_a_compare_match;
                R_MTU7->TADCORB = p_pwm_cfg->adc_b_compare_match;
                break;
            }

            default:
            {
                break;
            }
        }
    }
#endif

    /* Configure the noise filter for the MTIOC pins. */
    uint8_t nfcr = 0U;
    nfcr =
        (uint8_t) (p_extend->noise_filter_mtioc_setting & (R_MTU_NFCR0_NFAEN_Msk | R_MTU_NFCR0_NFBEN_Msk));
    nfcr |= (uint8_t) (p_extend->noise_filter_mtioc_clk << R_MTU_NFCR0_NFCS_Pos);

    *((uint8_t *) p_instance_ctrl->p_reg_nf + nfcr_ofs_addr[p_cfg->channel]) = nfcr;

    /* Configure the noise filter for the MTCLKx pins. */
    uint8_t nfcrc = 0U;

    nfcrc =
        (uint8_t) (p_extend->noise_filter_mtclk_setting &
                   (R_MTU_NFCRC_NFAEN_Msk | R_MTU_NFCRC_NFBEN_Msk | R_MTU_NFCRC_NFCEN_Msk |
                    R_MTU_NFCRC_NFDEN_Msk));
    nfcrc |= (uint8_t) (p_extend->noise_filter_mtclk_clk << R_MTU_NFCRC_NFCS_Pos);
    *((uint8_t *) p_instance_ctrl->p_reg_nf + MTU_NOISEFILTER_C_OFFSET_ADDRESS) = nfcrc;

    uint8_t tmdr1 = 0U;

    /* Enable the compare match buffer. */
    if (!((MTU3_CHANNEL_1 == p_cfg->channel) || (MTU3_CHANNEL_2 == p_cfg->channel)))
    {
        tmdr1 = (R_MTU_TMDR1_BFA_Msk | R_MTU_TMDR1_BFB_Msk);
    }

    if (TIMER_MODE_ONE_SHOT != p_cfg->mode)
    {
        tmdr1 |= (uint8_t) (p_cfg->mode);
    }

    *((uint8_t *) p_instance_ctrl->p_reg + tmdr1_ofs_addr[p_cfg->channel]) = tmdr1;

    /* A/D converter start requests enable. */
    if (((MTU3_CHANNEL_4 == p_cfg->channel) || (MTU3_CHANNEL_7 == p_cfg->channel)))
    {
        *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                       tadcr_ofs_addr[p_cfg->channel]) =
            (R_MTU_TADCR_UT4AE_Msk | R_MTU_TADCR_DT4AE_Msk | \
             R_MTU_TADCR_UT4BE_Msk |
             R_MTU_TADCR_DT4BE_Msk);
    }

    /* Set the I/O control register. */
    uint8_t tior_ioa = 0;
    uint8_t tior_iob = 0;
    if (!p_extend->custom_waveform_enabled)
    {
        if (TIMER_MODE_PWM == p_cfg->mode)
        {
            if ((MTU3_TCNT_CLEAR_TGRA == p_extend->mtu3_clear) && p_extend->mtioc_ctrl_setting.output_enabled_a)
            {
                /* Setting for specifying the stop level low. */
                if (MTU3_PIN_LEVEL_LOW == p_extend->mtioc_ctrl_setting.stop_level_a)
                {
                    tior_ioa = MTU3_IO_PIN_LEVEL_INITIAL_LOW_COMPARE_LOW;
                    tior_iob = MTU3_IO_PIN_LEVEL_INITIAL_LOW_COMPARE_LOW;
                }
                /* Setting for specifying the stop level high. */
                else
                {
                    tior_ioa = MTU3_IO_PIN_LEVEL_INITIAL_HIGH_COMPARE_HIGH;
                    tior_iob = MTU3_IO_PIN_LEVEL_INITIAL_HIGH_COMPARE_HIGH;
                }
            }
            else if ((MTU3_TCNT_CLEAR_TGRB == p_extend->mtu3_clear) && p_extend->mtioc_ctrl_setting.output_enabled_a)
            {
                /* Setting for specifying the stop level low. */
                if (MTU3_PIN_LEVEL_LOW == p_extend->mtioc_ctrl_setting.stop_level_a)
                {
                    tior_ioa = MTU3_IO_PIN_LEVEL_INITIAL_LOW_COMPARE_LOW;
                    tior_iob = MTU3_IO_PIN_LEVEL_INITIAL_LOW_COMPARE_LOW;
                }
                /* Setting for specifying the stop level high. */
                else
                {
                    tior_ioa = MTU3_IO_PIN_LEVEL_INITIAL_HIGH_COMPARE_HIGH;
                    tior_iob = MTU3_IO_PIN_LEVEL_INITIAL_HIGH_COMPARE_HIGH;
                }
            }
            else
            {
                /* Do nothing. */
            }
        }
        /* Periodic and One-Shot mode setting. */
        else
        {
            if ((MTU3_TCNT_CLEAR_TGRA == p_extend->mtu3_clear) && (p_extend->mtioc_ctrl_setting.output_enabled_a))
            {
                /* Positive Phase Waveform. */
                if (MTU3_PIN_LEVEL_LOW == p_extend->mtioc_ctrl_setting.stop_level_a)
                {
                    tior_ioa = MTU3_IO_PIN_LEVEL_INITIAL_LOW_COMPARE_TOGGLE;
                }
                /* Negative Phase Waveform. */
                else
                {
                    tior_ioa = MTU3_IO_PIN_LEVEL_INITIAL_HIGH_COMPARE_TOGGLE;
                }
            }
            else if ((MTU3_TCNT_CLEAR_TGRB == p_extend->mtu3_clear) && (p_extend->mtioc_ctrl_setting.output_enabled_b))
            {
                /* Positive Phase Waveform. */
                if (MTU3_PIN_LEVEL_LOW == p_extend->mtioc_ctrl_setting.stop_level_b)
                {
                    tior_iob = MTU3_IO_PIN_LEVEL_INITIAL_LOW_COMPARE_TOGGLE;
                }
                /* Negative Phase Waveform. */
                else
                {
                    tior_iob = MTU3_IO_PIN_LEVEL_INITIAL_HIGH_COMPARE_TOGGLE;
                }
            }
            else
            {
                /* Do Nothing. */
            }
        }
    }
    /* Custom waveform setting. */
    else
    {
        if (!(p_extend->mtioc_ctrl_setting.output_pin_level_a & MTU3_TIOR_CAPTURE_MSK))
        {
            tior_ioa = p_extend->mtioc_ctrl_setting.output_pin_level_a;
            tior_iob = p_extend->mtioc_ctrl_setting.output_pin_level_b;
        }
    }

    *((uint8_t *) p_instance_ctrl->p_reg +
      tior_ofs_addr[p_cfg->channel]) =
        ((uint8_t) (tior_iob << R_MTU_TIORH_IOB_Pos) | tior_ioa);

    p_instance_ctrl->tior_ioa = tior_ioa;
    p_instance_ctrl->tior_iob = tior_iob;

    mtu3_enable_interrupt(p_instance_ctrl);

    /* Enable counting mode */
    if (MTU3_PHASE_COUNTING_MODE_NONE != p_extend->counting_mode)
    {
        /*Initialization structure based on configurations */
        mtu3_count_mode_hardware_initialize(p_instance_ctrl, p_extend);

        /* Configure the up/down count mode. These are not affected by enable/disable. */
        if (MTU3_BIT_MODE_NORMAL_32BIT == p_extend->bit_mode)
        {
            p_instance_ctrl->p_reg_com->TSTRA |= mtu3_tstr_val[p_cfg->channel];
            *((uint8_t *) p_instance_ctrl->p_reg +
              tmdr1_ofs_addr[p_cfg->channel]) = MTU3_PHASE_COUNTING_MODE_2_MD;

            /* Set MTU1.TCNTLW count clear factor to MTU1.TGRALW input capture. */
            R_MTU1->TCR_b.CCLR = MTU3_TCNT_CLEAR_TGRA;

            switch (p_extend->counting_mode)
            {
                case MTU3_PHASE_COUNTING_MODE_NONE:
                {
                    break;
                }

                case MTU3_PHASE_COUNTING_MODE_1:
                case MTU3_PHASE_COUNTING_MODE_210:
                case MTU3_PHASE_COUNTING_MODE_310:
                case MTU3_PHASE_COUNTING_MODE_4:
                {
                    /* Set the effective edge of both edge. */
                    R_MTU1->TIOR_b.IOA = MTU_TIOR_INPUT_BOTH_EDGE;
                    R_MTU1->TIOR_b.IOB = MTU_TIOR_INPUT_BOTH_EDGE;
                    break;
                }

                case MTU3_PHASE_COUNTING_MODE_200:
                case MTU3_PHASE_COUNTING_MODE_300:
                case MTU3_PHASE_COUNTING_MODE_50:
                case MTU3_PHASE_COUNTING_MODE_51:
                {
                    /* Set the effective edge of falling edge. */
                    R_MTU1->TIOR_b.IOA = MTU_TIOR_INPUT_FALLING_EDGE;
                    R_MTU1->TIOR_b.IOB = MTU_TIOR_INPUT_FALLING_EDGE;
                    break;
                }

                case MTU3_PHASE_COUNTING_MODE_201:
                case MTU3_PHASE_COUNTING_MODE_301:
                {
                    /* Set the effective edge of rising edge. */
                    R_MTU1->TIOR_b.IOA = MTU_TIOR_INPUT_RISING_EDGE;
                    R_MTU1->TIOR_b.IOB = MTU_TIOR_INPUT_RISING_EDGE;
                    break;
                }
            }
        }
    }
}

/*******************************************************************************************************************//**
 * Performs hardware initialization of the MTU3 mode phase count
 * @param[in]  p_instance_ctrl        Instance control block.
 * @param[in]  p_extend               Pointer to timer extended configuration.
 **********************************************************************************************************************/
static void mtu3_count_mode_hardware_initialize (mtu3_instance_ctrl_t * const      p_instance_ctrl,
                                                 mtu3_extended_cfg_t const * const p_extend)
{
    /* Clear the TMDR3 register to zero */
    R_MTU1->TMDR3 &= (uint8_t) ~(R_MTU_TMDR3_LWA_Msk | R_MTU_TMDR3_PHCKSEL_Msk);

    /* Normal mode */
    if (MTU3_BIT_MODE_NORMAL_32BIT == p_extend->bit_mode)
    {
        /* 32-bit access is enabled. */
        R_MTU1->TMDR3 = R_MTU_TMDR3_LWA_Msk;
    }

    /* Select phase counting mode. */
    mtu3_count_mode_set(p_instance_ctrl, p_extend->counting_mode);

    /* Select A- or B-phase input pin */
    R_MTU1->TMDR3 |= (uint8_t) (p_extend->external_clock << R_MTU_TMDR3_PHCKSEL_Pos);
}

/*******************************************************************************************************************//**
 * Performs mtu3_count_mode_set.
 *
 * @param[in]  p_instance_ctrl        Instance control block.
 * @param[in]  mode                   Set the mode.
 **********************************************************************************************************************/
static void mtu3_count_mode_set (mtu3_instance_ctrl_t * const p_instance_ctrl, mtu3_phase_counting_mode_t mode)
{
    switch (mode)
    {
        case MTU3_PHASE_COUNTING_MODE_1:
        {
            *((uint8_t *) p_instance_ctrl->p_reg +
              tmdr1_ofs_addr[p_instance_ctrl->p_cfg->channel]) = MTU3_PHASE_COUNTING_MODE_1_MD;
            break;
        }

        case MTU3_PHASE_COUNTING_MODE_200:
        {
            *((uint8_t *) p_instance_ctrl->p_reg +
              tmdr1_ofs_addr[p_instance_ctrl->p_cfg->channel]) = MTU3_PHASE_COUNTING_MODE_2_MD;
            *((uint8_t *) p_instance_ctrl->p_reg +
              tcr2_ofs_addr[p_instance_ctrl->p_cfg->channel]) = MTU3_PHASE_COUNTING_MODE_PCB_0;
            break;
        }

        case MTU3_PHASE_COUNTING_MODE_201:
        {
            *((uint8_t *) p_instance_ctrl->p_reg +
              tmdr1_ofs_addr[p_instance_ctrl->p_cfg->channel]) = MTU3_PHASE_COUNTING_MODE_2_MD;
            *((uint8_t *) p_instance_ctrl->p_reg +
              tcr2_ofs_addr[p_instance_ctrl->p_cfg->channel]) = MTU3_PHASE_COUNTING_MODE_PCB_1;
            break;
        }

        case MTU3_PHASE_COUNTING_MODE_210:
        {
            *((uint8_t *) p_instance_ctrl->p_reg +
              tmdr1_ofs_addr[p_instance_ctrl->p_cfg->channel]) = MTU3_PHASE_COUNTING_MODE_2_MD;
            *((uint8_t *) p_instance_ctrl->p_reg +
              tcr2_ofs_addr[p_instance_ctrl->p_cfg->channel]) = MTU3_PHASE_COUNTING_MODE_PCB_2;
            break;
        }

        case MTU3_PHASE_COUNTING_MODE_300:
        {
            *((uint8_t *) p_instance_ctrl->p_reg +
              tmdr1_ofs_addr[p_instance_ctrl->p_cfg->channel]) = MTU3_PHASE_COUNTING_MODE_3_MD;
            *((uint8_t *) p_instance_ctrl->p_reg +
              tcr2_ofs_addr[p_instance_ctrl->p_cfg->channel]) = MTU3_PHASE_COUNTING_MODE_PCB_0;
            break;
        }

        case MTU3_PHASE_COUNTING_MODE_301:
        {
            *((uint8_t *) p_instance_ctrl->p_reg +
              tmdr1_ofs_addr[p_instance_ctrl->p_cfg->channel]) = MTU3_PHASE_COUNTING_MODE_3_MD;
            *((uint8_t *) p_instance_ctrl->p_reg +
              tcr2_ofs_addr[p_instance_ctrl->p_cfg->channel]) = MTU3_PHASE_COUNTING_MODE_PCB_1;
            break;
        }

        case MTU3_PHASE_COUNTING_MODE_310:
        {
            *((uint8_t *) p_instance_ctrl->p_reg +
              tmdr1_ofs_addr[p_instance_ctrl->p_cfg->channel]) = MTU3_PHASE_COUNTING_MODE_3_MD;
            *((uint8_t *) p_instance_ctrl->p_reg +
              tcr2_ofs_addr[p_instance_ctrl->p_cfg->channel]) = MTU3_PHASE_COUNTING_MODE_PCB_2;
            break;
        }

        case MTU3_PHASE_COUNTING_MODE_4:
        {
            *((uint8_t *) p_instance_ctrl->p_reg +
              tmdr1_ofs_addr[p_instance_ctrl->p_cfg->channel]) = MTU3_PHASE_COUNTING_MODE_4_MD;
            break;
        }

        case MTU3_PHASE_COUNTING_MODE_50:
        {
            *((uint8_t *) p_instance_ctrl->p_reg +
              tmdr1_ofs_addr[p_instance_ctrl->p_cfg->channel]) = MTU3_PHASE_COUNTING_MODE_5_MD;
            *((uint8_t *) p_instance_ctrl->p_reg +
              tcr2_ofs_addr[p_instance_ctrl->p_cfg->channel]) = MTU3_PHASE_COUNTING_MODE_PCB_0;
            break;
        }

        case MTU3_PHASE_COUNTING_MODE_51:
        {
            *((uint8_t *) p_instance_ctrl->p_reg +
              tmdr1_ofs_addr[p_instance_ctrl->p_cfg->channel]) = MTU3_PHASE_COUNTING_MODE_5_MD;
            *((uint8_t *) p_instance_ctrl->p_reg +
              tcr2_ofs_addr[p_instance_ctrl->p_cfg->channel]) = MTU3_PHASE_COUNTING_MODE_PCB_2;
            break;
        }

        default:
        {
            break;
        }
    }
}

/*******************************************************************************************************************//**
 * Counter initialization of the MTU3.
 *
 * @param[in]  p_instance_ctrl        Instance control block.
 * @param[in]  p_cfg                  Pointer to timer configuration.
 **********************************************************************************************************************/
static void mtu3_counter_initialize (mtu3_instance_ctrl_t * const p_instance_ctrl, timer_cfg_t const * const p_cfg)
{
    /* Save pointer to extended configuration structure. */
    mtu3_extended_cfg_t * p_extend = (mtu3_extended_cfg_t *) p_cfg->p_extend;

    /* Power on MTU3 before setting any hardware registers. Make sure the counter is stopped before setting mode
     * register, PCLK divisor register, and counter register. */

    R_BSP_MODULE_START(FSP_IP_MTU3, 0);

    /* Initialize all registers that may affect operation of this driver to reset values.  Skip these since they
     * affect all channels, and are initialized in TSTR and TCNT is set immediately after
     * clearing the module stop bit to ensure the timer is stopped before proceeding with configuration. */
    mtu3_stop_timer(p_instance_ctrl);
    mtu3_set_count(p_instance_ctrl, 0U);

    /* Initialize each TGR register. */
    if (MTU3_CHANNEL_8 == p_instance_ctrl->p_cfg->channel)
    {
        *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                       tgra_ofs_addr[p_instance_ctrl->p_cfg->channel]) = UINT32_MAX;
        *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                       MTU3_TGRB_D_OFFSET_LONG) = UINT32_MAX;
        *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                       tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel]) = UINT32_MAX;
        *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                       MTU3_TGRB_D_OFFSET_LONG) = UINT32_MAX;
    }
    else if ((MTU3_CHANNEL_1 == p_instance_ctrl->p_cfg->channel) ||
             (MTU3_CHANNEL_2 == p_instance_ctrl->p_cfg->channel))
    {
        *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                       tgra_ofs_addr[p_instance_ctrl->p_cfg->channel]) = UINT16_MAX;
        *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                       MTU3_TGRB_D_OFFSET_WORD) = UINT16_MAX;
    }
    else
    {
        *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                       tgra_ofs_addr[p_instance_ctrl->p_cfg->channel]) = UINT16_MAX;
        *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                       MTU3_TGRB_D_OFFSET_WORD) = UINT16_MAX;
        *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                       tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel]) = UINT16_MAX;
        *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                       MTU3_TGRB_D_OFFSET_WORD) = UINT16_MAX;
    }

    if (!p_extend->custom_waveform_enabled)
    {
        /* Set the division ratio */
        uint8_t clk_divider = mtu3_clock_lut[p_cfg->channel][p_cfg->source_div];
        uint8_t tcr         = (uint8_t) ((uint8_t) (p_extend->mtu3_clear << R_MTU_TCR_CCLR_Pos) |
                                         (uint8_t) (p_extend->clk_edge << R_MTU_TCR_CKEG_Pos) |
                                         (uint8_t) (clk_divider & R_MTU_TCR_TPSC_Msk));
        uint8_t tcr2 = ((clk_divider >> MTU3_TCR_TPSC_POS) & R_MTU_TCR2_TPSC2_Msk);
        *((uint8_t *) p_instance_ctrl->p_reg + tcr_ofs_addr[p_cfg->channel])  = tcr;
        *((uint8_t *) p_instance_ctrl->p_reg + tcr2_ofs_addr[p_cfg->channel]) = tcr2;

        if (TIMER_MODE_ONE_SHOT == p_cfg->mode)
        {
            /* MTU ch8 should be written in 32-bit length */
            if (MTU3_CHANNEL_8 == p_cfg->channel)
            {
                if (MTU3_TCNT_CLEAR_TGRA == p_extend->mtu3_clear)
                {
                    *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                   tgra_ofs_addr[p_cfg->channel]) = 1U;
                    *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                   tgrc_ofs_addr[p_cfg->channel]) = p_cfg->period_counts;
                }
                else
                {
                    *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_cfg->channel] +
                                   MTU3_TGRB_D_OFFSET_LONG) = 1U;
                    *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_cfg->channel] +
                                   MTU3_TGRB_D_OFFSET_LONG) = p_cfg->period_counts;
                }
            }
            else
            {
                if (MTU3_TCNT_CLEAR_TGRA == p_extend->mtu3_clear)
                {
                    *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                   tgra_ofs_addr[p_cfg->channel]) = 1U;
                    *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                   tgrc_ofs_addr[p_cfg->channel]) = (uint16_t) p_cfg->period_counts;
                }
                else
                {
                    *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_cfg->channel] +
                                   MTU3_TGRB_D_OFFSET_WORD) = 1U;
                    *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_cfg->channel] +
                                   MTU3_TGRB_D_OFFSET_WORD) = (uint16_t) p_cfg->period_counts;
                }
            }
        }
        else if (TIMER_MODE_PERIODIC == p_cfg->mode)
        {
            if (MTU3_CHANNEL_8 == p_cfg->channel)
            {
                /* MTU ch8 should be written in 32-bit length */
                if (MTU3_TCNT_CLEAR_TGRA == p_extend->mtu3_clear)
                {
                    /* Set the compare match value. */
                    if (p_extend->compare_match_status)
                    {
                        *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_cfg->channel] +
                                       MTU3_TGRB_D_OFFSET_LONG) = (p_extend->compare_match_value);
                        *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_cfg->channel] +
                                       MTU3_TGRB_D_OFFSET_LONG) = (p_extend->compare_match_value);
                    }

                    if (p_extend->mtioc_ctrl_setting.output_enabled_a)
                    {
                        *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                       tgra_ofs_addr[p_cfg->channel]) = (p_cfg->period_counts / 2);
                        *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                       tgrc_ofs_addr[p_cfg->channel]) = (p_cfg->period_counts / 2);
                    }
                    else
                    {
                        *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                       tgra_ofs_addr[p_cfg->channel]) = p_cfg->period_counts;
                        *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                       tgrc_ofs_addr[p_cfg->channel]) = p_cfg->period_counts;
                    }
                }
                else
                {
                    /* Set the compare match value. */
                    if (p_extend->compare_match_status)
                    {
                        *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                       tgra_ofs_addr[p_cfg->channel]) = (p_extend->compare_match_value);
                        *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                       tgrc_ofs_addr[p_cfg->channel]) = (p_extend->compare_match_value);
                    }

                    if (p_extend->mtioc_ctrl_setting.output_enabled_b)
                    {
                        *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_cfg->channel] +
                                       MTU3_TGRB_D_OFFSET_LONG) = (p_cfg->period_counts / 2);
                        *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_cfg->channel] +
                                       MTU3_TGRB_D_OFFSET_LONG) = (p_cfg->period_counts / 2);
                    }
                    else
                    {
                        *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_cfg->channel] +
                                       MTU3_TGRB_D_OFFSET_LONG) = p_cfg->period_counts;
                        *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_cfg->channel] +
                                       MTU3_TGRB_D_OFFSET_LONG) = p_cfg->period_counts;
                    }
                }
            }
            else if ((MTU3_CHANNEL_1 == p_cfg->channel) ||
                     (MTU3_CHANNEL_2 == p_cfg->channel))
            {
                /* MTU1 and 2 without TGRC and TGRD should write TGRA and TGRB */
                if (MTU3_TCNT_CLEAR_TGRA == p_extend->mtu3_clear)
                {
                    /* Set the compare match value. */
                    if (p_extend->compare_match_status)
                    {
                        *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_cfg->channel] +
                                       MTU3_TGRB_D_OFFSET_WORD) = (p_extend->compare_match_value);
                    }

                    if (p_extend->mtioc_ctrl_setting.output_enabled_a)
                    {
                        *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                       tgra_ofs_addr[p_cfg->channel]) = (uint16_t) (p_cfg->period_counts / 2);
                    }
                    else
                    {
                        *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                       tgra_ofs_addr[p_cfg->channel]) = (uint16_t) p_cfg->period_counts;
                    }
                }
                else
                {
                    /* Set the compare match value. */
                    if (p_extend->compare_match_status)
                    {
                        *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                       tgra_ofs_addr[p_cfg->channel]) = (p_extend->compare_match_value);
                    }

                    if (p_extend->mtioc_ctrl_setting.output_enabled_b)
                    {
                        *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_cfg->channel] +
                                       MTU3_TGRB_D_OFFSET_WORD) = (uint16_t) (p_cfg->period_counts / 2);
                    }
                    else
                    {
                        *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_cfg->channel] +
                                       MTU3_TGRB_D_OFFSET_WORD) = (uint16_t) p_cfg->period_counts;
                    }
                }
            }
            else
            {
                if (MTU3_TCNT_CLEAR_TGRA == p_extend->mtu3_clear)
                {
                    /* Set the compare match value. */
                    if (p_extend->compare_match_status)
                    {
                        *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_cfg->channel] +
                                       MTU3_TGRB_D_OFFSET_WORD) = (uint16_t) (p_extend->compare_match_value);
                        *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_cfg->channel] +
                                       MTU3_TGRB_D_OFFSET_WORD) = (uint16_t) (p_extend->compare_match_value);
                    }

                    if (p_extend->mtioc_ctrl_setting.output_enabled_a)
                    {
                        *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                       tgra_ofs_addr[p_cfg->channel]) = (uint16_t) (p_cfg->period_counts / 2);
                        *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                       tgrc_ofs_addr[p_cfg->channel]) = (uint16_t) (p_cfg->period_counts / 2);
                    }
                    else
                    {
                        *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                       tgra_ofs_addr[p_cfg->channel]) = (uint16_t) p_cfg->period_counts;
                        *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                       tgrc_ofs_addr[p_cfg->channel]) = (uint16_t) p_cfg->period_counts;
                    }
                }
                else
                {
                    /* Set the compare match value. */
                    if (p_extend->compare_match_status)
                    {
                        *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                       tgra_ofs_addr[p_cfg->channel]) = (uint16_t) (p_extend->compare_match_value);
                        *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                       tgrc_ofs_addr[p_cfg->channel]) = (uint16_t) (p_extend->compare_match_value);
                    }

                    if (p_extend->mtioc_ctrl_setting.output_enabled_b)
                    {
                        *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_cfg->channel] +
                                       MTU3_TGRB_D_OFFSET_WORD) = (uint16_t) (p_cfg->period_counts / 2);
                        *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_cfg->channel] +
                                       MTU3_TGRB_D_OFFSET_WORD) = (uint16_t) (p_cfg->period_counts / 2);
                    }
                    else
                    {
                        *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_cfg->channel] +
                                       MTU3_TGRB_D_OFFSET_WORD) = (uint16_t) p_cfg->period_counts;
                        *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_cfg->channel] +
                                       MTU3_TGRB_D_OFFSET_WORD) = (uint16_t) p_cfg->period_counts;
                    }
                }
            }
        }
        else                           /* PWM Mode. */
        {
            if (MTU3_CHANNEL_8 == p_cfg->channel)
            {
                /* MTU ch8 should be written in 32-bit length */
                if (MTU3_TCNT_CLEAR_TGRA == p_extend->mtu3_clear)
                {
                    *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                   tgra_ofs_addr[p_cfg->channel]) = p_cfg->period_counts;
                    *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_cfg->channel] +
                                   MTU3_TGRB_D_OFFSET_LONG) = p_cfg->duty_cycle_counts;
                    *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                   tgrc_ofs_addr[p_cfg->channel]) = p_cfg->period_counts;
                    *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_cfg->channel] +
                                   MTU3_TGRB_D_OFFSET_LONG) = p_cfg->duty_cycle_counts;
                }
                else
                {
                    *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                   tgra_ofs_addr[p_cfg->channel]) = p_cfg->duty_cycle_counts;
                    *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_cfg->channel] +
                                   MTU3_TGRB_D_OFFSET_LONG) = p_cfg->period_counts;
                    *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                   tgrc_ofs_addr[p_cfg->channel]) = p_cfg->duty_cycle_counts;
                    *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_cfg->channel] +
                                   MTU3_TGRB_D_OFFSET_LONG) = p_cfg->period_counts;
                }
            }
            else if ((MTU3_CHANNEL_1 == p_cfg->channel) ||
                     (MTU3_CHANNEL_2 == p_cfg->channel))
            {
                /* MTU1 and 2 without TGRC and TGRD should write TGRA and TGRB */
                if (MTU3_TCNT_CLEAR_TGRA == p_extend->mtu3_clear)
                {
                    *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                   tgra_ofs_addr[p_cfg->channel]) = (uint16_t) p_cfg->period_counts;
                    *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_cfg->channel] +
                                   MTU3_TGRB_D_OFFSET_WORD) = (uint16_t) p_cfg->duty_cycle_counts;
                }
                else
                {
                    *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                   tgra_ofs_addr[p_cfg->channel]) = (uint16_t) p_cfg->duty_cycle_counts;
                    *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_cfg->channel] +
                                   MTU3_TGRB_D_OFFSET_WORD) = (uint16_t) p_cfg->period_counts;
                }
            }
            else
            {
                if (MTU3_TCNT_CLEAR_TGRA == p_extend->mtu3_clear)
                {
                    *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                   tgra_ofs_addr[p_cfg->channel]) = (uint16_t) p_cfg->period_counts;
                    *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_cfg->channel] +
                                   MTU3_TGRB_D_OFFSET_WORD) = (uint16_t) p_cfg->duty_cycle_counts;
                    *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                   tgrc_ofs_addr[p_cfg->channel]) = (uint16_t) p_cfg->period_counts;
                    *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_cfg->channel] +
                                   MTU3_TGRB_D_OFFSET_WORD) = (uint16_t) p_cfg->duty_cycle_counts;
                }
                else
                {
                    *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                   tgra_ofs_addr[p_cfg->channel]) = (uint16_t) p_cfg->duty_cycle_counts;
                    *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_cfg->channel] +
                                   MTU3_TGRB_D_OFFSET_WORD) = (uint16_t) p_cfg->period_counts;
                    *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                                   tgrc_ofs_addr[p_cfg->channel]) = (uint16_t) p_cfg->duty_cycle_counts;
                    *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_cfg->channel] +
                                   MTU3_TGRB_D_OFFSET_WORD) = (uint16_t) p_cfg->period_counts;
                }
            }
        }
    }
    /* Custom waveform setting. */
    else
    {
        /* Set the division ratio */
        uint8_t tcr = (uint8_t) ((uint8_t) (p_extend->mtu3_clear << R_MTU_TCR_CCLR_Pos) |
                                 (uint8_t) (p_extend->clk_edge << R_MTU_TCR_CKEG_Pos) |
                                 (uint8_t) (p_extend->mtu3_clk_div & R_MTU_TCR_TPSC_Msk));
        uint8_t tcr2 = ((p_extend->mtu3_clk_div >> MTU3_TCR_TPSC_POS) & R_MTU_TCR2_TPSC2_Msk);
        *((uint8_t *) p_instance_ctrl->p_reg + tcr_ofs_addr[p_cfg->channel])  = tcr;
        *((uint8_t *) p_instance_ctrl->p_reg + tcr2_ofs_addr[p_cfg->channel]) = tcr2;

        /* Store period register setting. The actual period and is one cycle longer than the register value. */
        if (MTU3_CHANNEL_8 == p_instance_ctrl->p_cfg->channel)
        {
            /* MTU ch8 should be written in 32-bit length */
            *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                           tgra_ofs_addr[p_cfg->channel]) = (p_extend->tgra_val - 1U);
            *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_cfg->channel] +
                           MTU3_TGRB_D_OFFSET_LONG) = (p_extend->tgrb_val - 1U);
            *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                           tgrc_ofs_addr[p_cfg->channel]) = (p_extend->tgrc_val - 1U);
            *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_cfg->channel] +
                           MTU3_TGRB_D_OFFSET_LONG) = (p_extend->tgrd_val - 1U);
        }
        else
        {
            *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                           tgra_ofs_addr[p_cfg->channel]) = (uint16_t) (p_extend->tgra_val - 1U);
            *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_cfg->channel] +
                           MTU3_TGRB_D_OFFSET_WORD) = (uint16_t) (p_extend->tgrb_val - 1U);

            /* TGRC and TGRD do not exist in MTU1 and MTU2 */
            if (!((MTU3_CHANNEL_1 == p_cfg->channel) ||
                  (MTU3_CHANNEL_2 == p_cfg->channel)))
            {
                *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_cfg->channel]) =
                    (uint16_t) (p_extend->tgrc_val - 1U);
                *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgrc_ofs_addr[p_cfg->channel] +
                               MTU3_TGRB_D_OFFSET_WORD) = (uint16_t) (p_extend->tgrd_val - 1U);
            }
        }
    }
}

/*******************************************************************************************************************//**
 * The counter value can only be updated while the counter
 *
 * @param[in]  p_instance_ctrl         Instance control structure
 * @param[in]  counter                 Timer counter
 **********************************************************************************************************************/
static void mtu3_set_count (mtu3_instance_ctrl_t * const p_instance_ctrl, uint32_t counter)
{
    /* Set timer counter. */
    if (MTU3_CHANNEL_8 == p_instance_ctrl->p_cfg->channel)
    {
        /* MTU8.TCNT should be accessed in 32-bit units */
        *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tcnt_ofs_addr[p_instance_ctrl->p_cfg->channel]) = counter;
    }
    else
    {
        *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg +
                       tcnt_ofs_addr[p_instance_ctrl->p_cfg->channel]) = (uint16_t) counter;
    }
}

/*******************************************************************************************************************//**
 * Check the operating status
 *
 * @param[in]  p_instance_ctrl         Instance control structure
 **********************************************************************************************************************/
static uint8_t mtu3_get_tstr (mtu3_instance_ctrl_t * const p_instance_ctrl)
{
    uint8_t ret_val;

    /* Check the operating status */
    if ((MTU3_CHANNEL_6 == p_instance_ctrl->p_cfg->channel) || (MTU3_CHANNEL_7 == p_instance_ctrl->p_cfg->channel))
    {
        ret_val = (p_instance_ctrl->p_reg_com->TSTRB & mtu3_tstr_val[p_instance_ctrl->p_cfg->channel]);
    }
    else
    {
        ret_val = (p_instance_ctrl->p_reg_com->TSTRA & mtu3_tstr_val[p_instance_ctrl->p_cfg->channel]);
    }

    return ret_val;
}

/*******************************************************************************************************************//**
 * Stops timer
 *
 * @param[in]  p_instance_ctrl         Instance control structure
 **********************************************************************************************************************/
static void mtu3_stop_timer (mtu3_instance_ctrl_t * const p_instance_ctrl)
{
    /* Stop timer */
    if ((MTU3_CHANNEL_6 == p_instance_ctrl->p_cfg->channel) || (MTU3_CHANNEL_7 == p_instance_ctrl->p_cfg->channel))
    {
        p_instance_ctrl->p_reg_com->TSTRB &= (uint8_t) ~mtu3_tstr_val[p_instance_ctrl->p_cfg->channel];
    }
    else
    {
        p_instance_ctrl->p_reg_com->TSTRA &= (uint8_t) ~mtu3_tstr_val[p_instance_ctrl->p_cfg->channel];
    }
}

/*******************************************************************************************************************//**
 * Disables interrupt if it is a valid vector number.
 *
 * @param[in]  irq                     Interrupt number
 **********************************************************************************************************************/
static void r_mtu3_disable_irq (IRQn_Type irq)
{
    /* Disable interrupts. */
    if (irq >= 0)
    {
        R_BSP_IrqDisable(irq);
        R_FSP_IsrContextSet(irq, NULL);
    }
}

/*******************************************************************************************************************//**
 * Configures and enables interrupt if it is a valid vector number.
 *
 * @param[in]  irq                     Interrupt number
 * @param[in]  priority                NVIC priority of the interrupt
 * @param[in]  p_context               The interrupt context is a pointer to data required in the ISR.
 **********************************************************************************************************************/
static void r_mtu3_enable_irq (IRQn_Type const irq, uint32_t priority, void * p_context)
{
    if (irq >= 0)
    {
        R_BSP_IrqCfgEnable(irq, priority, p_context);
    }
}

/*******************************************************************************************************************//**
 * Disable interrupts
 *
 * @param[in]  p_instance_ctrl           Instance control block
 **********************************************************************************************************************/
static void mtu3_disable_interrupt (mtu3_instance_ctrl_t * const p_instance_ctrl)
{
    /* Save pointer to extended configuration structure. */
    mtu3_extended_cfg_t * p_extend = (mtu3_extended_cfg_t *) p_instance_ctrl->p_cfg->p_extend;

    *((uint8_t *) p_instance_ctrl->p_reg +
      tier_ofs_addr[p_instance_ctrl->p_cfg->channel]) &= (uint8_t) ~R_MTU_TIER_TCIEV_Msk;
    *((uint8_t *) p_instance_ctrl->p_reg +
      tier_ofs_addr[p_instance_ctrl->p_cfg->channel]) &= (uint8_t) ~R_MTU_TIER_TGIEA_Msk;
    *((uint8_t *) p_instance_ctrl->p_reg +
      tier_ofs_addr[p_instance_ctrl->p_cfg->channel]) &= (uint8_t) ~R_MTU_TIER_TGIEB_Msk;
    *((uint8_t *) p_instance_ctrl->p_reg +
      tier_ofs_addr[p_instance_ctrl->p_cfg->channel]) &= (uint8_t) ~R_MTU_TIER_TTGE_Msk;

    r_mtu3_disable_irq(p_instance_ctrl->p_cfg->cycle_end_irq);
    r_mtu3_disable_irq(p_extend->capture_a_irq);
    r_mtu3_disable_irq(p_extend->capture_b_irq);
}

/*******************************************************************************************************************//**
 * Enable interrupts
 *
 * @param[in]  p_instance_ctrl           Instance control block
 **********************************************************************************************************************/
static void mtu3_enable_interrupt (mtu3_instance_ctrl_t * const p_instance_ctrl)
{
    /* Save pointer to extended configuration structure. */
    mtu3_extended_cfg_t * p_extend = (mtu3_extended_cfg_t *) p_instance_ctrl->p_cfg->p_extend;

    /* Initialize TIER */
    *((uint8_t *) p_instance_ctrl->p_reg + tier_ofs_addr[p_instance_ctrl->p_cfg->channel]) = 0x00U;

    /* Enable CPU interrupts if callback is not null. */
    *((uint8_t *) p_instance_ctrl->p_reg +
      tier_ofs_addr[p_instance_ctrl->p_cfg->channel]) |= R_MTU_TIER_TCIEV_Msk;
    *((uint8_t *) p_instance_ctrl->p_reg +
      tier_ofs_addr[p_instance_ctrl->p_cfg->channel]) |= R_MTU_TIER_TGIEA_Msk;
    *((uint8_t *) p_instance_ctrl->p_reg +
      tier_ofs_addr[p_instance_ctrl->p_cfg->channel]) |= R_MTU_TIER_TGIEB_Msk;

    if ((MTU3_ADC_TGRA_COMPARE_MATCH_ENABLE == p_extend->adc_activation_setting) &&
        (MTU3_CHANNEL_8 != p_instance_ctrl->p_cfg->channel))
    {
        *((uint8_t *) p_instance_ctrl->p_reg +
          tier_ofs_addr[p_instance_ctrl->p_cfg->channel]) |= R_MTU_TIER_TTGE_Msk;
    }
    else
    {
        /* Do nothing. */
    }

#if defined(BSP_FEATURE_ICU_HAS_INTPMSEL_REG)
    if (p_instance_ctrl->p_cfg->cycle_end_irq >= 0)
    {
        R_BSP_IntCauseSelectionSet (FSP_IP_MTU3, p_instance_ctrl->p_cfg->channel, MTU3_TCIV);
    }

    if (p_extend->capture_a_irq >= 0)
    {
        R_BSP_IntCauseSelectionSet (FSP_IP_MTU3, p_instance_ctrl->p_cfg->channel, MTU3_TGIA);
    }
    
    if (p_extend->capture_b_irq >= 0)
    {
        R_BSP_IntCauseSelectionSet (FSP_IP_MTU3, p_instance_ctrl->p_cfg->channel, MTU3_TGIB);
    }
#endif

    r_mtu3_enable_irq(p_instance_ctrl->p_cfg->cycle_end_irq, p_instance_ctrl->p_cfg->cycle_end_ipl, p_instance_ctrl);
    r_mtu3_enable_irq(p_extend->capture_a_irq, p_extend->capture_a_ipl, p_instance_ctrl);
    r_mtu3_enable_irq(p_extend->capture_b_irq, p_extend->capture_b_ipl, p_instance_ctrl);
}

/*******************************************************************************************************************//**
 * Calculates clock frequency of MTU3 counter.  Divides MTU3 clock by MTU3 clock divisor.
 *
 * @param[in]  p_instance_ctrl           Instance control block
 * @param[in]  ch_addr_ofs               Offset address of register
 *
 * @return     Clock frequency of the MTU3 counter.
 **********************************************************************************************************************/
static uint32_t mtu3_clock_frequency_get (mtu3_instance_ctrl_t * const p_instance_ctrl, uint32_t ch_addr_ofs)
{
    uint32_t pclk_freq_hz;
    uint16_t pclk_divisor;
    uint8_t  tpsc;
    uint8_t  tcr_tpsc;
    uint8_t  tcr2_tpsc;

    /* Get frequency division from TCR and TCR2. */
    tcr_tpsc =
        *((uint8_t *) p_instance_ctrl->p_reg + tcr_ofs_addr[p_instance_ctrl->p_cfg->channel] + ch_addr_ofs);
    tcr2_tpsc =
        *((uint8_t *) p_instance_ctrl->p_reg + tcr2_ofs_addr[p_instance_ctrl->p_cfg->channel] + ch_addr_ofs);

    tcr_tpsc  &= R_MTU_TCR_TPSC_Msk;
    tcr2_tpsc &= R_MTU_TCR2_TPSC2_Msk;

    /* If TCR2.TPSC2 is 1 or greater, get from the array that stores the TCR2.TPSC2 settings. */
    if (tcr2_tpsc >= 1U)
    {
        /* Get from the 8th array */
        tpsc = (uint8_t) ((tcr2_tpsc + MTU3_TPSC_OFS_ARRAY) - 1U);
    }
    else
    {
        tpsc = tcr_tpsc;
    }

    pclk_divisor = mtu3_clk_div[p_instance_ctrl->p_cfg->channel][tpsc];

    pclk_freq_hz = R_FSP_SystemClockHzGet(FSP_PRIV_CLOCK_P0CLK);

    return pclk_freq_hz / pclk_divisor;
}

/*******************************************************************************************************************//**
 * Calls user callback.
 *
 * @param[in]     p_ctrl     Pointer to MTU3 instance control block
 * @param[in]     event      Event code
 * @param[in]     capture    Event capture counts (if applicable)
 **********************************************************************************************************************/
static void r_mtu3_call_callback (mtu3_instance_ctrl_t * p_ctrl, timer_event_t event, uint32_t capture)
{
    timer_callback_args_t args;

    /* Store callback arguments in memory provided by user if available.  This allows callback arguments to be
     * stored in non-secure memory so they can be accessed by a non-secure callback function. */
    timer_callback_args_t * p_args = p_ctrl->p_callback_memory;
    if (NULL == p_args)
    {
        /* Store on stack */
        p_args = &args;
    }
    else
    {
        /* Save current arguments on the stack in case this is a nested interrupt. */
        args = *p_args;
    }

    p_args->event     = event;
    p_args->capture   = capture;
    p_args->p_context = p_ctrl->p_context;

    /* If the project is not Trustzone Secure, then it will never need to change security state in order to call the callback. */
    p_ctrl->p_callback(p_args);

    if (NULL != p_ctrl->p_callback_memory)
    {
        /* Restore callback memory in case this is a nested interrupt. */
        *p_ctrl->p_callback_memory = args;
    }
}

/*******************************************************************************************************************//**
 * Common processing for input capture interrupt.
 *
 * @param[in]  event  Which input capture event occurred
 **********************************************************************************************************************/
static void r_mtu3_ccmp_common_isr (mtu3_prv_capture_event_t event)
{
    /* Save context if RTOS is used */
    FSP_CONTEXT_SAVE

    IRQn_Type irq     = R_FSP_CurrentIrqGet();
    uint32_t  counter = 0U;

    /* Recover ISR context saved in open. */
    mtu3_instance_ctrl_t * p_instance_ctrl = (mtu3_instance_ctrl_t *) R_FSP_IsrContextGet(irq);

    /* Get captured value. */
    if (event == MTU3_PRV_CAPTURE_EVENT_A)
    {
        if (MTU3_CHANNEL_8 == p_instance_ctrl->p_cfg->channel)
        {
            counter =
                *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_instance_ctrl->p_cfg->channel]);
        }
        else
        {
            counter =
                *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_instance_ctrl->p_cfg->channel]);
        }
    }
    else if (event == MTU3_PRV_CAPTURE_EVENT_B)
    {
        if (MTU3_CHANNEL_8 == p_instance_ctrl->p_cfg->channel)
        {
            counter =
                *(uint32_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                               MTU3_TGRB_D_OFFSET_LONG);
        }
        else
        {
            counter =
                *(uint16_t *) ((uint8_t *) p_instance_ctrl->p_reg + tgra_ofs_addr[p_instance_ctrl->p_cfg->channel] +
                               MTU3_TGRB_D_OFFSET_WORD);
        }
    }
    else
    {
        /* Do nothing. */
    }

    /* If One-Shot mode is selected, stop the timer since period has expired. */
    if (TIMER_MODE_ONE_SHOT == p_instance_ctrl->p_cfg->mode)
    {
        /* First interrupt. */
        if (false == p_instance_ctrl->oneshot_interrupt_flag)
        {
            p_instance_ctrl->oneshot_interrupt_flag = true;
        }
        /* Second interrupt. */
        else
        {
            mtu3_stop_timer(p_instance_ctrl);
            mtu3_set_count(p_instance_ctrl, 0U);
            p_instance_ctrl->oneshot_interrupt_flag = false;
        }
    }

    /* If a callback is provided, then call it with the captured counter value. */
    if (NULL != p_instance_ctrl->p_callback)
    {
        /* Second interrupt in One-Shot mode. */
        if ((false == p_instance_ctrl->oneshot_interrupt_flag) &&
            (TIMER_MODE_ONE_SHOT == p_instance_ctrl->p_cfg->mode))
        {
            r_mtu3_call_callback(p_instance_ctrl, TIMER_EVENT_CYCLE_END, counter);
        }
        else
        {
            r_mtu3_call_callback(p_instance_ctrl,
                                 (timer_event_t) ((uint32_t) TIMER_EVENT_CAPTURE_A + (uint32_t) event),
                                 counter);
        }
    }

    /* Restore context if RTOS is used */
    FSP_CONTEXT_RESTORE
}

/*******************************************************************************************************************//**
 * Calls callback if one was provided in the open function.
 **********************************************************************************************************************/
void mtu3_counter_overflow_isr (void)
{
    /* Save context if RTOS is used */
    FSP_CONTEXT_SAVE

    /* Get the interrupt vector number value */
    IRQn_Type irq = R_FSP_CurrentIrqGet();

    /* Clear pending IRQ to make sure it doesn't fire again after exiting */
    R_BSP_IrqStatusClear(irq);

    /* Recover ISR context saved in open. */
    mtu3_instance_ctrl_t * p_instance_ctrl = (mtu3_instance_ctrl_t *) R_FSP_IsrContextGet(irq);

    if (NULL != p_instance_ctrl->p_callback)
    {
        r_mtu3_call_callback(p_instance_ctrl, TIMER_EVENT_CYCLE_END, 0);
    }

    /* Restore context if RTOS is used */
    FSP_CONTEXT_RESTORE
}

/*******************************************************************************************************************//**
 * Interrupt triggered by a capture A source.
 *
 * Calls callback if one was provided in the open function.
 **********************************************************************************************************************/
void mtu3_capture_compare_a_isr (void)
{
    r_mtu3_ccmp_common_isr(MTU3_PRV_CAPTURE_EVENT_A);
}

/*******************************************************************************************************************//**
 * Interrupt triggered by a capture B source.
 *
 * Calls callback if one was provided in the open function.
 **********************************************************************************************************************/
void mtu3_capture_compare_b_isr (void)
{
    r_mtu3_ccmp_common_isr(MTU3_PRV_CAPTURE_EVENT_B);
}
