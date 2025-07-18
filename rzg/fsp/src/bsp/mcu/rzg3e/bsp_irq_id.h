/*
* Copyright (c) 2020 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/**********************************************************************************************************************
 * File Name    : bsp_irq_id.h
 * Version      : 1.00
 * Description  : bsp_irq_id header
 *********************************************************************************************************************/

#ifndef BSP_IRQ_ID_H
#define BSP_IRQ_ID_H

/**********************************************************************************************************************
 * Macro definitions
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Typedef definitions
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Exported global variables
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Exported global functions (to be accessed by other files)
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * @addtogroup BSP_MPU_RZG3E
 * @{
 *********************************************************************************************************************/

typedef enum IRQn
{
    Reset_IRQn            = -15,
    NonMaskableInt_IRQn   = -14,
    HardFault_IRQn        = -13,
    MemoryManagement_IRQn = -12,
    BusFault_IRQn         = -11,
    UsageFault_IRQn       = -10,
    SecureFault_IRQn      = -9,
    SVCall_IRQn           = -5,
    DebugMonitor_IRQn     = -4,
    PendSV_IRQn           = -2,
    SysTick_IRQn          = -1,

    NMI_IRQn              = 0,         /* IRQ No:0,   NMI */
    GPIO_IRQ0_IRQn        = 1,         /* IRQ No:1,   IRQ0 */
    GPIO_IRQ1_IRQn        = 2,         /* IRQ No:2,   IRQ1 */
    GPIO_IRQ2_IRQn        = 3,         /* IRQ No:3,   IRQ2 */
    GPIO_IRQ3_IRQn        = 4,         /* IRQ No:4,   IRQ3 */
    GPIO_IRQ4_IRQn        = 5,         /* IRQ No:5,   IRQ4 */
    GPIO_IRQ5_IRQn        = 6,         /* IRQ No:6,   IRQ5 */
    GPIO_IRQ6_IRQn        = 7,         /* IRQ No:7,   IRQ6 */
    GPIO_IRQ7_IRQn        = 8,         /* IRQ No:8,   IRQ7 */
    GPIO_IRQ8_IRQn        = 9,         /* IRQ No:9,   IRQ8 */
    GPIO_IRQ9_IRQn        = 10,        /* IRQ No:10,  IRQ9 */
    GPIO_IRQ10_IRQn       = 11,        /* IRQ No:11,  IRQ10 */
    GPIO_IRQ11_IRQn       = 12,        /* IRQ No:12,  IRQ11 */
    GPIO_IRQ12_IRQn       = 13,        /* IRQ No:13,  IRQ12 */
    GPIO_IRQ13_IRQn       = 14,        /* IRQ No:14,  IRQ13 */
    GPIO_IRQ14_IRQn       = 15,        /* IRQ No:15,  IRQ14 */
    GPIO_IRQ15_IRQn       = 16,        /* IRQ No:16,  IRQ15 */
    GTM0_OSTM0INT_IRQn    = 17,        /* IRQ No:17,  OSTM0TINT */
    GTM1_OSTM1INT_IRQn    = 18,        /* IRQ No:18,  OSTM1TINT */
    GTM2_OSTM2INT_IRQn    = 19,        /* IRQ No:19,  OSTM2TINT */
    GTM3_OSTM3INT_IRQn    = 20,        /* IRQ No:20,  OSTM3TINT */
    GTM4_OSTM4INT_IRQn    = 21,        /* IRQ No:21,  OSTM4TINT */
    GTM5_OSTM5INT_IRQn    = 22,        /* IRQ No:22,  OSTM5TINT */
    GTM6_OSTM6INT_IRQn    = 23,        /* IRQ No:23,  OSTM6TINT */
    GTM7_OSTM7INT_IRQn    = 24,        /* IRQ No:24,  OSTM7TINT */
    DMAC_B1_DMAINT0_IRQn  = 25,        /* IRQ No:25, DMAC1_DMAINT0 */
    DMAC_B1_DMAINT1_IRQn  = 26,        /* IRQ No:26, DMAC1_DMAINT1 */
    DMAC_B1_DMAINT2_IRQn  = 27,        /* IRQ No:27, DMAC1_DMAINT2 */
    DMAC_B1_DMAINT3_IRQn  = 28,        /* IRQ No:28, DMAC1_DMAINT3 */
    DMAC_B1_DMAINT4_IRQn  = 29,        /* IRQ No:29, DMAC1_DMAINT4 */
    DMAC_B1_DMAINT5_IRQn  = 30,        /* IRQ No:30, DMAC1_DMAINT5 */
    DMAC_B1_DMAINT6_IRQn  = 31,        /* IRQ No:31, DMAC1_DMAINT6 */
    DMAC_B1_DMAINT7_IRQn  = 32,        /* IRQ No:32, DMAC1_DMAINT7 */
    DMAC_B1_DMAINT8_IRQn  = 33,        /* IRQ No:33, DMAC1_DMAINT8 */
    DMAC_B1_DMAINT9_IRQn  = 34,        /* IRQ No:34, DMAC1_DMAINT9 */
    DMAC_B1_DMAINT10_IRQn = 35,        /* IRQ No:35, DMAC1_DMAINT10 */
    DMAC_B1_DMAINT11_IRQn = 36,        /* IRQ No:36, DMAC1_DMAINT11 */
    DMAC_B1_DMAINT12_IRQn = 37,        /* IRQ No:37, DMAC1_DMAINT12 */
    DMAC_B1_DMAINT13_IRQn = 38,        /* IRQ No:38, DMAC1_DMAINT13 */
    DMAC_B1_DMAINT14_IRQn = 39,        /* IRQ No:39, DMAC1_DMAINT14 */
    DMAC_B1_DMAINT15_IRQn = 40,        /* IRQ No:40, DMAC1_DMAINT15 */
    DMAC_B2_DMAINT0_IRQn  = 41,        /* IRQ No:41, DMAC2_DMAINT0 */
    DMAC_B2_DMAINT1_IRQn  = 42,        /* IRQ No:42, DMAC2_DMAINT1 */
    DMAC_B2_DMAINT2_IRQn  = 43,        /* IRQ No:43, DMAC2_DMAINT2 */
    DMAC_B2_DMAINT3_IRQn  = 44,        /* IRQ No:44, DMAC2_DMAINT3 */
    DMAC_B2_DMAINT4_IRQn  = 45,        /* IRQ No:45, DMAC2_DMAINT4 */
    DMAC_B2_DMAINT5_IRQn  = 46,        /* IRQ No:46, DMAC2_DMAINT5 */
    DMAC_B2_DMAINT6_IRQn  = 47,        /* IRQ No:47, DMAC2_DMAINT6 */
    DMAC_B2_DMAINT7_IRQn  = 48,        /* IRQ No:48, DMAC2_DMAINT7 */
    DMAC_B2_DMAINT8_IRQn  = 49,        /* IRQ No:49, DMAC2_DMAINT8 */
    DMAC_B2_DMAINT9_IRQn  = 50,        /* IRQ No:50, DMAC2_DMAINT9 */
    DMAC_B2_DMAINT10_IRQn = 51,        /* IRQ No:51, DMAC2_DMAINT10 */
    DMAC_B2_DMAINT11_IRQn = 52,        /* IRQ No:52, DMAC2_DMAINT11 */
    DMAC_B2_DMAINT12_IRQn = 53,        /* IRQ No:53, DMAC2_DMAINT12 */
    DMAC_B2_DMAINT13_IRQn = 54,        /* IRQ No:54, DMAC2_DMAINT13 */
    DMAC_B2_DMAINT14_IRQn = 55,        /* IRQ No:55, DMAC2_DMAINT14 */
    DMAC_B2_DMAINT15_IRQn = 56,        /* IRQ No:56, DMAC2_DMAINT15 */
    DMAC_B3_DMAINT0_IRQn  = 57,        /* IRQ No:57, DMAC3_DMAINT0 */
    DMAC_B3_DMAINT1_IRQn  = 58,        /* IRQ No:58, DMAC3_DMAINT1 */
    DMAC_B3_DMAINT2_IRQn  = 59,        /* IRQ No:59, DMAC3_DMAINT2 */
    DMAC_B3_DMAINT3_IRQn  = 60,        /* IRQ No:60, DMAC3_DMAINT3 */
    DMAC_B3_DMAINT4_IRQn  = 61,        /* IRQ No:61, DMAC3_DMAINT4 */
    DMAC_B3_DMAINT5_IRQn  = 62,        /* IRQ No:62, DMAC3_DMAINT5 */
    DMAC_B3_DMAINT6_IRQn  = 63,        /* IRQ No:63, DMAC3_DMAINT6 */
    DMAC_B3_DMAINT7_IRQn  = 64,        /* IRQ No:64, DMAC3_DMAINT7 */
    DMAC_B3_DMAINT8_IRQn  = 65,        /* IRQ No:65, DMAC3_DMAINT8 */
    DMAC_B3_DMAINT9_IRQn  = 66,        /* IRQ No:66, DMAC3_DMAINT9 */
    DMAC_B3_DMAINT10_IRQn = 67,        /* IRQ No:67, DMAC3_DMAINT10 */
    DMAC_B3_DMAINT11_IRQn = 68,        /* IRQ No:68, DMAC3_DMAINT11 */
    DMAC_B3_DMAINT12_IRQn = 69,        /* IRQ No:69, DMAC3_DMAINT12 */
    DMAC_B3_DMAINT13_IRQn = 70,        /* IRQ No:70, DMAC3_DMAINT13 */
    DMAC_B3_DMAINT14_IRQn = 71,        /* IRQ No:71, DMAC3_DMAINT14 */
    DMAC_B3_DMAINT15_IRQn = 72,        /* IRQ No:72, DMAC3_DMAINT15 */
    DMAC_B4_DMAINT0_IRQn  = 73,        /* IRQ No:73, DMAC4_DMAINT0 */
    DMAC_B4_DMAINT1_IRQn  = 74,        /* IRQ No:74, DMAC4_DMAINT1 */
    DMAC_B4_DMAINT2_IRQn  = 75,        /* IRQ No:75, DMAC4_DMAINT2 */
    DMAC_B4_DMAINT3_IRQn  = 76,        /* IRQ No:76, DMAC4_DMAINT3 */
    DMAC_B4_DMAINT4_IRQn  = 77,        /* IRQ No:77, DMAC4_DMAINT4 */
    DMAC_B4_DMAINT5_IRQn  = 78,        /* IRQ No:78, DMAC4_DMAINT5 */
    DMAC_B4_DMAINT6_IRQn  = 79,        /* IRQ No:79, DMAC4_DMAINT6 */
    DMAC_B4_DMAINT7_IRQn  = 80,        /* IRQ No:80, DMAC4_DMAINT7 */
    DMAC_B4_DMAINT8_IRQn  = 81,        /* IRQ No:81, DMAC4_DMAINT8 */
    DMAC_B4_DMAINT9_IRQn  = 82,        /* IRQ No:82, DMAC4_DMAINT9 */
    DMAC_B4_DMAINT10_IRQn = 83,        /* IRQ No:83, DMAC4_DMAINT10 */
    DMAC_B4_DMAINT11_IRQn = 84,        /* IRQ No:84, DMAC4_DMAINT11 */
    DMAC_B4_DMAINT12_IRQn = 85,        /* IRQ No:85, DMAC4_DMAINT12 */
    DMAC_B4_DMAINT13_IRQn = 86,        /* IRQ No:86, DMAC4_DMAINT13 */
    DMAC_B4_DMAINT14_IRQn = 87,        /* IRQ No:87, DMAC4_DMAINT14 */
    DMAC_B4_DMAINT15_IRQn = 88,        /* IRQ No:88, DMAC4_DMAINT15 */
    DMAC_B0_DMAINT0_IRQn  = 89,        /* IRQ No:89, DMAC0_DMAINT0 */
    DMAC_B0_DMAINT1_IRQn  = 90,        /* IRQ No:90, DMAC0_DMAINT1 */
    DMAC_B0_DMAINT2_IRQn  = 91,        /* IRQ No:91, DMAC0_DMAINT2 */
    DMAC_B0_DMAINT3_IRQn  = 92,        /* IRQ No:92, DMAC0_DMAINT3 */
    DMAC_B0_DMAINT4_IRQn  = 93,        /* IRQ No:93, DMAC0_DMAINT4 */
    DMAC_B0_DMAINT5_IRQn  = 94,        /* IRQ No:94, DMAC0_DMAINT5 */
    DMAC_B0_DMAINT6_IRQn  = 95,        /* IRQ No:95, DMAC0_DMAINT6 */
    DMAC_B0_DMAINT7_IRQn  = 96,        /* IRQ No:96, DMAC0_DMAINT7 */
    DMAC_B0_DMAINT8_IRQn  = 97,        /* IRQ No:97, DMAC0_DMAINT8 */
    DMAC_B0_DMAINT9_IRQn  = 98,        /* IRQ No:98, DMAC0_DMAINT9 */
    DMAC_B0_DMAINT10_IRQn = 99,        /* IRQ No:99, DMAC0_DMAINT10 */
    DMAC_B0_DMAINT11_IRQn = 100,       /* IRQ No:100, DMAC0_DMAINT11 */
    DMAC_B0_DMAINT12_IRQn = 101,       /* IRQ No:101, DMAC0_DMAINT12 */
    DMAC_B0_DMAINT13_IRQn = 102,       /* IRQ No:102, DMAC0_DMAINT13 */
    DMAC_B0_DMAINT14_IRQn = 103,       /* IRQ No:103, DMAC0_DMAINT14 */
    DMAC_B0_DMAINT15_IRQn = 104,       /* IRQ No:104, DMAC0_DMAINT15 */
    SPI0_IDLE_IRQn        = 105,       /* IRQ No:105, SPII0 */
    SPI0_ERI_IRQn         = 106,       /* IRQ No:106, SPEI0 */
    SPI0_CE_IRQn          = 107,       /* IRQ No:107, SPCEND0 */
    SPI1_IDLE_IRQn        = 108,       /* IRQ No:108, SPII1 */
    SPI1_ERI_IRQn         = 109,       /* IRQ No:109, SPEI1 */
    SPI1_CE_IRQn          = 110,       /* IRQ No:110, SPCEND1 */
    SPI2_IDLE_IRQn        = 111,       /* IRQ No:111, SPII2 */
    SPI2_ERI_IRQn         = 112,       /* IRQ No:112, SPEI2 */
    SPI2_CE_IRQn          = 113,       /* IRQ No:113, SPCEND2 */
    SCI0_ERI_IRQn         = 114,       /* IRQ No:114, ERI0 */
    SCI0_RXI_IRQn         = 115,       /* IRQ No:115, RXI0 */
    SCI0_TXI_IRQn         = 116,       /* IRQ No:116, TXI0 */
    SCI0_TEI_IRQn         = 117,       /* IRQ No:117, TEI0 */
    SCI0_AED_IRQn         = 118,       /* IRQ No:118, AED0 */
    SCI0_BFD_IRQn         = 119,       /* IRQ No:118, BFD0 */
    SCI1_ERI_IRQn         = 120,       /* IRQ No:120, ERI1 */
    SCI1_RXI_IRQn         = 121,       /* IRQ No:121, RXI1 */
    SCI1_TXI_IRQn         = 122,       /* IRQ No:122, TXI1 */
    SCI1_TEI_IRQn         = 123,       /* IRQ No:123, TEI1 */
    SCI1_AED_IRQn         = 124,       /* IRQ No:124, AED1 */
    SCI1_BFD_IRQn         = 125,       /* IRQ No:125, BFD1 */
    SCI2_ERI_IRQn         = 126,       /* IRQ No:126, ERI2 */
    SCI2_RXI_IRQn         = 127,       /* IRQ No:127, RXI2 */
    SCI2_TXI_IRQn         = 128,       /* IRQ No:128, TXI2 */
    SCI2_TEI_IRQn         = 129,       /* IRQ No:129, TEI2 */
    SCI2_AED_IRQn         = 130,       /* IRQ No:130, AED2 */
    SCI2_BFD_IRQn         = 131,       /* IRQ No:131, BFD2 */
    SCI3_ERI_IRQn         = 132,       /* IRQ No:132, ERI3 */
    SCI3_RXI_IRQn         = 133,       /* IRQ No:133, RXI3 */
    SCI3_TXI_IRQn         = 134,       /* IRQ No:134, TXI3 */
    SCI3_TEI_IRQn         = 135,       /* IRQ No:135, TEI3 */
    SCI3_AED_IRQn         = 136,       /* IRQ No:136, AED3 */
    SCI3_BFD_IRQn         = 137,       /* IRQ No:137, BFD3 */
    SCI4_ERI_IRQn         = 138,       /* IRQ No:138, ERI4 */
    SCI4_RXI_IRQn         = 139,       /* IRQ No:139, RXI4 */
    SCI4_TXI_IRQn         = 140,       /* IRQ No:140, TXI4 */
    SCI4_TEI_IRQn         = 141,       /* IRQ No:141, TEI4 */
    SCI4_AED_IRQn         = 142,       /* IRQ No:142, AED4 */
    SCI4_BFD_IRQn         = 143,       /* IRQ No:143, BFD4 */
    SCI5_ERI_IRQn         = 144,       /* IRQ No:144, ERI5 */
    SCI5_RXI_IRQn         = 145,       /* IRQ No:145, RXI5 */
    SCI5_TXI_IRQn         = 146,       /* IRQ No:146, TXI5 */
    SCI5_TEI_IRQn         = 147,       /* IRQ No:147, TEI5 */
    SCI5_AED_IRQn         = 148,       /* IRQ No:148, AED5 */
    SCI5_BFD_IRQn         = 149,       /* IRQ No:149, BFD5 */
    SCI6_ERI_IRQn         = 150,       /* IRQ No:150, ERI6 */
    SCI6_RXI_IRQn         = 151,       /* IRQ No:151, RXI6 */
    SCI6_TXI_IRQn         = 152,       /* IRQ No:152, TXI6 */
    SCI6_TEI_IRQn         = 153,       /* IRQ No:153, TEI6 */
    SCI6_AED_IRQn         = 154,       /* IRQ No:154, AED6 */
    SCI6_BFD_IRQn         = 155,       /* IRQ No:155, BFD6 */
    SCI7_ERI_IRQn         = 156,       /* IRQ No:156, ERI7 */
    SCI7_RXI_IRQn         = 157,       /* IRQ No:157, RXI7 */
    SCI7_TXI_IRQn         = 158,       /* IRQ No:158, TXI7 */
    SCI7_TEI_IRQn         = 159,       /* IRQ No:159, TEI7 */
    SCI7_AED_IRQn         = 160,       /* IRQ No:160, AED7 */
    SCI7_BFD_IRQn         = 161,       /* IRQ No:161, BFD7 */
    SCI8_ERI_IRQn         = 162,       /* IRQ No:162, ERI8 */
    SCI8_RXI_IRQn         = 163,       /* IRQ No:163, RXI8 */
    SCI8_TXI_IRQn         = 164,       /* IRQ No:164, TXI8 */
    SCI8_TEI_IRQn         = 165,       /* IRQ No:165, TEI8 */
    SCI8_AED_IRQn         = 166,       /* IRQ No:166, AED8 */
    SCI8_BFD_IRQn         = 167,       /* IRQ No:167, BFD8 */
    SCI9_ERI_IRQn         = 168,       /* IRQ No:168, ERI9 */
    SCI9_RXI_IRQn         = 169,       /* IRQ No:169, RXI9 */
    SCI9_TXI_IRQn         = 170,       /* IRQ No:170, TXI9 */
    SCI9_TEI_IRQn         = 171,       /* IRQ No:171, TEI9 */
    SCI9_AED_IRQn         = 172,       /* IRQ No:172, AED9 */
    SCI9_BFD_IRQn         = 173,       /* IRQ No:173, BFD9 */
    RIIC0_TEI_IRQn        = 174,       /* IRQ No:174, INTRIICTEI0 */
    RIIC0_NAKI_IRQn       = 175,       /* IRQ No:175, INTRIICNAKI0 */
    RIIC0_SPI_IRQn        = 176,       /* IRQ No:176, INTRIICSPI0 */
    RIIC0_STI_IRQn        = 177,       /* IRQ No:177, INTRIICSTI0 */
    RIIC0_ALI_IRQn        = 178,       /* IRQ No:178, INTRIICALI0 */
    RIIC0_TMOI_IRQn       = 179,       /* IRQ No:179, INTRIICTMOI0 */
    RIIC1_TEI_IRQn        = 180,       /* IRQ No:180, INTRIICTEI1 */
    RIIC1_NAKI_IRQn       = 181,       /* IRQ No:181, INTRIICNAKI1 */
    RIIC1_SPI_IRQn        = 182,       /* IRQ No:182, INTRIICSPI1 */
    RIIC1_STI_IRQn        = 183,       /* IRQ No:183, INTRIICSTI1 */
    RIIC1_ALI_IRQn        = 184,       /* IRQ No:184, INTRIICALI1 */
    RIIC1_TMOI_IRQn       = 185,       /* IRQ No:185, INTRIICTMOI1 */
    RIIC2_TEI_IRQn        = 186,       /* IRQ No:186, INTRIICTEI2 */
    RIIC2_NAKI_IRQn       = 187,       /* IRQ No:187, INTRIICNAKI2 */
    RIIC2_SPI_IRQn        = 188,       /* IRQ No:188, INTRIICSPI2 */
    RIIC2_STI_IRQn        = 189,       /* IRQ No:189, INTRIICSTI2 */
    RIIC2_ALI_IRQn        = 190,       /* IRQ No:190, INTRIICALI2 */
    RIIC2_TMOI_IRQn       = 191,       /* IRQ No:191, INTRIICTMOI2 */
    RIIC3_TEI_IRQn        = 192,       /* IRQ No:192, INTRIICTEI3 */
    RIIC3_NAKI_IRQn       = 193,       /* IRQ No:193, INTRIICNAKI3 */
    RIIC3_SPI_IRQn        = 194,       /* IRQ No:194, INTRIICSPI3 */
    RIIC3_STI_IRQn        = 195,       /* IRQ No:195, INTRIICSTI3 */
    RIIC3_ALI_IRQn        = 196,       /* IRQ No:196, INTRIICALI3 */
    RIIC3_TMOI_IRQn       = 197,       /* IRQ No:197, INTRIICTMOI3 */
    RIIC4_TEI_IRQn        = 198,       /* IRQ No:198, INTRIICTEI4 */
    RIIC4_NAKI_IRQn       = 199,       /* IRQ No:199, INTRIICNAKI4 */
    RIIC4_SPI_IRQn        = 200,       /* IRQ No:200, INTRIICSPI4 */
    RIIC4_STI_IRQn        = 201,       /* IRQ No:201, INTRIICSTI4 */
    RIIC4_ALI_IRQn        = 202,       /* IRQ No:202, INTRIICALI4 */
    RIIC4_TMOI_IRQn       = 203,       /* IRQ No:203, INTRIICTMOI4 */
    RIIC5_TEI_IRQn        = 204,       /* IRQ No:204, INTRIICTEI5 */
    RIIC5_NAKI_IRQn       = 205,       /* IRQ No:205, INTRIICNAKI5 */
    RIIC5_SPI_IRQn        = 206,       /* IRQ No:206, INTRIICSPI5 */
    RIIC5_STI_IRQn        = 207,       /* IRQ No:207, INTRIICSTI5 */
    RIIC5_ALI_IRQn        = 208,       /* IRQ No:208, INTRIICALI5 */
    RIIC5_TMOI_IRQn       = 209,       /* IRQ No:209, INTRIICTMOI5 */
    RIIC6_TEI_IRQn        = 210,       /* IRQ No:210, INTRIICTEI6 */
    RIIC6_NAKI_IRQn       = 211,       /* IRQ No:211, INTRIICNAKI6 */
    RIIC6_SPI_IRQn        = 212,       /* IRQ No:212, INTRIICSPI6 */
    RIIC6_STI_IRQn        = 213,       /* IRQ No:213, INTRIICSTI6 */
    RIIC6_ALI_IRQn        = 214,       /* IRQ No:214, INTRIICALI6 */
    RIIC6_TMOI_IRQn       = 215,       /* IRQ No:215, INTRIICTMOI6 */
    RIIC7_TEI_IRQn        = 216,       /* IRQ No:216, INTRIICTEI7 */
    RIIC7_NAKI_IRQn       = 217,       /* IRQ No:217, INTRIICNAKI7 */
    RIIC7_SPI_IRQn        = 218,       /* IRQ No:218, INTRIICSPI7 */
    RIIC7_STI_IRQn        = 219,       /* IRQ No:219, INTRIICSTI7 */
    RIIC7_ALI_IRQn        = 220,       /* IRQ No:220, INTRIICALI7 */
    RIIC7_TMOI_IRQn       = 221,       /* IRQ No:221, INTRIICTMOI7 */
    RIIC8_TEI_IRQn        = 222,       /* IRQ No:222, INTRIICTEI8 */
    RIIC8_NAKI_IRQn       = 223,       /* IRQ No:223, INTRIICNAKI8 */
    RIIC8_SPI_IRQn        = 224,       /* IRQ No:224, INTRIICSPI8 */
    RIIC8_STI_IRQn        = 225,       /* IRQ No:225, INTRIICSTI8 */
    RIIC8_ALI_IRQn        = 226,       /* IRQ No:226, INTRIICALI8 */
    RIIC8_TMOI_IRQn       = 227,       /* IRQ No:227, INTRIICTMOI8 */
    XSPI_PULSE_IRQn       = 228,       /* IRQ No:228, Interrupt pulse signal */
    XSPI_ERR_PULSE_IRQn   = 229,       /* IRQ No:229, Interrupt pulse signal by error */
                                       /* IRQ No:230,  Reserved */
                                       /* IRQ No:231,  Reserved */
    PDM0_DAT0_IRQn         = 232,      /* IRQ No:232, INT_PDM_DAT0 (Unit0) */
    PDM0_DAT1_IRQn         = 233,      /* IRQ No:233, INT_PDM_DAT1 (Unit0) */
    PDM0_DAT2_IRQn         = 234,      /* IRQ No:234, INT_PDM_DAT2 (Unit0) */
    PDM0_SDET_IRQn         = 235,      /* IRQ No:235, INT_PDM_SDET (Unit0) */
    PDM0_ERR0_IRQn         = 236,      /* IRQ No:236, INT_PDM_ERR0 (Unit0) */
    PDM0_ERR1_IRQn         = 237,      /* IRQ No:237, INT_PDM_ERR1 (Unit0) */
    PDM0_ERR2_IRQn         = 238,      /* IRQ No:238, INT_PDM_ERR2 (Unit0) */
    PDM1_DAT0_IRQn         = 239,      /* IRQ No:239, INT_PDM_DAT0 (Unit1) */
    PDM1_DAT1_IRQn         = 240,      /* IRQ No:240, INT_PDM_DAT1 (Unit1) */
    PDM1_DAT2_IRQn         = 241,      /* IRQ No:241, INT_PDM_DAT2 (Unit1) */
    PDM1_SDET_IRQn         = 242,      /* IRQ No:242, INT_PDM_SDET (Unit1) */
    PDM1_ERR0_IRQn         = 243,      /* IRQ No:243, INT_PDM_ERR0 (Unit1) */
    PDM1_ERR1_IRQn         = 244,      /* IRQ No:244, INT_PDM_ERR1 (Unit1) */
    PDM1_ERR2_IRQn         = 245,      /* IRQ No:245, INT_PDM_ERR2 (Unit1) */
    ADC0_ADA_COMPAI_N_IRQn = 246,      /* IRQ No:246, Window compare match (windowA) */
    ADC0_ADA_COMPBI_N_IRQn = 247,      /* IRQ No:247, Window compare match (windowB) */
                                       /* IRQ No:248, Reserved */
                                       /* IRQ No:249, Reserved */
    TSU_B1_S12TSUADI_IRQn    = 250,    /* IRQ No:250, S12TSUADI1 */
    TSU_B1_S12TSUADCMPI_IRQn = 251,    /* IRQ No:251, S12TSUADCMPI1 */
                                       /* IRQ No:252,  Reserved */
                                       /* IRQ No:253,  Reserved */
                                       /* IRQ No:254,  Reserved */
                                       /* IRQ No:255,  Reserved */
                                       /* IRQ No:256,  Reserved */
                                       /* IRQ No:257,  Reserved */
                                       /* IRQ No:258,  Reserved */
                                       /* IRQ No:259,  Reserved */
                                       /* IRQ No:260,  Reserved */
                                       /* IRQ No:261,  Reserved */
    ICU_SWINT_CM33_0_IRQn       = 262, /* IRQ No:262,  INT_CM33_0 */
    ICU_SWINT_CM33_1_IRQn       = 263, /* IRQ No:263,  INT_CM33_1 */
    ICU_SWINT_CM33_2_IRQn       = 264, /* IRQ No:264,  INT_CM33_2 */
    ICU_SWINT_CM33_3_IRQn       = 265, /* IRQ No:265,  INT_CM33_3 */
    ICU_ICUERR_CM33_IRQn        = 266, /* IRQ No:266,  ICU_Error_CM33 */
    CM33_CTIIRQ0_IRQn           = 267, /* IRQ No:267,  CTIIRQ[0] */
    CM33_CTIIRQ1_IRQn           = 268, /* IRQ No:268,  CTIIRQ[1] */
    CM33_FPIXC_IRQn             = 269, /* IRQ No:269,  FPIXC */
    CM33_FPIDC_IRQn             = 270, /* IRQ No:270,  FPIDC */
    CM33_FPOFC_IRQn             = 271, /* IRQ No:271,  FPOFC */
    CM33_FPUFC_IRQn             = 272, /* IRQ No:272,  FPUFC */
    CM33_FPDZC_IRQn             = 273, /* IRQ No:273,  FPDZC */
    CM33_FPIOC_IRQn             = 274, /* IRQ No:274,  FPIOC */
    CM33_ERRINT_BRG_CM33_C_IRQn = 275, /* IRQ No:275,  ERRINT_BRG_CM33_C */
    CM33_ERRINT_BRG_CM33_S_IRQn = 276, /* IRQ No:276,  ERRINT_BRG_CM33_S */
    DDR0_CONTROLL_INT_IRQn      = 277, /* IRQ No:277,  controller_int */
    DDR0_DWC_DDRPHY_INT_IRQn    = 278, /* IRQ No:278,  dwc_ddrphy_int_n */
                                       /* IRQ No:279,  Reserved */
                                       /* IRQ No:280,  Reserved */
    MHU_MSG5_S_IRQn       = 281,       /* IRQ No:281,  msg_ch5_s */
    MHU_MSG11_S_IRQn      = 282,       /* IRQ No:282,  msg_ch11_s */
    MHU_MSG17_S_IRQn      = 283,       /* IRQ No:283,  msg_ch17_s */
    MHU_MSG23_S_IRQn      = 284,       /* IRQ No:284,  msg_ch23_s */
    MHU_MSG29_S_IRQn      = 285,       /* IRQ No:285,  msg_ch29_s */
    MHU_MSG35_S_IRQn      = 286,       /* IRQ No:286,  msg_ch35_s */
    MHU_RSP5_S_IRQn       = 287,       /* IRQ No:287,  rsp_ch5_s */
    MHU_RSP11_S_IRQn      = 288,       /* IRQ No:288,  rsp_ch11_s */
    MHU_RSP17_S_IRQn      = 289,       /* IRQ No:289,  rsp_ch17_s */
    MHU_RSP23_S_IRQn      = 290,       /* IRQ No:290,  rsp_ch23_s */
    MHU_RSP29_S_IRQn      = 291,       /* IRQ No:291,  rsp_ch29_s */
    MHU_RSP35_S_IRQn      = 292,       /* IRQ No:292,  rsp_ch35_s */
    MHU_MSG5_NS_IRQn      = 293,       /* IRQ No:293,  msg_ch5_ns */
    MHU_MSG11_NS_IRQn     = 294,       /* IRQ No:294,  msg_ch11_ns */
    MHU_MSG17_NS_IRQn     = 295,       /* IRQ No:295,  msg_ch17_ns */
    MHU_MSG23_NS_IRQn     = 296,       /* IRQ No:296,  msg_ch23_ns */
    MHU_MSG29_NS_IRQn     = 297,       /* IRQ No:297,  msg_ch29_ns */
    MHU_MSG35_NS_IRQn     = 298,       /* IRQ No:298,  msg_ch35_ns */
    MHU_RSP5_NS_IRQn      = 299,       /* IRQ No:299,  rsp_ch5_ns */
    MHU_RSP11_NS_IRQn     = 300,       /* IRQ No:300,  rsp_ch11_ns */
    MHU_RSP17_NS_IRQn     = 301,       /* IRQ No:301,  rsp_ch17_ns */
    MHU_RSP23_NS_IRQn     = 302,       /* IRQ No:302,  rsp_ch23_ns */
    MHU_RSP29_NS_IRQn     = 303,       /* IRQ No:303,  rsp_ch29_ns */
    MHU_RSP35_NS_IRQn     = 304,       /* IRQ No:304,  rsp_ch35_ns */
    MHU_SW_MHU_INT2_IRQn  = 305,       /* IRQ No:305,  sw_mhu_int_2 */
    MHU_SW_MHU_INT5_IRQn  = 306,       /* IRQ No:306,  sw_mhu_int_5 */
    MHU_SW_MHU_INT8_IRQn  = 307,       /* IRQ No:307,  sw_mhu_int_8 */
    MHU_SW_MHU_INT11_IRQn = 308,       /* IRQ No:308,  sw_mhu_int_11 */
    MHU_SW_MHU_INT16_IRQn = 309,       /* IRQ No:309,  sw_mhu_int_16 */
    MHU_SW_MHU_INT21_IRQn = 310,       /* IRQ No:310,  sw_mhu_int_21 */
    GIC_FAULT_INT_IRQn    = 311,       /* IRQ No:311,  fault_int */
    GIC_ERR_INT_IRQn      = 312,       /* IRQ No:312,  err_int */
    GIC_PMU_INT_IRQn      = 313,       /* IRQ No:313,  pmu_int */

    /* IRQ No:314,  Reserved */
    /* IRQ No:315,  Reserved */
    /* IRQ No:316,  Reserved */
    /* IRQ No:317,  Reserved */
    /* IRQ No:318,  Reserved */
    /* IRQ No:319,  Reserved */
    /* IRQ No:320,  Reserved */
    /* IRQ No:321,  Reserved */
    /* IRQ No:322,  Reserved */
    /* IRQ No:323,  Reserved */
    /* IRQ No:324,  Reserved */
    /* IRQ No:325,  Reserved */
    /* IRQ No:326,  Reserved */
    /* IRQ No:327,  Reserved */
    /* IRQ No:328,  Reserved */
    /* IRQ No:329,  Reserved */
    /* IRQ No:330,  Reserved */
    /* IRQ No:331,  Reserved */
    /* IRQ No:332,  Reserved */
    /* IRQ No:333,  Reserved */
    /* IRQ No:334,  Reserved */
    /* IRQ No:335,  Reserved */
    /* IRQ No:336,  Reserved */
    /* IRQ No:337,  Reserved */
    /* IRQ No:338,  Reserved */
    /* IRQ No:339,  Reserved */
    /* IRQ No:340,  Reserved */
    /* IRQ No:341,  Reserved */
    /* IRQ No:342,  Reserved */
    /* IRQ No:343,  Reserved */
    /* IRQ No:344,  Reserved */
    /* IRQ No:345,  Reserved */
    /* IRQ No:346,  Reserved */
    /* IRQ No:347,  Reserved */
    /* IRQ No:348,  Reserved */
    /* IRQ No:349,  Reserved */
    /* IRQ No:350,  Reserved */
    /* IRQ No:351,  Reserved */
    /* IRQ No:352,  Reserved */
    SEL0_IRQn   = 353,                 /* IRQ No:353,  SELECT0 */
    SEL1_IRQn   = 354,                 /* IRQ No:354,  SELECT1 */
    SEL2_IRQn   = 355,                 /* IRQ No:355,  SELECT2 */
    SEL3_IRQn   = 356,                 /* IRQ No:356,  SELECT3 */
    SEL4_IRQn   = 357,                 /* IRQ No:357,  SELECT4 */
    SEL5_IRQn   = 358,                 /* IRQ No:358,  SELECT5 */
    SEL6_IRQn   = 359,                 /* IRQ No:359,  SELECT6 */
    SEL7_IRQn   = 360,                 /* IRQ No:360,  SELECT7 */
    SEL8_IRQn   = 361,                 /* IRQ No:361,  SELECT8 */
    SEL9_IRQn   = 362,                 /* IRQ No:362,  SELECT9 */
    SEL10_IRQn  = 363,                 /* IRQ No:363,  SELECT10 */
    SEL11_IRQn  = 364,                 /* IRQ No:364,  SELECT11 */
    SEL12_IRQn  = 365,                 /* IRQ No:365,  SELECT12 */
    SEL13_IRQn  = 366,                 /* IRQ No:366,  SELECT13 */
    SEL14_IRQn  = 367,                 /* IRQ No:367,  SELECT14 */
    SEL15_IRQn  = 368,                 /* IRQ No:368,  SELECT15 */
    SEL16_IRQn  = 369,                 /* IRQ No:369,  SELECT16 */
    SEL17_IRQn  = 370,                 /* IRQ No:370,  SELECT17 */
    SEL18_IRQn  = 371,                 /* IRQ No:371,  SELECT18 */
    SEL19_IRQn  = 372,                 /* IRQ No:372,  SELECT19 */
    SEL20_IRQn  = 373,                 /* IRQ No:373,  SELECT20 */
    SEL21_IRQn  = 374,                 /* IRQ No:374,  SELECT21 */
    SEL22_IRQn  = 375,                 /* IRQ No:375,  SELECT22 */
    SEL23_IRQn  = 376,                 /* IRQ No:376,  SELECT23 */
    SEL24_IRQn  = 377,                 /* IRQ No:377,  SELECT24 */
    SEL25_IRQn  = 378,                 /* IRQ No:378,  SELECT25 */
    SEL26_IRQn  = 379,                 /* IRQ No:379,  SELECT26 */
    SEL27_IRQn  = 380,                 /* IRQ No:380,  SELECT27 */
    SEL28_IRQn  = 381,                 /* IRQ No:381,  SELECT28 */
    SEL29_IRQn  = 382,                 /* IRQ No:382,  SELECT29 */
    SEL30_IRQn  = 383,                 /* IRQ No:383,  SELECT30 */
    SEL31_IRQn  = 384,                 /* IRQ No:384,  SELECT31 */
    SEL32_IRQn  = 385,                 /* IRQ No:385,  SELECT32 */
    SEL33_IRQn  = 386,                 /* IRQ No:386,  SELECT33 */
    SEL34_IRQn  = 387,                 /* IRQ No:387,  SELECT34 */
    SEL35_IRQn  = 388,                 /* IRQ No:388,  SELECT35 */
    SEL36_IRQn  = 389,                 /* IRQ No:389,  SELECT36 */
    SEL37_IRQn  = 390,                 /* IRQ No:390,  SELECT37 */
    SEL38_IRQn  = 391,                 /* IRQ No:391,  SELECT38 */
    SEL39_IRQn  = 392,                 /* IRQ No:392,  SELECT39 */
    SEL40_IRQn  = 393,                 /* IRQ No:393,  SELECT40 */
    SEL41_IRQn  = 394,                 /* IRQ No:394,  SELECT41 */
    SEL42_IRQn  = 395,                 /* IRQ No:395,  SELECT42 */
    SEL43_IRQn  = 396,                 /* IRQ No:396,  SELECT43 */
    SEL44_IRQn  = 397,                 /* IRQ No:397,  SELECT44 */
    SEL45_IRQn  = 398,                 /* IRQ No:398,  SELECT45 */
    SEL46_IRQn  = 399,                 /* IRQ No:399,  SELECT46 */
    SEL47_IRQn  = 400,                 /* IRQ No:400,  SELECT47 */
    SEL48_IRQn  = 401,                 /* IRQ No:401,  SELECT48 */
    SEL49_IRQn  = 402,                 /* IRQ No:402,  SELECT49 */
    SEL50_IRQn  = 403,                 /* IRQ No:403,  SELECT50 */
    SEL51_IRQn  = 404,                 /* IRQ No:404,  SELECT51 */
    SEL52_IRQn  = 405,                 /* IRQ No:405,  SELECT52 */
    SEL53_IRQn  = 406,                 /* IRQ No:406,  SELECT53 */
    SEL54_IRQn  = 407,                 /* IRQ No:407,  SELECT54 */
    SEL55_IRQn  = 408,                 /* IRQ No:408,  SELECT55 */
    SEL56_IRQn  = 409,                 /* IRQ No:409,  SELECT56 */
    SEL57_IRQn  = 410,                 /* IRQ No:410,  SELECT57 */
    SEL58_IRQn  = 411,                 /* IRQ No:411,  SELECT58 */
    SEL59_IRQn  = 412,                 /* IRQ No:412,  SELECT59 */
    SEL60_IRQn  = 413,                 /* IRQ No:413,  SELECT60 */
    SEL61_IRQn  = 414,                 /* IRQ No:414,  SELECT61 */
    SEL62_IRQn  = 415,                 /* IRQ No:415,  SELECT62 */
    SEL63_IRQn  = 416,                 /* IRQ No:416,  SELECT63 */
    SEL64_IRQn  = 417,                 /* IRQ No:417,  SELECT64 */
    SEL65_IRQn  = 418,                 /* IRQ No:418,  SELECT65 */
    SEL66_IRQn  = 419,                 /* IRQ No:419,  SELECT66 */
    SEL67_IRQn  = 420,                 /* IRQ No:420,  SELECT67 */
    SEL68_IRQn  = 421,                 /* IRQ No:421,  SELECT68 */
    SEL69_IRQn  = 422,                 /* IRQ No:422,  SELECT69 */
    SEL70_IRQn  = 423,                 /* IRQ No:423,  SELECT70 */
    SEL71_IRQn  = 424,                 /* IRQ No:424,  SELECT71 */
    SEL72_IRQn  = 425,                 /* IRQ No:425,  SELECT72 */
    SEL73_IRQn  = 426,                 /* IRQ No:426,  SELECT73 */
    SEL74_IRQn  = 427,                 /* IRQ No:427,  SELECT74 */
    SEL75_IRQn  = 428,                 /* IRQ No:428,  SELECT75 */
    SEL76_IRQn  = 429,                 /* IRQ No:429,  SELECT76 */
    SEL77_IRQn  = 430,                 /* IRQ No:430,  SELECT77 */
    SEL78_IRQn  = 431,                 /* IRQ No:431,  SELECT78 */
    SEL79_IRQn  = 432,                 /* IRQ No:432,  SELECT79 */
    SEL80_IRQn  = 433,                 /* IRQ No:433,  SELECT80 */
    SEL81_IRQn  = 434,                 /* IRQ No:434,  SELECT81 */
    SEL82_IRQn  = 435,                 /* IRQ No:435,  SELECT82 */
    SEL83_IRQn  = 436,                 /* IRQ No:436,  SELECT83 */
    SEL84_IRQn  = 437,                 /* IRQ No:437,  SELECT84 */
    SEL85_IRQn  = 438,                 /* IRQ No:438,  SELECT85 */
    SEL86_IRQn  = 439,                 /* IRQ No:439,  SELECT86 */
    SEL87_IRQn  = 440,                 /* IRQ No:440,  SELECT87 */
    SEL88_IRQn  = 441,                 /* IRQ No:441,  SELECT88 */
    SEL89_IRQn  = 442,                 /* IRQ No:442,  SELECT89 */
    SEL90_IRQn  = 443,                 /* IRQ No:443,  SELECT90 */
    SEL91_IRQn  = 444,                 /* IRQ No:444,  SELECT91 */
    SEL92_IRQn  = 445,                 /* IRQ No:445,  SELECT92 */
    SEL93_IRQn  = 446,                 /* IRQ No:446,  SELECT93 */
    SEL94_IRQn  = 447,                 /* IRQ No:447,  SELECT94 */
    SEL95_IRQn  = 448,                 /* IRQ No:448,  SELECT95 */
    SEL96_IRQn  = 449,                 /* IRQ No:449,  SELECT96 */
    SEL97_IRQn  = 450,                 /* IRQ No:450,  SELECT97 */
    SEL98_IRQn  = 451,                 /* IRQ No:451,  SELECT98 */
    SEL99_IRQn  = 452,                 /* IRQ No:452,  SELECT99 */
    SEL100_IRQn = 453,                 /* IRQ No:453,  SELECT100 */
    SEL101_IRQn = 454,                 /* IRQ No:454,  SELECT101 */
    SEL102_IRQn = 455,                 /* IRQ No:455,  SELECT102 */
    SEL103_IRQn = 456,                 /* IRQ No:456,  SELECT103 */
    SEL104_IRQn = 457,                 /* IRQ No:457,  SELECT104 */
    SEL105_IRQn = 458,                 /* IRQ No:458,  SELECT105 */
    SEL106_IRQn = 459,                 /* IRQ No:459,  SELECT106 */
    SEL107_IRQn = 460,                 /* IRQ No:460,  SELECT107 */
    SEL108_IRQn = 461,                 /* IRQ No:461,  SELECT108 */
    SEL109_IRQn = 462,                 /* IRQ No:462,  SELECT109 */
    SEL110_IRQn = 463,                 /* IRQ No:463,  SELECT110 */
    SEL111_IRQn = 464,                 /* IRQ No:464,  SELECT111 */
    SEL112_IRQn = 465,                 /* IRQ No:465,  SELECT112 */
    SEL113_IRQn = 466,                 /* IRQ No:466,  SELECT113 */
    SEL114_IRQn = 467,                 /* IRQ No:467,  SELECT114 */
    SEL115_IRQn = 468,                 /* IRQ No:468,  SELECT115 */
    SEL116_IRQn = 469,                 /* IRQ No:469,  SELECT116 */
    SEL117_IRQn = 470,                 /* IRQ No:470,  SELECT117 */
    SEL118_IRQn = 471,                 /* IRQ No:471,  SELECT118 */
    SEL119_IRQn = 472,                 /* IRQ No:472,  SELECT119 */
    SEL120_IRQn = 473,                 /* IRQ No:473,  SELECT120 */
    SEL121_IRQn = 474,                 /* IRQ No:474,  SELECT121 */
    SEL122_IRQn = 475,                 /* IRQ No:475,  SELECT122 */
    SEL123_IRQn = 476,                 /* IRQ No:476,  SELECT123 */
    SEL124_IRQn = 477,                 /* IRQ No:477,  SELECT124 */
    SEL125_IRQn = 478,                 /* IRQ No:478,  SELECT125 */
    SEL126_IRQn = 479,                 /* IRQ No:479,  SELECT126 */
} IRQn_Type;

typedef enum IRQSELn
{
    GPIO_TINT0_IRQSELn           = 0,                       /* IRQSEL No: 0, TINT32_00 */
    GPIO_TINT1_IRQSELn           = 1,                       /* IRQSEL No: 1, TINT32_01 */
    GPIO_TINT2_IRQSELn           = 2,                       /* IRQSEL No: 2, TINT32_02 */
    GPIO_TINT3_IRQSELn           = 3,                       /* IRQSEL No: 3, TINT32_03 */
    GPIO_TINT4_IRQSELn           = 4,                       /* IRQSEL No: 4, TINT32_04 */
    GPIO_TINT5_IRQSELn           = 5,                       /* IRQSEL No: 5, TINT32_05 */
    GPIO_TINT6_IRQSELn           = 6,                       /* IRQSEL No: 6, TINT32_06 */
    GPIO_TINT7_IRQSELn           = 7,                       /* IRQSEL No: 7, TINT32_07 */
    GPIO_TINT8_IRQSELn           = 8,                       /* IRQSEL No: 8, TINT32_08 */
    GPIO_TINT9_IRQSELn           = 9,                       /* IRQSEL No: 9, TINT32_09 */
    GPIO_TINT10_IRQSELn          = 10,                      /* IRQSEL No: 10, TINT32_10 */
    GPIO_TINT11_IRQSELn          = 11,                      /* IRQSEL No: 11, TINT32_11 */
    GPIO_TINT12_IRQSELn          = 12,                      /* IRQSEL No: 12, TINT32_12 */
    GPIO_TINT13_IRQSELn          = 13,                      /* IRQSEL No: 13, TINT32_13 */
    GPIO_TINT14_IRQSELn          = 14,                      /* IRQSEL No: 14, TINT32_14 */
    GPIO_TINT15_IRQSELn          = 15,                      /* IRQSEL No: 15, TINT32_15 */
    GPIO_TINT16_IRQSELn          = 16,                      /* IRQSEL No: 16, TINT32_16 */
    GPIO_TINT17_IRQSELn          = 17,                      /* IRQSEL No: 17, TINT32_17 */
    GPIO_TINT18_IRQSELn          = 18,                      /* IRQSEL No: 18, TINT32_18 */
    GPIO_TINT19_IRQSELn          = 19,                      /* IRQSEL No: 19, TINT32_19 */
    GPIO_TINT20_IRQSELn          = 20,                      /* IRQSEL No: 20, TINT32_20 */
    GPIO_TINT21_IRQSELn          = 21,                      /* IRQSEL No: 21, TINT32_21 */
    GPIO_TINT22_IRQSELn          = 22,                      /* IRQSEL No: 22, TINT32_22 */
    GPIO_TINT23_IRQSELn          = 23,                      /* IRQSEL No: 23, TINT32_23 */
    GPIO_TINT24_IRQSELn          = 24,                      /* IRQSEL No: 24, TINT32_24 */
    GPIO_TINT25_IRQSELn          = 25,                      /* IRQSEL No: 25, TINT32_25 */
    GPIO_TINT26_IRQSELn          = 26,                      /* IRQSEL No: 26, TINT32_26 */
    GPIO_TINT27_IRQSELn          = 27,                      /* IRQSEL No: 27, TINT32_27 */
    GPIO_TINT28_IRQSELn          = 28,                      /* IRQSEL No: 28, TINT32_28 */
    GPIO_TINT29_IRQSELn          = 29,                      /* IRQSEL No: 29, TINT32_29 */
    GPIO_TINT30_IRQSELn          = 30,                      /* IRQSEL No: 30, TINT32_30 */
    GPIO_TINT31_IRQSELn          = 31,                      /* IRQSEL No: 31, TINT32_31 */
    CMTW0_CMT2_CMP_PLS_N_IRQSELn = 32,                      /* IRQSEL No: 32, cmt2_cmp_pls_n */
    CMTW1_CMT2_CMP_PLS_N_IRQSELn = 33,                      /* IRQSEL No: 33, cmt2_cmp_pls_n */
    CMTW2_CMT2_CMP_PLS_N_IRQSELn = 34,                      /* IRQSEL No: 34, cmt2_cmp_pls_n */
    CMTW3_CMT2_CMP_PLS_N_IRQSELn = 35,                      /* IRQSEL No: 35, cmt2_cmp_pls_n */
    CMTW4_CMT2_CMP_PLS_N_IRQSELn = 36,                      /* IRQSEL No: 36, cmt2_cmp_pls_n */
    CMTW5_CMT2_CMP_PLS_N_IRQSELn = 37,                      /* IRQSEL No: 37, cmt2_cmp_pls_n */
    CMTW6_CMT2_CMP_PLS_N_IRQSELn = 38,                      /* IRQSEL No: 38, cmt2_cmp_pls_n */
    CMTW7_CMT2_CMP_PLS_N_IRQSELn = 39,                      /* IRQSEL No: 39, cmt2_cmp_pls_n */
    CMTW0_CMT2_IC0_PLS_N_IRQSELn = 40,                      /* IRQSEL No: 40, cmt2_ic0_pls_n */
    CMTW1_CMT2_IC0_PLS_N_IRQSELn = 41,                      /* IRQSEL No: 41, cmt2_ic0_pls_n */
    CMTW2_CMT2_IC0_PLS_N_IRQSELn = 42,                      /* IRQSEL No: 42, cmt2_ic0_pls_n */
    CMTW3_CMT2_IC0_PLS_N_IRQSELn = 43,                      /* IRQSEL No: 43, cmt2_ic0_pls_n */
                                                            /* IRQSEL No: 44, Reserved */
                                                            /* IRQSEL No: 45, Reserved */
                                                            /* IRQSEL No: 46, Reserved */
                                                            /* IRQSEL No: 47, Reserved */
    CMTW0_CMT2_IC1_PLS_N_IRQSELn = 48,                      /* IRQSEL No: 48, cmt2_ic1_pls_n */
    CMTW1_CMT2_IC1_PLS_N_IRQSELn = 49,                      /* IRQSEL No: 49, cmt2_ic1_pls_n */
    CMTW2_CMT2_IC1_PLS_N_IRQSELn = 50,                      /* IRQSEL No: 50, cmt2_ic1_pls_n */
    CMTW3_CMT2_IC1_PLS_N_IRQSELn = 51,                      /* IRQSEL No: 51, cmt2_ic1_pls_n */
                                                            /* IRQSEL No: 52, Reserved */
                                                            /* IRQSEL No: 53, Reserved */
                                                            /* IRQSEL No: 54, Reserved */
                                                            /* IRQSEL No: 55, Reserved */
    CMTW0_CMT2_OC0_PLS_N_IRQSELn = 56,                      /* IRQSEL No: 56, cmt2_oc0_pls_n */
    CMTW1_CMT2_OC0_PLS_N_IRQSELn = 57,                      /* IRQSEL No: 57, cmt2_oc0_pls_n */
    CMTW2_CMT2_OC0_PLS_N_IRQSELn = 58,                      /* IRQSEL No: 58, cmt2_oc0_pls_n */
    CMTW3_CMT2_OC0_PLS_N_IRQSELn = 59,                      /* IRQSEL No: 59, cmt2_oc0_pls_n */
                                                            /* IRQSEL No: 60, Reserved */
                                                            /* IRQSEL No: 61, Reserved */
                                                            /* IRQSEL No: 62, Reserved */
                                                            /* IRQSEL No: 63, Reserved */
    CMTW0_CMT2_OC1_PLS_N_IRQSELn = 64,                      /* IRQSEL No: 64, cmt2_oc1_pls_n */
    CMTW1_CMT2_OC1_PLS_N_IRQSELn = 65,                      /* IRQSEL No: 65, cmt2_oc1_pls_n */
    CMTW2_CMT2_OC1_PLS_N_IRQSELn = 66,                      /* IRQSEL No: 66, cmt2_oc1_pls_n */
    CMTW3_CMT2_OC1_PLS_N_IRQSELn = 67,                      /* IRQSEL No: 67, cmt2_oc1_pls_n */
                                                            /* IRQSEL No: 68, Reserved */
                                                            /* IRQSEL No: 69, Reserved */
                                                            /* IRQSEL No: 70, Reserved */
                                                            /* IRQSEL No: 71, Reserved */
    DMAC_B1_DMAERR_IRQSELn          = 72,                   /* IRQSEL No: 72, DMAC1_DMAERR */
    DMAC_B2_DMAERR_IRQSELn          = 73,                   /* IRQSEL No: 73, DMAC2_DMAERR */
    DMAC_B3_DMAERR_IRQSELn          = 74,                   /* IRQSEL No: 74, DMAC3_DMAERR */
    DMAC_B4_DMAERR_IRQSELn          = 75,                   /* IRQSEL No: 75, DMAC4_DMAERR */
    DMAC_B0_DMAERR_IRQSELn          = 76,                   /* IRQSEL No: 76, DMAC0_DMAERR */
    SPI0_RXI_IRQSELn                = 77,                   /* IRQSEL No: 77, sp_rxintpls_n */
    SPI0_TXI_IRQSELn                = 78,                   /* IRQSEL No: 78, sp_txintpls_n */
    SPI1_RXI_IRQSELn                = 79,                   /* IRQSEL No: 79, sp_rxintpls_n */
    SPI1_TXI_IRQSELn                = 80,                   /* IRQSEL No: 80, sp_txintpls_n */
    SPI2_RXI_IRQSELn                = 81,                   /* IRQSEL No: 81, sp_rxintpls_n */
    SPI2_TXI_IRQSELn                = 82,                   /* IRQSEL No: 82, sp_txintpls_n */
    RIIC0_TI_IRQSELn                = 83,                   /* IRQSEL No: 83, ti_n */
    RIIC0_RI_IRQSELn                = 84,                   /* IRQSEL No: 84, ri_n */
    RIIC1_TI_IRQSELn                = 85,                   /* IRQSEL No: 85, ti_n */
    RIIC1_RI_IRQSELn                = 86,                   /* IRQSEL No: 86, ri_n */
    RIIC2_TI_IRQSELn                = 87,                   /* IRQSEL No: 87, ti_n */
    RIIC2_RI_IRQSELn                = 88,                   /* IRQSEL No: 88, ri_n */
    RIIC3_TI_IRQSELn                = 89,                   /* IRQSEL No: 89, ti_n */
    RIIC3_RI_IRQSELn                = 90,                   /* IRQSEL No: 90, ri_n */
    RIIC4_TI_IRQSELn                = 91,                   /* IRQSEL No: 91, ti_n */
    RIIC4_RI_IRQSELn                = 92,                   /* IRQSEL No: 92, ri_n */
    RIIC5_TI_IRQSELn                = 93,                   /* IRQSEL No: 93, ti_n */
    RIIC5_RI_IRQSELn                = 94,                   /* IRQSEL No: 94, ri_n */
    RIIC6_TI_IRQSELn                = 95,                   /* IRQSEL No: 95, ti_n */
    RIIC6_RI_IRQSELn                = 96,                   /* IRQSEL No: 96, ri_n */
    RIIC7_TI_IRQSELn                = 97,                   /* IRQSEL No: 97, ti_n */
    RIIC7_RI_IRQSELn                = 98,                   /* IRQSEL No: 98, ri_n */
    RIIC8_TI_IRQSELn                = 99,                   /* IRQSEL No: 99, ti_n */
    RIIC8_RI_IRQSELn                = 100,                  /* IRQSEL No: 100, ri_n */
    RTC_INTREQ_RTC_ALMPLS_N_IRQSELn = 101,                  /* IRQSEL No: 101, intreq_rtc_almpls_n */
    RTC_INTREQ_RTC_PRDPLS_N_IRQSELn = 102,                  /* IRQSEL No: 102, intreq_rtc_prdpls_n */
    RTC_INTREQ_RTC_CUPPLS_N_IRQSELn = 103,                  /* IRQSEL No: 103, intreq_rtc_cuppls_n */
                                                            /* IRQSEL No: 104, Reserved */
                                                            /* IRQSEL No: 105, Reserved */
    SCIF0_RERR_IRQSELn             = 106,                   /* IRQSEL No: 106, ub1_rerr_n */
    SCIF0_BRK_IRQSELn              = 107,                   /* IRQSEL No: 107, ub1_brk_n */
    SCIF0_TEI_IRQSELn              = 108,                   /* IRQSEL No: 108, ub1_tei_n */
    SCIF0_RXI_IRQSELn              = 109,                   /* IRQSEL No: 109, ub1_rxi_n */
    SCIF0_TXI_IRQSELn              = 110,                   /* IRQSEL No: 110, ub1_txi_n */
    SCIF0_DRI_IRQSELn              = 111,                   /* IRQSEL No: 111, ub1_dri_n */
    SCIF0_TEI_DRI_IRQSELn          = 112,                   /* IRQSEL No: 112, ub1_tei_dri_n */
    SCIF0_RXI_EDGE_IRQSELn         = 113,                   /* IRQSEL No: 113, ub1_rxi_edge_n */
    SCIF0_TXI_EDGE_IRQSELn         = 114,                   /* IRQSEL No: 114, ub1_txi_edge_n */
    GPT0_CCMPA_IRQSELn             = 115,                   /* IRQSEL No: 115, gpt_gtcia_n_0 */
    GPT1_CCMPA_IRQSELn             = 116,                   /* IRQSEL No: 116, gpt_gtcia_n_1 */
    GPT2_CCMPA_IRQSELn             = 117,                   /* IRQSEL No: 117, gpt_gtcia_n_2 */
    GPT3_CCMPA_IRQSELn             = 118,                   /* IRQSEL No: 118, gpt_gtcia_n_3 */
    GPT4_CCMPA_IRQSELn             = 119,                   /* IRQSEL No: 119, gpt_gtcia_n_4 */
    GPT5_CCMPA_IRQSELn             = 120,                   /* IRQSEL No: 120, gpt_gtcia_n_5 */
    GPT6_CCMPA_IRQSELn             = 121,                   /* IRQSEL No: 121, gpt_gtcia_n_6 */
    GPT7_CCMPA_IRQSELn             = 122,                   /* IRQSEL No: 122, gpt_gtcia_n_7 */
    GPT0_CCMPB_IRQSELn             = 123,                   /* IRQSEL No: 123, gpt_gtcib_n_0 */
    GPT1_CCMPB_IRQSELn             = 124,                   /* IRQSEL No: 124, gpt_gtcib_n_1 */
    GPT2_CCMPB_IRQSELn             = 125,                   /* IRQSEL No: 125, gpt_gtcib_n_2 */
    GPT3_CCMPB_IRQSELn             = 126,                   /* IRQSEL No: 126, gpt_gtcib_n_3 */
    GPT4_CCMPB_IRQSELn             = 127,                   /* IRQSEL No: 127, gpt_gtcib_n_4 */
    GPT5_CCMPB_IRQSELn             = 128,                   /* IRQSEL No: 128, gpt_gtcib_n_5 */
    GPT6_CCMPB_IRQSELn             = 129,                   /* IRQSEL No: 129, gpt_gtcib_n_6 */
    GPT7_CCMPB_IRQSELn             = 130,                   /* IRQSEL No: 130, gpt_gtcib_n_7 */
    GPT0_CMPC_IRQSELn              = 131,                   /* IRQSEL No: 131, gpt_gtcic_n_0 */
    GPT1_CMPC_IRQSELn              = 132,                   /* IRQSEL No: 132, gpt_gtcic_n_1 */
    GPT2_CMPC_IRQSELn              = 133,                   /* IRQSEL No: 133, gpt_gtcic_n_2 */
    GPT3_CMPC_IRQSELn              = 134,                   /* IRQSEL No: 134, gpt_gtcic_n_3 */
    GPT4_CMPC_IRQSELn              = 135,                   /* IRQSEL No: 135, gpt_gtcic_n_4 */
    GPT5_CMPC_IRQSELn              = 136,                   /* IRQSEL No: 136, gpt_gtcic_n_5 */
    GPT6_CMPC_IRQSELn              = 137,                   /* IRQSEL No: 137, gpt_gtcic_n_6 */
    GPT7_CMPC_IRQSELn              = 138,                   /* IRQSEL No: 138, gpt_gtcic_n_7 */
    GPT0_CMPD_IRQSELn              = 139,                   /* IRQSEL No: 139, gpt_gtcid_n_0 */
    GPT1_CMPD_IRQSELn              = 140,                   /* IRQSEL No: 140, gpt_gtcid_n_1 */
    GPT2_CMPD_IRQSELn              = 141,                   /* IRQSEL No: 141, gpt_gtcid_n_2 */
    GPT3_CMPD_IRQSELn              = 142,                   /* IRQSEL No: 142, gpt_gtcid_n_3 */
    GPT4_CMPD_IRQSELn              = 143,                   /* IRQSEL No: 143, gpt_gtcid_n_4 */
    GPT5_CMPD_IRQSELn              = 144,                   /* IRQSEL No: 144, gpt_gtcid_n_5 */
    GPT6_CMPD_IRQSELn              = 145,                   /* IRQSEL No: 145, gpt_gtcid_n_6 */
    GPT7_CMPD_IRQSELn              = 146,                   /* IRQSEL No: 146, gpt_gtcid_n_7 */
    GPT0_CMPE_IRQSELn              = 147,                   /* IRQSEL No: 147, gpt_gtcie_n_0 */
    GPT1_CMPE_IRQSELn              = 148,                   /* IRQSEL No: 148, gpt_gtcie_n_1 */
    GPT2_CMPE_IRQSELn              = 149,                   /* IRQSEL No: 149, gpt_gtcie_n_2 */
    GPT3_CMPE_IRQSELn              = 150,                   /* IRQSEL No: 150, gpt_gtcie_n_3 */
    GPT4_CMPE_IRQSELn              = 151,                   /* IRQSEL No: 151, gpt_gtcie_n_4 */
    GPT5_CMPE_IRQSELn              = 152,                   /* IRQSEL No: 152, gpt_gtcie_n_5 */
    GPT6_CMPE_IRQSELn              = 153,                   /* IRQSEL No: 153, gpt_gtcie_n_6 */
    GPT7_CMPE_IRQSELn              = 154,                   /* IRQSEL No: 154, gpt_gtcie_n_7 */
    GPT0_CMPF_IRQSELn              = 155,                   /* IRQSEL No: 155, gpt_gtcif_n_0 */
    GPT1_CMPF_IRQSELn              = 156,                   /* IRQSEL No: 156, gpt_gtcif_n_1 */
    GPT2_CMPF_IRQSELn              = 157,                   /* IRQSEL No: 157, gpt_gtcif_n_2 */
    GPT3_CMPF_IRQSELn              = 158,                   /* IRQSEL No: 158, gpt_gtcif_n_3 */
    GPT4_CMPF_IRQSELn              = 159,                   /* IRQSEL No: 159, gpt_gtcif_n_4 */
    GPT5_CMPF_IRQSELn              = 160,                   /* IRQSEL No: 160, gpt_gtcif_n_5 */
    GPT6_CMPF_IRQSELn              = 161,                   /* IRQSEL No: 161, gpt_gtcif_n_6 */
    GPT7_CMPF_IRQSELn              = 162,                   /* IRQSEL No: 162, gpt_gtcif_n_7 */
    GPT0_ADTRGA_IRQSELn            = 163,                   /* IRQSEL No: 163, gpt_gtciada_n_0 */
    GPT1_ADTRGA_IRQSELn            = 164,                   /* IRQSEL No: 164, gpt_gtciada_n_1 */
    GPT2_ADTRGA_IRQSELn            = 165,                   /* IRQSEL No: 165, gpt_gtciada_n_2 */
    GPT3_ADTRGA_IRQSELn            = 166,                   /* IRQSEL No: 166, gpt_gtciada_n_3 */
    GPT4_ADTRGA_IRQSELn            = 167,                   /* IRQSEL No: 167, gpt_gtciada_n_4 */
    GPT5_ADTRGA_IRQSELn            = 168,                   /* IRQSEL No: 168, gpt_gtciada_n_5 */
    GPT6_ADTRGA_IRQSELn            = 169,                   /* IRQSEL No: 169, gpt_gtciada_n_6 */
    GPT7_ADTRGA_IRQSELn            = 170,                   /* IRQSEL No: 170, gpt_gtciada_n_7 */
    GPT0_ADTRGB_IRQSELn            = 171,                   /* IRQSEL No: 171, gpt_gtciadb_n_0 */
    GPT1_ADTRGB_IRQSELn            = 172,                   /* IRQSEL No: 172, gpt_gtciadb_n_1 */
    GPT2_ADTRGB_IRQSELn            = 173,                   /* IRQSEL No: 173, gpt_gtciadb_n_2 */
    GPT3_ADTRGB_IRQSELn            = 174,                   /* IRQSEL No: 174, gpt_gtciadb_n_3 */
    GPT4_ADTRGB_IRQSELn            = 175,                   /* IRQSEL No: 175, gpt_gtciadb_n_4 */
    GPT5_ADTRGB_IRQSELn            = 176,                   /* IRQSEL No: 176, gpt_gtciadb_n_5 */
    GPT6_ADTRGB_IRQSELn            = 177,                   /* IRQSEL No: 177, gpt_gtciadb_n_6 */
    GPT7_ADTRGB_IRQSELn            = 178,                   /* IRQSEL No: 178, gpt_gtciadb_n_7 */
    GPT0_OVF_IRQSELn               = 179,                   /* IRQSEL No: 179, gpt_gtciv_n_0 */
    GPT1_OVF_IRQSELn               = 180,                   /* IRQSEL No: 180, gpt_gtciv_n_1 */
    GPT2_OVF_IRQSELn               = 181,                   /* IRQSEL No: 181, gpt_gtciv_n_2 */
    GPT3_OVF_IRQSELn               = 182,                   /* IRQSEL No: 182, gpt_gtciv_n_3 */
    GPT4_OVF_IRQSELn               = 183,                   /* IRQSEL No: 183, gpt_gtciv_n_4 */
    GPT5_OVF_IRQSELn               = 184,                   /* IRQSEL No: 184, gpt_gtciv_n_5 */
    GPT6_OVF_IRQSELn               = 185,                   /* IRQSEL No: 185, gpt_gtciv_n_6 */
    GPT7_OVF_IRQSELn               = 186,                   /* IRQSEL No: 186, gpt_gtciv_n_7 */
    GPT0_UNF_IRQSELn               = 187,                   /* IRQSEL No: 187, gpt_gtciu_n_0 */
    GPT1_UNF_IRQSELn               = 188,                   /* IRQSEL No: 188, gpt_gtciu_n_1 */
    GPT2_UNF_IRQSELn               = 189,                   /* IRQSEL No: 189, gpt_gtciu_n_2 */
    GPT3_UNF_IRQSELn               = 190,                   /* IRQSEL No: 190, gpt_gtciu_n_3 */
    GPT4_UNF_IRQSELn               = 191,                   /* IRQSEL No: 191, gpt_gtciu_n_4 */
    GPT5_UNF_IRQSELn               = 192,                   /* IRQSEL No: 192, gpt_gtciu_n_5 */
    GPT6_UNF_IRQSELn               = 193,                   /* IRQSEL No: 193, gpt_gtciu_n_6 */
    GPT7_UNF_IRQSELn               = 194,                   /* IRQSEL No: 194, gpt_gtciu_n_7 */
    GPT0_GTCIH_IRQSELn             = 195,                   /* IRQSEL No: 195, gpt_gtcih_n_0 */
    GPT1_GTCIH_IRQSELn             = 196,                   /* IRQSEL No: 196, gpt_gtcih_n_1 */
    GPT2_GTCIH_IRQSELn             = 197,                   /* IRQSEL No: 197, gpt_gtcih_n_2 */
    GPT3_GTCIH_IRQSELn             = 198,                   /* IRQSEL No: 198, gpt_gtcih_n_3 */
    GPT4_GTCIH_IRQSELn             = 199,                   /* IRQSEL No: 199, gpt_gtcih_n_4 */
    GPT5_GTCIH_IRQSELn             = 200,                   /* IRQSEL No: 200, gpt_gtcih_n_5 */
    GPT6_GTCIH_IRQSELn             = 201,                   /* IRQSEL No: 201, gpt_gtcih_n_6 */
    GPT7_GTCIH_IRQSELn             = 202,                   /* IRQSEL No: 202, gpt_gtcih_n_7 */
    GPT0_GTCIL_IRQSELn             = 203,                   /* IRQSEL No: 203, gpt_gtcil_n_0 */
    GPT1_GTCIL_IRQSELn             = 204,                   /* IRQSEL No: 204, gpt_gtcil_n_1 */
    GPT2_GTCIL_IRQSELn             = 205,                   /* IRQSEL No: 205, gpt_gtcil_n_2 */
    GPT3_GTCIL_IRQSELn             = 206,                   /* IRQSEL No: 206, gpt_gtcil_n_3 */
    GPT4_GTCIL_IRQSELn             = 207,                   /* IRQSEL No: 207, gpt_gtcil_n_4 */
    GPT5_GTCIL_IRQSELn             = 208,                   /* IRQSEL No: 208, gpt_gtcil_n_5 */
    GPT6_GTCIL_IRQSELn             = 209,                   /* IRQSEL No: 209, gpt_gtcil_n_6 */
    GPT7_GTCIL_IRQSELn             = 210,                   /* IRQSEL No: 210, gpt_gtcil_n_7 */
    GPT0_GTDEI_IRQSELn             = 211,                   /* IRQSEL No: 211, gpt_gtdei_n_0 */
    GPT1_GTDEI_IRQSELn             = 212,                   /* IRQSEL No: 212, gpt_gtdei_n_1 */
    GPT2_GTDEI_IRQSELn             = 213,                   /* IRQSEL No: 213, gpt_gtdei_n_2 */
    GPT3_GTDEI_IRQSELn             = 214,                   /* IRQSEL No: 214, gpt_gtdei_n_3 */
    GPT4_GTDEI_IRQSELn             = 215,                   /* IRQSEL No: 215, gpt_gtdei_n_4 */
    GPT5_GTDEI_IRQSELn             = 216,                   /* IRQSEL No: 216, gpt_gtdei_n_5 */
    GPT6_GTDEI_IRQSELn             = 217,                   /* IRQSEL No: 217, gpt_gtdei_n_6 */
    GPT7_GTDEI_IRQSELn             = 218,                   /* IRQSEL No: 218, gpt_gtdei_n_7 */
    GPT8_CCMPA_IRQSELn             = 219,                   /* IRQSEL No: 219, gpt_gtcia_n_0 */
    GPT9_CCMPA_IRQSELn             = 220,                   /* IRQSEL No: 220, gpt_gtcia_n_1 */
    GPT10_CCMPA_IRQSELn            = 221,                   /* IRQSEL No: 221, gpt_gtcia_n_2 */
    GPT11_CCMPA_IRQSELn            = 222,                   /* IRQSEL No: 222, gpt_gtcia_n_3 */
    GPT12_CCMPA_IRQSELn            = 223,                   /* IRQSEL No: 223, gpt_gtcia_n_4 */
    GPT13_CCMPA_IRQSELn            = 224,                   /* IRQSEL No: 224, gpt_gtcia_n_5 */
    GPT14_CCMPA_IRQSELn            = 225,                   /* IRQSEL No: 225, gpt_gtcia_n_6 */
    GPT15_CCMPA_IRQSELn            = 226,                   /* IRQSEL No: 226, gpt_gtcia_n_7 */
    GPT8_CCMPB_IRQSELn             = 227,                   /* IRQSEL No: 227, gpt_gtcib_n_0 */
    GPT9_CCMPB_IRQSELn             = 228,                   /* IRQSEL No: 228, gpt_gtcib_n_1 */
    GPT10_CCMPB_IRQSELn            = 229,                   /* IRQSEL No: 229, gpt_gtcib_n_2 */
    GPT11_CCMPB_IRQSELn            = 230,                   /* IRQSEL No: 230, gpt_gtcib_n_3 */
    GPT12_CCMPB_IRQSELn            = 231,                   /* IRQSEL No: 231, gpt_gtcib_n_4 */
    GPT13_CCMPB_IRQSELn            = 232,                   /* IRQSEL No: 232, gpt_gtcib_n_5 */
    GPT14_CCMPB_IRQSELn            = 233,                   /* IRQSEL No: 233, gpt_gtcib_n_6 */
    GPT15_CCMPB_IRQSELn            = 234,                   /* IRQSEL No: 234, gpt_gtcib_n_7 */
    GPT8_CMPC_IRQSELn              = 235,                   /* IRQSEL No: 235, gpt_gtcic_n_0 */
    GPT9_CMPC_IRQSELn              = 236,                   /* IRQSEL No: 236, gpt_gtcic_n_1 */
    GPT10_CMPC_IRQSELn             = 237,                   /* IRQSEL No: 237, gpt_gtcic_n_2 */
    GPT11_CMPC_IRQSELn             = 238,                   /* IRQSEL No: 238, gpt_gtcic_n_3 */
    GPT12_CMPC_IRQSELn             = 239,                   /* IRQSEL No: 239, gpt_gtcic_n_4 */
    GPT13_CMPC_IRQSELn             = 240,                   /* IRQSEL No: 240, gpt_gtcic_n_5 */
    GPT14_CMPC_IRQSELn             = 241,                   /* IRQSEL No: 241, gpt_gtcic_n_6 */
    GPT15_CMPC_IRQSELn             = 242,                   /* IRQSEL No: 242, gpt_gtcic_n_7 */
    GPT8_CMPD_IRQSELn              = 243,                   /* IRQSEL No: 243, gpt_gtcid_n_0 */
    GPT9_CMPD_IRQSELn              = 244,                   /* IRQSEL No: 244, gpt_gtcid_n_1 */
    GPT10_CMPD_IRQSELn             = 245,                   /* IRQSEL No: 245, gpt_gtcid_n_2 */
    GPT11_CMPD_IRQSELn             = 246,                   /* IRQSEL No: 246, gpt_gtcid_n_3 */
    GPT12_CMPD_IRQSELn             = 247,                   /* IRQSEL No: 247, gpt_gtcid_n_4 */
    GPT13_CMPD_IRQSELn             = 248,                   /* IRQSEL No: 248, gpt_gtcid_n_5 */
    GPT14_CMPD_IRQSELn             = 249,                   /* IRQSEL No: 249, gpt_gtcid_n_6 */
    GPT15_CMPD_IRQSELn             = 250,                   /* IRQSEL No: 250, gpt_gtcid_n_7 */
    GPT8_CMPE_IRQSELn              = 251,                   /* IRQSEL No: 251, gpt_gtcie_n_0 */
    GPT9_CMPE_IRQSELn              = 252,                   /* IRQSEL No: 252, gpt_gtcie_n_1 */
    GPT10_CMPE_IRQSELn             = 253,                   /* IRQSEL No: 253, gpt_gtcie_n_2 */
    GPT11_CMPE_IRQSELn             = 254,                   /* IRQSEL No: 254, gpt_gtcie_n_3 */
    GPT12_CMPE_IRQSELn             = 255,                   /* IRQSEL No: 255, gpt_gtcie_n_4 */
    GPT13_CMPE_IRQSELn             = 256,                   /* IRQSEL No: 256, gpt_gtcie_n_5 */
    GPT14_CMPE_IRQSELn             = 257,                   /* IRQSEL No: 257, gpt_gtcie_n_6 */
    GPT15_CMPE_IRQSELn             = 258,                   /* IRQSEL No: 258, gpt_gtcie_n_7 */
    GPT8_CMPF_IRQSELn              = 259,                   /* IRQSEL No: 259, gpt_gtcif_n_0 */
    GPT9_CMPF_IRQSELn              = 260,                   /* IRQSEL No: 260, gpt_gtcif_n_1 */
    GPT10_CMPF_IRQSELn             = 261,                   /* IRQSEL No: 261, gpt_gtcif_n_2 */
    GPT11_CMPF_IRQSELn             = 262,                   /* IRQSEL No: 262, gpt_gtcif_n_3 */
    GPT12_CMPF_IRQSELn             = 263,                   /* IRQSEL No: 263, gpt_gtcif_n_4 */
    GPT13_CMPF_IRQSELn             = 264,                   /* IRQSEL No: 264, gpt_gtcif_n_5 */
    GPT14_CMPF_IRQSELn             = 265,                   /* IRQSEL No: 265, gpt_gtcif_n_6 */
    GPT15_CMPF_IRQSELn             = 266,                   /* IRQSEL No: 266, gpt_gtcif_n_7 */
    GPT8_ADTRGA_IRQSELn            = 267,                   /* IRQSEL No: 267, gpt_gtciada_n_0 */
    GPT9_ADTRGA_IRQSELn            = 268,                   /* IRQSEL No: 268, gpt_gtciada_n_1 */
    GPT10_ADTRGA_IRQSELn           = 269,                   /* IRQSEL No: 269, gpt_gtciada_n_2 */
    GPT11_ADTRGA_IRQSELn           = 270,                   /* IRQSEL No: 270, gpt_gtciada_n_3 */
    GPT12_ADTRGA_IRQSELn           = 271,                   /* IRQSEL No: 271, gpt_gtciada_n_4 */
    GPT13_ADTRGA_IRQSELn           = 272,                   /* IRQSEL No: 272, gpt_gtciada_n_5 */
    GPT14_ADTRGA_IRQSELn           = 273,                   /* IRQSEL No: 273, gpt_gtciada_n_6 */
    GPT15_ADTRGA_IRQSELn           = 274,                   /* IRQSEL No: 274, gpt_gtciada_n_7 */
    GPT8_ADTRGB_IRQSELn            = 275,                   /* IRQSEL No: 275, gpt_gtciadb_n_0 */
    GPT9_ADTRGB_IRQSELn            = 276,                   /* IRQSEL No: 276, gpt_gtciadb_n_1 */
    GPT10_ADTRGB_IRQSELn           = 277,                   /* IRQSEL No: 277, gpt_gtciadb_n_2 */
    GPT11_ADTRGB_IRQSELn           = 278,                   /* IRQSEL No: 278, gpt_gtciadb_n_3 */
    GPT12_ADTRGB_IRQSELn           = 279,                   /* IRQSEL No: 279, gpt_gtciadb_n_4 */
    GPT13_ADTRGB_IRQSELn           = 280,                   /* IRQSEL No: 280, gpt_gtciadb_n_5 */
    GPT14_ADTRGB_IRQSELn           = 281,                   /* IRQSEL No: 281, gpt_gtciadb_n_6 */
    GPT15_ADTRGB_IRQSELn           = 282,                   /* IRQSEL No: 282, gpt_gtciadb_n_7 */
    GPT8_OVF_IRQSELn               = 283,                   /* IRQSEL No: 283, gpt_gtciv_n_0 */
    GPT9_OVF_IRQSELn               = 284,                   /* IRQSEL No: 284, gpt_gtciv_n_1 */
    GPT10_OVF_IRQSELn              = 285,                   /* IRQSEL No: 285, gpt_gtciv_n_2 */
    GPT11_OVF_IRQSELn              = 286,                   /* IRQSEL No: 286, gpt_gtciv_n_3 */
    GPT12_OVF_IRQSELn              = 287,                   /* IRQSEL No: 287, gpt_gtciv_n_4 */
    GPT13_OVF_IRQSELn              = 288,                   /* IRQSEL No: 288, gpt_gtciv_n_5 */
    GPT14_OVF_IRQSELn              = 289,                   /* IRQSEL No: 289, gpt_gtciv_n_6 */
    GPT15_OVF_IRQSELn              = 290,                   /* IRQSEL No: 290, gpt_gtciv_n_7 */
    GPT8_UNF_IRQSELn               = 291,                   /* IRQSEL No: 291, gpt_gtciu_n_0 */
    GPT9_UNF_IRQSELn               = 292,                   /* IRQSEL No: 292, gpt_gtciu_n_1 */
    GPT10_UNF_IRQSELn              = 293,                   /* IRQSEL No: 293, gpt_gtciu_n_2 */
    GPT11_UNF_IRQSELn              = 294,                   /* IRQSEL No: 294, gpt_gtciu_n_3 */
    GPT12_UNF_IRQSELn              = 295,                   /* IRQSEL No: 295, gpt_gtciu_n_4 */
    GPT13_UNF_IRQSELn              = 296,                   /* IRQSEL No: 296, gpt_gtciu_n_5 */
    GPT14_UNF_IRQSELn              = 297,                   /* IRQSEL No: 297, gpt_gtciu_n_6 */
    GPT15_UNF_IRQSELn              = 298,                   /* IRQSEL No: 298, gpt_gtciu_n_7 */
    GPT8_GTCIH_IRQSELn             = 299,                   /* IRQSEL No: 299, gpt_gtcih_n_0 */
    GPT9_GTCIH_IRQSELn             = 300,                   /* IRQSEL No: 300, gpt_gtcih_n_1 */
    GPT10_GTCIH_IRQSELn            = 301,                   /* IRQSEL No: 301, gpt_gtcih_n_2 */
    GPT11_GTCIH_IRQSELn            = 302,                   /* IRQSEL No: 302, gpt_gtcih_n_3 */
    GPT12_GTCIH_IRQSELn            = 303,                   /* IRQSEL No: 303, gpt_gtcih_n_4 */
    GPT13_GTCIH_IRQSELn            = 304,                   /* IRQSEL No: 304, gpt_gtcih_n_5 */
    GPT14_GTCIH_IRQSELn            = 305,                   /* IRQSEL No: 305, gpt_gtcih_n_6 */
    GPT15_GTCIH_IRQSELn            = 306,                   /* IRQSEL No: 306, gpt_gtcih_n_7 */
    GPT8_GTCIL_IRQSELn             = 307,                   /* IRQSEL No: 307, gpt_gtcil_n_0 */
    GPT9_GTCIL_IRQSELn             = 308,                   /* IRQSEL No: 308, gpt_gtcil_n_1 */
    GPT10_GTCIL_IRQSELn            = 309,                   /* IRQSEL No: 309, gpt_gtcil_n_2 */
    GPT11_GTCIL_IRQSELn            = 310,                   /* IRQSEL No: 310, gpt_gtcil_n_3 */
    GPT12_GTCIL_IRQSELn            = 311,                   /* IRQSEL No: 311, gpt_gtcil_n_4 */
    GPT13_GTCIL_IRQSELn            = 312,                   /* IRQSEL No: 312, gpt_gtcil_n_5 */
    GPT14_GTCIL_IRQSELn            = 313,                   /* IRQSEL No: 313, gpt_gtcil_n_6 */
    GPT15_GTCIL_IRQSELn            = 314,                   /* IRQSEL No: 314, gpt_gtcil_n_7 */
    GPT8_GTDEI_IRQSELn             = 315,                   /* IRQSEL No: 315, gpt_gtdei_n_0 */
    GPT9_GTDEI_IRQSELn             = 316,                   /* IRQSEL No: 316, gpt_gtdei_n_1 */
    GPT10_GTDEI_IRQSELn            = 317,                   /* IRQSEL No: 317, gpt_gtdei_n_2 */
    GPT11_GTDEI_IRQSELn            = 318,                   /* IRQSEL No: 318, gpt_gtdei_n_3 */
    GPT12_GTDEI_IRQSELn            = 319,                   /* IRQSEL No: 319, gpt_gtdei_n_4 */
    GPT13_GTDEI_IRQSELn            = 320,                   /* IRQSEL No: 320, gpt_gtdei_n_5 */
    GPT14_GTDEI_IRQSELn            = 321,                   /* IRQSEL No: 321, gpt_gtdei_n_6 */
    GPT15_GTDEI_IRQSELn            = 322,                   /* IRQSEL No: 322, gpt_gtdei_n_7 */
    POEG_GROUP0_IRQSELn            = 323,                   /* IRQSEL No: 323, mhc_elcoutdis */
    POEG_GROUP1_IRQSELn            = 324,                   /* IRQSEL No: 324, mhc_elcoutdis */
    POEG_GROUP2_IRQSELn            = 325,                   /* IRQSEL No: 325, mhc_elcoutdis */
    POEG_GROUP3_IRQSELn            = 326,                   /* IRQSEL No: 326, mhc_elcoutdis */
    POEG_GROUP4_IRQSELn            = 327,                   /* IRQSEL No: 327, mhc_elcoutdis */
    POEG_GROUP5_IRQSELn            = 328,                   /* IRQSEL No: 328, mhc_elcoutdis */
    POEG_GROUP6_IRQSELn            = 329,                   /* IRQSEL No: 329, mhc_elcoutdis */
    POEG_GROUP7_IRQSELn            = 330,                   /* IRQSEL No: 330, mhc_elcoutdis */
    I3C_B_INT_RI3C_IERR_N_IRQSELn  = 331,                   /* IRQSEL No: 331, INT_ri3c_ierr_n */
    I3C_B_INT_RI3C_TERR_N_IRQSELn  = 332,                   /* IRQSEL No: 332, INT_ri3c_terr_n */
    I3C_B_INT_RI3C_ABORT_N_IRQSELn = 333,                   /* IRQSEL No: 333, INT_ri3c_abort_n */
    I3C_B_INT_RI3C_RESP_N_IRQSELn  = 334,                   /* IRQSEL No: 334, INT_ri3c_resp_n */
    I3C_B_INT_RI3C_CMD_N_IRQSELn   = 335,                   /* IRQSEL No: 335, INT_ri3c_cmd_n */
    I3C_B_INT_RI3C_IBI_N_IRQSELn   = 336,                   /* IRQSEL No: 336, INT_ri3c_ibi_n */
    I3C_B_INT_RI3C_RX_N_IRQSELn    = 337,                   /* IRQSEL No: 337, INT_ri3c_rx_n */
    I3C_B_INT_RI3C_TX_N_IRQSELn    = 338,                   /* IRQSEL No: 338, INT_ri3c_tx_n */
    I3C_B_INT_RI3C_RCV_N_IRQSELn   = 339,                   /* IRQSEL No: 339, INT_ri3c_rcv_n */
                                                            /* IRQSEL No: 340, Reserved */
                                                            /* IRQSEL No: 341, Reserved */
                                                            /* IRQSEL No: 342, Reserved */
                                                            /* IRQSEL No: 343, Reserved */
                                                            /* IRQSEL No: 344, Reserved */
                                                            /* IRQSEL No: 345, Reserved */
    I3C_B_INT_RI3C_ST_N_IRQSELn = 346,                      /* IRQSEL No: 346, INT_ri3c_st_n */
    I3C_B_INT_RI3C_SP_N_IRQSELn = 347,                      /* IRQSEL No: 347, INT_ri3c_sp_n */
                                                            /* IRQSEL No: 348, Reserved */
    I3C_B_INT_RI3C_TEND_N_IRQSELn = 349,                    /* IRQSEL No: 349, INT_ri3c_tend_n */
    I3C_B_INT_RI3C_NACK_N_IRQSELn = 350,                    /* IRQSEL No: 350, INT_ri3c_nack_n */
    I3C_B_INT_RI3C_AL_N_IRQSELn   = 351,                    /* IRQSEL No: 351, INT_ri3c_al_n */
    I3C_B_INT_RI3C_TMO_N_IRQSELn  = 352,                    /* IRQSEL No: 352, INT_ri3c_tmo_n */
    I3C_B_INT_RI3C_WU_N_IRQSELn   = 353,                    /* IRQSEL No: 353, INT_ri3c_wu_n */
    CANFD_INTRCAN0ERR_IRQSELn     = 354,                    /* IRQSEL No: 354, can_cherr_int_0 */
    CANFD_INTRCAN1ERR_IRQSELn     = 355,                    /* IRQSEL No: 355, can_cherr_int_1 */
    CANFD_INTRCAN2ERR_IRQSELn     = 356,                    /* IRQSEL No: 356, can_cherr_int_2 */
    CANFD_INTRCAN3ERR_IRQSELn     = 357,                    /* IRQSEL No: 357, can_cherr_int_3 */
    CANFD_INTRCAN4ERR_IRQSELn     = 358,                    /* IRQSEL No: 358, can_cherr_int_4 */
    CANFD_INTRCAN5ERR_IRQSELn     = 359,                    /* IRQSEL No: 359, can_cherr_int_5 */
    CANFD_INTRCAN0REC_IRQSELn     = 360,                    /* IRQSEL No: 360, can_comfrx_int_0 */
    CANFD_INTRCAN1REC_IRQSELn     = 361,                    /* IRQSEL No: 361, can_comfrx_int_1 */
    CANFD_INTRCAN2REC_IRQSELn     = 362,                    /* IRQSEL No: 362, can_comfrx_int_2 */
    CANFD_INTRCAN3REC_IRQSELn     = 363,                    /* IRQSEL No: 363, can_comfrx_int_3 */
    CANFD_INTRCAN4REC_IRQSELn     = 364,                    /* IRQSEL No: 364, can_comfrx_int_4 */
    CANFD_INTRCAN5REC_IRQSELn     = 365,                    /* IRQSEL No: 365, can_comfrx_int_5 */
    CANFD_INTRCANGERR_IRQSELn     = 366,                    /* IRQSEL No: 366, can_glerr_int */
    CANFD_INTRCANGRECC_IRQSELn    = 367,                    /* IRQSEL No: 367, can_rxf_int */
    CANFD_INTRCAN0TRX_IRQSELn     = 368,                    /* IRQSEL No: 368, can_tx_int_0 */
    CANFD_INTRCAN1TRX_IRQSELn     = 369,                    /* IRQSEL No: 369, can_tx_int_1 */
    CANFD_INTRCAN2TRX_IRQSELn     = 370,                    /* IRQSEL No: 370, can_tx_int_2 */
    CANFD_INTRCAN3TRX_IRQSELn     = 371,                    /* IRQSEL No: 371, can_tx_int_3 */
    CANFD_INTRCAN4TRX_IRQSELn     = 372,                    /* IRQSEL No: 372, can_tx_int_4 */
    CANFD_INTRCAN5TRX_IRQSELn     = 373,                    /* IRQSEL No: 373, can_tx_int_5 */
                                                            /* IRQSEL No: 374, Reserved */
                                                            /* IRQSEL No: 375, Reserved */
                                                            /* IRQSEL No: 376, Reserved */
                                                            /* IRQSEL No: 377, Reserved */
                                                            /* IRQSEL No: 378, Reserved */
                                                            /* IRQSEL No: 379, Reserved */
                                                            /* IRQSEL No: 380, Reserved */
                                                            /* IRQSEL No: 381, Reserved */
                                                            /* IRQSEL No: 382, Reserved */
                                                            /* IRQSEL No: 383, Reserved */
                                                            /* IRQSEL No: 384, Reserved */
                                                            /* IRQSEL No: 385, Reserved */
                                                            /* IRQSEL No: 386, Reserved */
                                                            /* IRQSEL No: 387, Reserved */
                                                            /* IRQSEL No: 388, Reserved */
                                                            /* IRQSEL No: 389, Reserved */
                                                            /* IRQSEL No: 390, Reserved */
                                                            /* IRQSEL No: 391, Reserved */
    SDHI_eMMC0_OXMN_IRQSELn     = 392,                      /* IRQSEL No: 392, OXMNIRQ */
    SDHI_eMMC0_OXASIO_IRQSELn   = 393,                      /* IRQSEL No: 393, OXASIOIRQ */
    SDHI_eMMC1_OXMN_IRQSELn     = 394,                      /* IRQSEL No: 394, OXMNIRQ */
    SDHI_eMMC1_OXASIO_IRQSELn   = 395,                      /* IRQSEL No: 395, OXASIOIRQ */
    SDHI_eMMC2_OXMN_IRQSELn     = 396,                      /* IRQSEL No: 396, OXMNIRQ */
    SDHI_eMMC2_OXASIO_IRQSELn   = 397,                      /* IRQSEL No: 397, OXASIOIRQ */
    USB_U2H0_INT_IRQSELn        = 398,                      /* IRQSEL No: 398, U2H0_INT */
    USB_U2H0_OHCI_INT_IRQSELn   = 399,                      /* IRQSEL No: 399, U2H0_OHCI_INT */
    USB_U2H0_EHCI_INT_IRQSELn   = 400,                      /* IRQSEL No: 400, U2H0_EHCI_INT */
    USB_U2H0_WAKEON_INT_IRQSELn = 401,                      /* IRQSEL No: 401, U2H0_WAKEON_INT */
    USB_U2H0_OBINT_IRQSELn      = 402,                      /* IRQSEL No: 402, U2H0_OBINT */
    USB_U2H1_INT_IRQSELn        = 403,                      /* IRQSEL No: 403, U2H1_INT */
    USB_U2H1_OHCI_INT_IRQSELn   = 404,                      /* IRQSEL No: 404, U2H1_OHCI_INT */
    USB_U2H1_EHCI_INT_IRQSELn   = 405,                      /* IRQSEL No: 405, U2H1_EHCI_INT */
    USB_U2H1_WAKEON_INT_IRQSELn = 406,                      /* IRQSEL No: 406, U2H1_WAKEON_INT */
    USB_U2H1_OBINT_IRQSELn      = 407,                      /* IRQSEL No: 407, U2H1_OBINT */
    USB_U2P_IXL_INT_IRQSELn     = 408,                      /* IRQSEL No: 408, U2P_IXL_INT */
    USB_U2P_INT_DMA0_IRQSELn    = 409,                      /* IRQSEL No: 409, U2P_INT_DMA_0 */
    USB_U2P_INT_DMA1_IRQSELn    = 410,                      /* IRQSEL No: 410, U2P_INT_DMA_1 */
    USB_U2P_INT_DMAERR_IRQSELn  = 411,                      /* IRQSEL No: 411, U2P_INT_DMAERR */
    USB_U3H0_XHC_INT_IRQSELn    = 412,                      /* IRQSEL No: 412, xhc_int */
    USB_U3H0_PME_INT_IRQSELn    = 413,                      /* IRQSEL No: 413, pme_int */
    USB_U3H0_HSE_INT_IRQSELn    = 414,                      /* IRQSEL No: 414, hse_int */
    USB_U3H0_SMI_INT_IRQSELn    = 415,                      /* IRQSEL No: 415, smi_int */
    USB_U3H0_ALL_INT_IRQSELn    = 416,                      /* IRQSEL No: 416, all_int */
                                                            /* IRQSEL No: 417, Reserved */
                                                            /* IRQSEL No: 418, Reserved */
                                                            /* IRQSEL No: 419, Reserved */
                                                            /* IRQSEL No: 420, Reserved */
                                                            /* IRQSEL No: 421, Reserved */
    GBETH0_SBD_INTR_O_IRQSELn                        = 422, /* IRQSEL No: 422, sbd_intr_o */
    GBETH0_LPI_INTR_O_IRQSELn                        = 423, /* IRQSEL No: 423, lpi_intr_o */
    GBETH0_PMT_INTR_O_IRQSELn                        = 424, /* IRQSEL No: 424, pmt_intr_o */
    GBETH0_SBD_PERCH_TX_INTR_O_0_IRQSELn             = 425, /* IRQSEL No: 425, sbd_perch_tx_intr_o_0 */
    GBETH0_SBD_PERCH_TX_INTR_O_1_IRQSELn             = 426, /* IRQSEL No: 426, sbd_perch_tx_intr_o_1 */
    GBETH0_SBD_PERCH_TX_INTR_O_2_IRQSELn             = 427, /* IRQSEL No: 427, sbd_perch_tx_intr_o_2 */
    GBETH0_SBD_PERCH_TX_INTR_O_3_IRQSELn             = 428, /* IRQSEL No: 428, sbd_perch_tx_intr_o_3 */
    GBETH0_SBD_PERCH_RX_INTR_O_0_IRQSELn             = 429, /* IRQSEL No: 429, sbd_perch_rx_intr_o_0 */
    GBETH0_SBD_PERCH_RX_INTR_O_1_IRQSELn             = 430, /* IRQSEL No: 430, sbd_perch_rx_intr_o_1 */
    GBETH0_SBD_PERCH_RX_INTR_O_2_IRQSELn             = 431, /* IRQSEL No: 431, sbd_perch_rx_intr_o_2 */
    GBETH0_SBD_PERCH_RX_INTR_O_3_IRQSELn             = 432, /* IRQSEL No: 432, sbd_perch_rx_intr_o_3 */
    GBETH0_MCGR_DMA_REQ_O_0_IRQSELn                  = 433, /* IRQSEL No: 433, mcgr_dma_req_o_0 */
    GBETH0_MCGR_DMA_REQ_O_1_IRQSELn                  = 434, /* IRQSEL No: 434, mcgr_dma_req_o_1 */
    GBETH0_MCGR_DMA_REQ_O_2_IRQSELn                  = 435, /* IRQSEL No: 435, mcgr_dma_req_o_2 */
    GBETH0_MCGR_DMA_REQ_O_3_IRQSELn                  = 436, /* IRQSEL No: 436, mcgr_dma_req_o_3 */
    GBETH1_SBD_INTR_O_IRQSELn                        = 437, /* IRQSEL No: 437, sbd_intr_o */
    GBETH1_LPI_INTR_O_IRQSELn                        = 438, /* IRQSEL No: 438, lpi_intr_o */
    GBETH1_PMT_INTR_O_IRQSELn                        = 439, /* IRQSEL No: 439, pmt_intr_o */
    GBETH1_SBD_PERCH_TX_INTR_O_0_IRQSELn             = 440, /* IRQSEL No: 440, sbd_perch_tx_intr_o_0 */
    GBETH1_SBD_PERCH_TX_INTR_O_1_IRQSELn             = 441, /* IRQSEL No: 441, sbd_perch_tx_intr_o_1 */
    GBETH1_SBD_PERCH_TX_INTR_O_2_IRQSELn             = 442, /* IRQSEL No: 442, sbd_perch_tx_intr_o_2 */
    GBETH1_SBD_PERCH_TX_INTR_O_3_IRQSELn             = 443, /* IRQSEL No: 443, sbd_perch_tx_intr_o_3 */
    GBETH1_SBD_PERCH_RX_INTR_O_0_IRQSELn             = 444, /* IRQSEL No: 444, sbd_perch_rx_intr_o_0 */
    GBETH1_SBD_PERCH_RX_INTR_O_1_IRQSELn             = 445, /* IRQSEL No: 445, sbd_perch_rx_intr_o_1 */
    GBETH1_SBD_PERCH_RX_INTR_O_2_IRQSELn             = 446, /* IRQSEL No: 446, sbd_perch_rx_intr_o_2 */
    GBETH1_SBD_PERCH_RX_INTR_O_3_IRQSELn             = 447, /* IRQSEL No: 447, sbd_perch_rx_intr_o_3 */
    PCIE0_INT_ALL_IRQSELn                            = 448, /* IRQSEL No: 448, INT_ALL */
    PCIE0_INTA_RC_IRQSELn                            = 449, /* IRQSEL No: 449, INTA_RC */
    PCIE0_INTB_RC_IRQSELn                            = 450, /* IRQSEL No: 450, INTB_RC */
    PCIE0_INTC_RC_IRQSELn                            = 451, /* IRQSEL No: 451, INTC_RC */
    PCIE0_INTD_RC_IRQSELn                            = 452, /* IRQSEL No: 452, INTD_RC */
    PCIE0_INTMSI_RC_IRQSELn                          = 453, /* IRQSEL No: 453, INTMSI_RC */
    PCIE0_INT_LINK_BANDWIDTH_IRQSELn                 = 454, /* IRQSEL No: 454, INT_LINK_BANDWIDTH */
    PCIE0_INT_LINK_EQUALIZATION_REQUEST_IRQSELn      = 455, /* IRQSEL No: 455, INT_LINK_EQUALIZATION_REQUEST */
    PCIE0_INT_PM_PME_IRQSELn                         = 456, /* IRQSEL No: 456, INT_PM_PME */
    PCIE0_INT_SERR_IRQSELn                           = 457, /* IRQSEL No: 457, INT_SERR */
    PCIE0_INT_SERR_COR_IRQSELn                       = 458, /* IRQSEL No: 458, INT_SERR_COR */
    PCIE0_INT_SERR_NONFATAL_IRQSELn                  = 459, /* IRQSEL No: 459, INT_SERR_NONFATAL */
    PCIE0_INT_SERR_FATAL_IRQSELn                     = 460, /* IRQSEL No: 460, INT_SERR_FATAL */
    PCIE0_DMA_INT_IRQSELn                            = 461, /* IRQSEL No: 461, DMA_INT */
    PCIE0_PCIE_EVT_INT_IRQSELn                       = 462, /* IRQSEL No: 462, PCIE_EVT_INT */
    PCIE0_AXI_ERR_INT_IRQSELn                        = 463, /* IRQSEL No: 463, AXI_ERR_INT */
    PCIE0_MSG_INT_IRQSELn                            = 464, /* IRQSEL No: 464, MSG_INT */
    PCIE0_TURN_OFF_EVENT_IRQSELn                     = 465, /* IRQSEL No: 465, TURN_OFF_EVENT */
    PCIE0_PMU_POWEROFF_IRQSELn                       = 466, /* IRQSEL No: 466, PMU_POWEROFF */
    PCIE0_D3_EVENT_F0_IRQSELn                        = 467, /* IRQSEL No: 467, D3_EVENT_F0 */
    PCIE0_D3_EVENT_F1_IRQSELn                        = 468, /* IRQSEL No: 468, D3_EVENT_F1 */
    PCIE0_CFG_PMCSR_PME_STATUS_WRITECLEAR_F0_IRQSELn = 469, /* IRQSEL No: 469, CFG_PMCSR_PME_STATUS_WRITECLEAR_F0 */
    PCIE0_CFG_PMCSR_PME_STATUS_WRITECLEAR_F1_IRQSELn = 470, /* IRQSEL No: 470, CFG_PMCSR_PME_STATUS_WRITECLEAR_F1 */
                                                            /* IRQSEL No: 471, Reserved */
                                                            /* IRQSEL No: 472, Reserved */
                                                            /* IRQSEL No: 473, Reserved */
                                                            /* IRQSEL No: 474, Reserved */
                                                            /* IRQSEL No: 475, Reserved */
                                                            /* IRQSEL No: 476, Reserved */
                                                            /* IRQSEL No: 477, Reserved */
                                                            /* IRQSEL No: 478, Reserved */
                                                            /* IRQSEL No: 479, Reserved */
                                                            /* IRQSEL No: 480, Reserved */
                                                            /* IRQSEL No: 481, Reserved */
                                                            /* IRQSEL No: 482, Reserved */
                                                            /* IRQSEL No: 483, Reserved */
                                                            /* IRQSEL No: 484, Reserved */
                                                            /* IRQSEL No: 485, Reserved */
                                                            /* IRQSEL No: 486, Reserved */
                                                            /* IRQSEL No: 487, Reserved */
                                                            /* IRQSEL No: 488, Reserved */
                                                            /* IRQSEL No: 489, Reserved */
                                                            /* IRQSEL No: 490, Reserved */
                                                            /* IRQSEL No: 491, Reserved */
                                                            /* IRQSEL No: 492, Reserved */
                                                            /* IRQSEL No: 493, Reserved */
    CRU0_CSI2_LINK_INT_IRQSELn     = 494,                   /* IRQSEL No: 494, csi2_link_int */
    CRU0_IMAGE_CONV_INT_IRQSELn    = 495,                   /* IRQSEL No: 495, image_conv_int */
    CRU0_AXI_MST_ERR_INT_IRQSELn   = 496,                   /* IRQSEL No: 496, axi_mst_err_int */
    CRU0_CRU_VD_ADDR_WEND_IRQSELn  = 497,                   /* IRQSEL No: 497, cru_vd_addr_wend */
    CRU0_CRU_SD_ADDR_WEND_IRQSELn  = 498,                   /* IRQSEL No: 498, cru_sd_addr_wend */
    CRU0_CRU_VSD_ADDR_WEND_IRQSELn = 499,                   /* IRQSEL No: 499, cru_vsd_addr_wend */
                                                            /* IRQSEL No: 500, Reserved */
                                                            /* IRQSEL No: 501, Reserved */
                                                            /* IRQSEL No: 502, Reserved */
                                                            /* IRQSEL No: 503, Reserved */
                                                            /* IRQSEL No: 504, Reserved */
                                                            /* IRQSEL No: 505, Reserved */
                                                            /* IRQSEL No: 506, Reserved */
                                                            /* IRQSEL No: 507, Reserved */
                                                            /* IRQSEL No: 508, Reserved */
                                                            /* IRQSEL No: 509, Reserved */
                                                            /* IRQSEL No: 510, Reserved */
                                                            /* IRQSEL No: 511, Reserved */
                                                            /* IRQSEL No: 512, Reserved */
                                                            /* IRQSEL No: 513, Reserved */
                                                            /* IRQSEL No: 514, Reserved */
                                                            /* IRQSEL No: 515, Reserved */
                                                            /* IRQSEL No: 516, Reserved */
                                                            /* IRQSEL No: 517, Reserved */
                                                            /* IRQSEL No: 518, Reserved */
                                                            /* IRQSEL No: 519, Reserved */
                                                            /* IRQSEL No: 520, Reserved */
                                                            /* IRQSEL No: 521, Reserved */
                                                            /* IRQSEL No: 522, Reserved */
                                                            /* IRQSEL No: 523, Reserved */
                                                            /* IRQSEL No: 524, Reserved */
                                                            /* IRQSEL No: 525, Reserved */
                                                            /* IRQSEL No: 526, Reserved */
                                                            /* IRQSEL No: 527, Reserved */
                                                            /* IRQSEL No: 528, Reserved */
                                                            /* IRQSEL No: 529, Reserved */
                                                            /* IRQSEL No: 530, Reserved */
    DSI_INT_SEQ0_IRQSELn          = 531,                    /* IRQSEL No: 531, dsi_int_sq0 */
    DSI_INT_SEQ1_IRQSELn          = 532,                    /* IRQSEL No: 532, dsi_int_sq1 */
    DSI_INT_VIN1_IRQSELn          = 533,                    /* IRQSEL No: 533, dsi_int_vin1 */
    DSI_INT_RCV_IRQSELn           = 534,                    /* IRQSEL No: 534, dsi_int_rcv */
    DSI_INT_FERR_IRQSELn          = 535,                    /* IRQSEL No: 535, dsi_int_ferr */
    DSI_INT_PPI_IRQSELn           = 536,                    /* IRQSEL No: 536, dsi_int_ppi */
    DSI_INT_DEBUG_IRQSELn         = 537,                    /* IRQSEL No: 537, dsi_int_debug */
    LCDC0_VSPD_INT_IRQSELn        = 538,                    /* IRQSEL No: 538, vs1o_intreq_n */
    LCDC0_DU_INT_IRQSELn          = 539,                    /* IRQSEL No: 539, duo_intr_n */
    MALIG31_IRQGPU_IRQSELn        = 540,                    /* IRQSEL No: 540, IRQGPU */
    MALIG31_IRQJOB_IRQSELn        = 541,                    /* IRQSEL No: 541, IRQJOB */
    MALIG31_IRQMMU_IRQSELn        = 542,                    /* IRQSEL No: 542, IRQMMU */
    MALIG31_IRQEVENT_IRQSELn      = 543,                    /* IRQSEL No: 543, IRQEVENT */
    VCD_VPO_VINTREQ_N_IRQSELn     = 544,                    /* IRQSEL No: 544, vpo_vintreq_n */
    VCD_VPO_CINTREQ_N_IRQSELn     = 545,                    /* IRQSEL No: 545, vpo_cintreq_n */
    SSIU_INTREQ_SSI0_MAIN_IRQSELn = 546,                    /* IRQSEL No: 546, intreq_ssi0_main */
    SSIU_INTREQ_SSI1_MAIN_IRQSELn = 547,                    /* IRQSEL No: 547, intreq_ssi1_main */
    SSIU_INTREQ_SSI2_MAIN_IRQSELn = 548,                    /* IRQSEL No: 548, intreq_ssi2_main */
    SSIU_INTREQ_SSI3_MAIN_IRQSELn = 549,                    /* IRQSEL No: 549, intreq_ssi3_main */
    SSIU_INTREQ_SSI4_MAIN_IRQSELn = 550,                    /* IRQSEL No: 550, intreq_ssi4_main */
    SSIU_INTREQ_SSI5_MAIN_IRQSELn = 551,                    /* IRQSEL No: 551, intreq_ssi5_main */
    SSIU_INTREQ_SSI6_MAIN_IRQSELn = 552,                    /* IRQSEL No: 552, intreq_ssi6_main */
    SSIU_INTREQ_SSI7_MAIN_IRQSELn = 553,                    /* IRQSEL No: 553, intreq_ssi7_main */
    SSIU_INTREQ_SSI8_MAIN_IRQSELn = 554,                    /* IRQSEL No: 554, intreq_ssi8_main */
    SSIU_INTREQ_SSI9_MAIN_IRQSELn = 555,                    /* IRQSEL No: 555, intreq_ssi9_main */
    SPDIF0_INTREQ_SPDIF_N_IRQSELn = 556,                    /* IRQSEL No: 556, intreq_spdif_n */
    SPDIF1_INTREQ_SPDIF_N_IRQSELn = 557,                    /* IRQSEL No: 557, intreq_spdif_n */
    SPDIF2_INTREQ_SPDIF_N_IRQSELn = 558,                    /* IRQSEL No: 558, intreq_spdif_n */
    SCU_INTREQ_SCU0_ARM_IRQSELn   = 559,                    /* IRQSEL No: 559, intreq_scu0_arm */
    SCU_INTREQ_SCU1_ARM_IRQSELn   = 560,                    /* IRQSEL No: 560, intreq_scu1_arm */
    SCU_INTREQ_SCU2_ARM_IRQSELn   = 561,                    /* IRQSEL No: 561, intreq_scu2_arm */
    SCU_INTREQ_SCU3_ARM_IRQSELn   = 562,                    /* IRQSEL No: 562, intreq_scu3_arm */
    SCU_INTREQ_SCU4_ARM_IRQSELn   = 563,                    /* IRQSEL No: 563, intreq_scu4_arm */
    SCU_INTREQ_SCU5_ARM_IRQSELn   = 564,                    /* IRQSEL No: 564, intreq_scu5_arm */
    SCU_INTREQ_SCU6_ARM_IRQSELn   = 565,                    /* IRQSEL No: 565, intreq_scu6_arm */
    SCU_INTREQ_SCU7_ARM_IRQSELn   = 566,                    /* IRQSEL No: 566, intreq_scu7_arm */
    SCU_INTREQ_SCU8_ARM_IRQSELn   = 567,                    /* IRQSEL No: 567, intreq_scu8_arm */
    SCU_INTREQ_SCU9_ARM_IRQSELn   = 568,                    /* IRQSEL No: 568, intreq_scu9_arm */
                                                            /* IRQSEL No: 569, Reserved */
                                                            /* IRQSEL No: 570, Reserved */
                                                            /* IRQSEL No: 571, Reserved */
                                                            /* IRQSEL No: 572, Reserved */
                                                            /* IRQSEL No: 573, Reserved */
                                                            /* IRQSEL No: 574, Reserved */
    ADC0_ADA_ADIREQ_N_IRQSELn   = 575,                      /* IRQSEL No: 575, ada_adireq_n */
    ADC0_ADA_GBADIREQ_N_IRQSELn = 576,                      /* IRQSEL No: 576, ada_gbadireq_n */
    ADC0_ADA_GCADIREQ_N_IRQSELn = 577,                      /* IRQSEL No: 577, ada_gcadireq_n */
    LCDC1_VSPD_INT_IRQSELn      = 578,                      /* IRQSEL No: 578, vs1o_intreq_n */
    LCDC1_DU_INT_IRQSELn        = 579,                      /* IRQSEL No: 579, duo_intr_n */
    VSPI_INTREQ_VSPI0_N_IRQSELn = 580,                      /* IRQSEL No: 580, intreq_vspi0_n */
    ETHOSU55_IRQ_IRQSELn        = 581,                      /* IRQSEL No: 581, EThosU55 IRQ */
    FPD1_INTREQ_FPD1_N_IRQSELn  = 582,                      /* IRQSEL No: 582, intreq_fdp1_n */
    IRQSEL_NONE
} IRQSELn_Type;

/** @} (end addtogroup BSP_MPU_RZG3E) */

#endif                                 /* BSP_IRQ_ID_H */
