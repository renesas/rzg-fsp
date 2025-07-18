/*
* Copyright (c) 2020 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

#ifndef BSP_FEATURE_H
#define BSP_FEATURE_H

/***********************************************************************************************************************
 * Includes   <System Includes> , "Project Includes"
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Macro definitions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Typedef definitions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Exported global variables (to be accessed by other files)
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Private global variables and functions
 **********************************************************************************************************************/

/* ADC-Related Definitions */
#define BSP_FEATURE_ADC_E_CLOCK_SOURCE                        (FSP_PRIV_CLOCK_ADCCLK)
#define BSP_FEATURE_ADC_E_HAS_ADCER_ADPRC                     (1U)
#define BSP_FEATURE_ADC_E_HAS_ADCER_ADRFMT                    (1U)
#define BSP_FEATURE_ADC_E_NUM_CALIBRATION_DATA                (2U)
#define BSP_FEATURE_ADC_E_UNIT_0_CHANNELS                     (0xFF)
#define BSP_FEATURE_ADC_E_VALID_UNIT_MASK                     (1U)
#define BSP_FEATURE_ADC_E_STABILIZATION_DELAY_US              (20U)
#define BSP_FEATURE_ADC_E_MAX_UNIT                            (1U)

/* BSP Capabilities Definitions */
#define BSP_FEATURE_BSP_ACCESS_CONTROL_SET_SUPPORT            (1U)
#define BSP_FEATURE_BSP_BOOTCPU_MASK                          (R_SYSC_SYS_LSI_MODE_STAT_BOOTSELECTER_Msk)
#define BSP_FEATURE_BSP_CLOCK_FREQ_INIT_CFG_SUPPORT           (BSP_CFG_MCU_CLOCK_INIT)
#define BSP_FEATURE_BSP_DELAY_LOOP_CYCLES                     (30U)
#define BSP_FEATURE_BSP_INT_SIGNAL_VIA_DMAC                   (0U)
#define BSP_FEATURE_BSP_SYSTEM_CORE_CLOCK                     (FSP_PRIV_CLOCK_I7CLK)
#define BSP_FEATURE_BSP_SLAVE_ADDRESS_CONVERSION_SUPPORT      (1U)
#define BSP_FEATURE_BSP_HAS_CM33BOOT_SUPPORT                  (1U)
#define BSP_FEATURE_BSP_HAS_ELC                               (1U)
#define BSP_FEATURE_BSP_HAS_PFC_OEN_REG                       (1U)
#define BSP_FEATURE_BSP_HAS_ETHER_MODE_REG                    (0U)
#define BSP_FEATURE_BSP_HAS_SD_CH_POC_REG                     (0U)
#define BSP_FEATURE_BSP_HAS_ETH_POC_REG                       (0U)
#define BSP_FEATURE_BSP_SUPPORT_SD_VOLT                       (0U)
#define BSP_FEATURE_BSP_SUPPORT_ETHER_VOLT                    (0U)
#define BSP_FEATURE_BSP_SUPPORT_ETHER_MODE                    (1U)
#define BSP_FEATURE_BSP_SUPPORT_QSPI_VOLT                     (0U)
#define BSP_FEATURE_BSP_SUPPORT_XSPI_VOLT                     (0U)
#define BSP_FEATURE_BSP_SUPPORT_XSPI_OUTPUT                   (1U)
#define BSP_FEATURE_BSP_SUPPORT_I3C                           (0U)
#define BSP_FEATURE_BSP_SUPPORT_BYPASS                        (1U)
#define BSP_FEATURE_BSP_SUPPORT_PFCWE_PROTECT                 (0U)
#define BSP_FEATURE_BSP_SUPPORT_OEN_PROTECT                   (1U)

/* CANFD-Related Definitions */
#define BSP_FEATURE_CANFD_NUM_CHANNELS                        (6)
#define BSP_FEATURE_CANFD_FD_SUPPORT                          (1)
#define BSP_FEATURE_CANFD_LITE                                (0U)
#define BSP_FEATURE_CANFD_NUM_INSTANCES                       (1U)
#define BSP_FEATURE_CANFD_HAS_RSCANFD                         (0U)
#define BSP_FEATURE_CANFD_TXMB_OFFSET                         (32U)
#define BSP_FEATURE_CANFD_TXMB_CHANNEL_OFFSET                 (64U)
#define BSP_FEATURE_CANFD_RXMB_MAX                            (96U)
#define BSP_FEATURE_CANFD_ERROR_GLOBAL_CH0_ECC_REG_POS        (26U)
#define BSP_FEATURE_CANFD_NUM_COMMON_FIFOS                    (18U)

/* Cortex-M33 Feature Definitions */
#define BSP_FEATURE_MCORE_HAS_DSP                             (1U)
#define BSP_FEATURE_MCORE_HAS_FPU                             (1U)

/* CPG-Related Definitions */
#define BSP_FEATURE_CPG_HAS_ICLK                              (1U)
#define BSP_FEATURE_CPG_HAS_I2CLK                             (1U)
#define BSP_FEATURE_CPG_HAS_GCLK                              (0U)
#define BSP_FEATURE_CPG_HAS_S0CLK                             (0U)
#define BSP_FEATURE_CPG_HAS_SPI0CLK                           (0U)
#define BSP_FEATURE_CPG_HAS_SPI1CLK                           (0U)
#define BSP_FEATURE_CPG_HAS_SD0CLK                            (0U)
#define BSP_FEATURE_CPG_HAS_SD1CLK                            (0U)
#define BSP_FEATURE_CPG_HAS_M0CLK                             (0U)
#define BSP_FEATURE_CPG_HAS_M1CLK                             (0U)
#define BSP_FEATURE_CPG_HAS_M2CLK                             (0U)
#define BSP_FEATURE_CPG_HAS_M3CLK                             (0U)
#define BSP_FEATURE_CPG_HAS_M4CLK                             (0U)
#define BSP_FEATURE_CPG_HAS_HPCLK                             (0U)
#define BSP_FEATURE_CPG_HAS_TSUCLK                            (0U)
#define BSP_FEATURE_CPG_HAS_ZTCLK                             (0U)
#define BSP_FEATURE_CPG_HAS_P0CLK                             (1U)
#define BSP_FEATURE_CPG_HAS_P1CLK                             (0U)
#define BSP_FEATURE_CPG_HAS_P2CLK                             (0U)
#define BSP_FEATURE_CPG_HAS_ATCLK                             (0U)
#define BSP_FEATURE_CPG_HAS_OSCCLK                            (1U)
#define BSP_FEATURE_CPG_HAS_I3CLK                             (1U)
#define BSP_FEATURE_CPG_HAS_GTMCLK                            (1U)
#define BSP_FEATURE_CPG_HAS_GPTCLK                            (1U)
#define BSP_FEATURE_CPG_HAS_SCIFCLK                           (1U)
#define BSP_FEATURE_CPG_HAS_RIICCLK                           (1U)
#define BSP_FEATURE_CPG_HAS_RSCICLK                           (1U)
#define BSP_FEATURE_CPG_HAS_RSPICLK                           (1U)
#define BSP_FEATURE_CPG_HAS_ADCCLK                            (1U)
#define BSP_FEATURE_CPG_HAS_CMTWCLK                           (1U)
#define BSP_FEATURE_CPG_HAS_CANFDCLK                          (1U)
#define BSP_FEATURE_CPG_HAS_I3CCLK                            (0U)

/* WDT-Related Definitions */
#define BSP_FEATURE_WDT_TYPE                                  (1U)
#define BSP_FEATURE_WDT_MAX_CHANNEL                           (1U) // For Cortex-M33

/* CMTW-Related Definitions */
#define BSP_FEATURE_CMTW_VALID_CHANNEL_MASK                   (0xFFU)
#define BSP_FEATURE_CMTW_UNIT_NUM                             (0x2U)
#define BSP_FEATURE_CMTW_UNIT_0_MAX_CHANNEL_NUM               (0x3U)
#define BSP_FEATURE_CMTW_UNIT_1_MAX_CHANNEL_NUM               (0x7U)
#define BSP_FEATURE_CMTW_UNIT_0_REG                           (R_CMTW0)
#define BSP_FEATURE_CMTW_UNIT_1_REG                           (R_CMTW4)
#define BSP_FEATURE_CMTW_SOURCE_CLOCK                         (FSP_PRIV_CLOCK_P2CLK)

/* CRC-Related Definitions */
#define BSP_FEATURE_CRC_HAS_SNOOP                             (1U)
#define BSP_FEATURE_CRC_SNOOP_ADDRESS_TYPE_TDR                (0x4U)
#define BSP_FEATURE_CRC_HAS_CRCCR0_LMS                        (1)
#define BSP_FEATURE_CRC_POLYNOMIAL_MASK                       (0x3EU)

/* DMAC-Related Definitions */
#define BSP_FEATURE_DMAC_MAX_CHANNEL                          (16U)
#define BSP_FEATURE_DMAC_MAX_UNIT                             (5U)
#define BSP_FEATURE_DMAC_B_64BIT_SYSTEM                       (0U)

/* GPT-Related Definitions */
#define BSP_FEATURE_GPT_VALID_CHANNEL_MASK                    (0xFFFFU)
#define BSP_FEATURE_GPT_MAX_CHANNEL                           (16U)
#define BSP_FEATURE_GPT_EVENT_COUNT_CHANNEL_MASK              (BSP_FEATURE_GPT_VALID_CHANNEL_MASK)
#define BSP_FEATURE_GPT_TPCS_SHIFT                            (0U)
#define BSP_FEATURE_GPT_CLOCK_DIVIDER_STEP_SIZE               (2U)
#define BSP_FEATURE_GPT_CLOCK_DIVIDER_VALUE_7_9_VALID         (0U)
#define BSP_FEATURE_GPT_ODC_VALID_CHANNEL_MASK                (0U)
#define BSP_FEATURE_GPT_32BIT_CHANNEL_MASK                    (0xFFFFU)
#define BSP_FEATURE_GPT_CLOCK_SOURCE                          (FSP_PRIV_CLOCK_P4CLK)
#define BSP_FEATURE_GPT_STATUS_REGISTER                       GTST
#define BSP_FEATURE_GPT_OUTPUT_DISABLE_REQUEST_STATUS_MASK    (R_GPT0_GTST_OABLF_Msk | R_GPT0_GTST_OABHF_Msk | \
                                                               R_GPT0_GTST_DTEF_Msk)
#define BSP_FEATURE_GPT_SUPPORT_EXTENDED_INTERRUPT_SKIP       (1U)

/* GTM-Related Definitions */
#define BSP_FEATURE_GTM_MAX_CHANNEL                           (8U)
#define BSP_FEATURE_GTM_VALID_CHANNEL_MASK                    (0xFFU)
#define BSP_FEATURE_GTM_SOURCE_CLOCK                          (FSP_PRIV_CLOCK_P1CLK)

/* I3C-Related Definitions */
#define BSP_FEATURE_I3C_B_MAX_DEV_COUNT                       (4U)
#define BSP_FEATURE_I3C_B_NTDTBP0_DEPTH                       (2U)
#define BSP_FEATURE_I3C_B_NUM_CHANNELS                        (1U)
#define BSP_FEATURE_I3C_B_MSTP_OFFSET                         (9U)

/* ICU-Related Definitions */
#define BSP_FEATURE_ICU_FIXED_INTSEL_COUNT                    (353U)
#define BSP_FEATURE_ICU_INTSEL_NUM                            (43U)
#define BSP_FEATURE_ICU_HAS_SELECT_INT                        (1U)

/* IIC-Related Definitions */
#define BSP_FEATURE_IIC_MAX_CHANNEL                           (9U)
#define BSP_FEATURE_IIC_VALID_CHANNEL_MASK                    (0x1FF)
#define BSP_FEATURE_IIC_SOURCE_CLOCK                          (FSP_PRIV_CLOCK_P1CLK)
#define BSP_FEATURE_IIC_REGISTER_SIZE_BY_BIT                  (8U)

/* INTC-Related Definitions */
#define BSP_FEATURE_INTC_IRQ_VALID_CHANNEL_MASK               (0xFFFFU)
#define BSP_FEATURE_INTC_TINT_VALID_CHANNEL_MASK              (0xFFFFFFFFU)
#define BSP_FEATURE_INTC_BASE_ADDR                            (R_INTC)

/* IOPORT-Related Definitions */
#define BSP_FEATURE_IOPORT_PORT_GROUP_NUM                     (2U)
#define BSP_FEATURE_IOPORT_SINGLE_PORT_NUM                    (4U)
#define BSP_FEATURE_IOPORT_SUPPORT_PERIPHERAL_FIL             (1U)
#define BSP_FEATURE_IOPORT_SUPPORT_PERIPHERAL_FIL_NMI         (1U)
#define BSP_FEATURE_IOPORT_SUPPORT_SR_REG                     (1U)
#define BSP_FEATURE_IOPORT_SUPPORT_NOD_REG                    (1U)
#define BSP_FEATURE_IOPORT_SUPPORT_SMT_REG                    (1U)
#define BSP_FEATURE_IOPORT_SUPPORT_PUPD_SP                    (1U)
#define BSP_FEATURE_IOPORT_SUPPORT_IEN_GP                     (1U)
#define BSP_FEATURE_IOPORT_PFC_REG_BITFIELD                   (0xFU)
#define BSP_FEATURE_IOPORT_GP_REG_BASE_NUM                    20
#define BSP_FEATURE_IOPORT_REG_POSTFIX_L                      _L
#define BSP_FEATURE_IOPORT_SP_REG_BASE_NUM                    5
#define BSP_FEATURE_IOPORT_FIL_SP_REG_BASE_NUM                0
#define BSP_FEATURE_IOPORT_IEN_SP_REG_BASE_NUM                9
#define BSP_FEATURE_IOPORT_IEN_SP_REG_BASE_NUM_SYM            9
#define BSP_FEATURE_IOPORT_IEN_GP_REG_BASE_NUM                (0xAU)
#define BSP_FEATURE_IOPORT_IEN_GP_REG_BASE_NUM_SYM            2A
#define BSP_FEATURE_IOPORT_IOLH_SP_REG_BASE_NUM               5
#define BSP_FEATURE_IOPORT_SR_SP_REG_BASE_NUM                 5
#define BSP_FEATURE_IOPORT_NOD_SP_REG_BASE_NUM                5
#define BSP_FEATURE_IOPORT_PUPD_SP_REG_BASE_NUM               5
#define BSP_FEATURE_IOPORT_GROUP1_PORT                        (BSP_IO_PORT_01)
#define BSP_FEATURE_IOPORT_GROUP2_PORT                        (BSP_IO_PORT_07)
#define BSP_FEATURE_IOPORT_FIL_IRQ_FUNC                       (IOPORT_PERIPHERAL_MODE15)
#define BSP_FEATURE_IOPORT_FIL_DMAC_FUNC                      (IOPORT_PERIPHERAL_MODE13)
#define BSP_FEATURE_IOPORT_NMI_FUNC                           (IOPORT_PERIPHERAL_MODE0)
#define BSP_FEATURE_IOPORT_NMI_PIN                            (BSP_IO_PORT_28_PIN_00)
#define BSP_FEATURE_IOPORT_PFC_PWPR_REGWE_A_OFFSET            (6U)
#define BSP_FEATURE_IOPORT_PFC_PWPR_REGWE_B_OFFSET            (5U)
#define BSP_FEATURE_IOPORT_PFC_PWPR_REGWE_A_MASK              (0xFFFFFFBF)
#define BSP_FEATURE_IOPORT_PFC_PWPR_REGWE_B_MASK              (0xFFFFFFDF)

/* MHU-Related Definitions */
#define BSP_FEATURE_MHU_B_NS_VALID_CHANNEL_MASK               (0x00820820U)
#define BSP_FEATURE_MHU_B_NS_SWINT_GET_VALID_CHANNEL_MASK     (0x00000924U)
#define BSP_FEATURE_MHU_B_NS_SWINT_SET_VALID_CHANNEL_MASK     (0x03C00000U)
#define BSP_FEATURE_MHU_B_S_VALID_CHANNEL_MASK                (0x00820820U)
#define BSP_FEATURE_MHU_B_TX_COMPLETE_DELAY()    (vTaskDelay(0))

/* PDM-Related Definitions */
#define BSP_FEATURE_PDM_UNITS                                 (2)
#define BSP_FEATURE_PDM_CHANNELS_PER_UNIT                     (3)

/* POEG-Related Definitions */
#define BSP_FEATURE_POEG_CHANNEL_MASK                         (0xFFU)

/* RTC-Related Definitions */
#define BSP_FEATURE_RTC_PES_256_HZ_UNSELECTABLE               (1)
#define BSP_FEATURE_RTC_CLOCK_SOURCE_UNSELECTABLE             (1)

/* SCI-Related Definitions */
#define BSP_FEATURE_SCI_MAX_CHANNELS                          (10U)
#define BSP_FEATURE_SCI_CHANNELS_MASK                         (0x3FFU)
#define BSP_FEATURE_SCI_UART_FIFO_CHANNELS                    (0x3FFU)
#define BSP_FEATURE_SCI_UART_FIFO_DEPTH                       (32U)
#define BSP_FEATURE_SCI_UART_SUPPORT_HALF_DATA_FUNCTION       (1)
#define BSP_FEATURE_SCI_CLOCK                                 (FSP_PRIV_CLOCK_P5CLK)
#define BSP_FEATURE_SCI_VERSION                               (2U)

/* SCIF-Related Definitions */
#define BSP_FEATURE_SCIF_MAX_CHANNEL                          (1U)
#define BSP_FEATURE_SCIF_CHANNEL_MASK                         (0x01U)
#define BSP_FEATURE_SCIF_RTSCTS_SUPPORT                       (0)
#define BSP_FEATURE_SCIF_CKS2_LIMITATION                      (0)
#define BSP_FEATURE_SCIF_CLOCK                                (FSP_PRIV_CLOCK_P1CLK)

/* SPI-Related Definitions */
#define BSP_FEATURE_SPI_CLK                                   (FSP_PRIV_CLOCK_P4CLK)
#define BSP_FEATURE_SPI_MAX_CHANNEL                           (3U)

/* TrustZone-Related Definitions */
#define BSP_FEATURE_TZ_HAS_TRUSTZONE                          (1U)

/* TSU_B-Related Definitions */
#define BSP_FEATURE_TSU_B_LOW_TEMPERATURE                     (-41.0F)
#define BSP_FEATURE_TSU_B_HIGH_TEMPERATURE                    (126.0F)
#define BSP_FEATURE_TSU_B_CALIBRAION_DATA_CHECK_ENABLE        (1)
#define BSP_FEATURE_TSU_B_CALIBRAION_DATA_INVALID             (0U)
#define BSP_FEATURE_TSU_B_ELC_TRIGGER_SUPPORTED               (1)
#define BSP_FEATURE_TSU_B_CONTINUOUS_MODE_SUPPORTED           (0)
#define BSP_FEATURE_TSU_B_VALID_UNIT_MASK                     (0x2U)

/* XSPI-Related Definitions */
#define BSP_FEATURE_XSPI_CHANNELS                             (0x01U)
#define BSP_FEATURE_XSPI_NUM_CHIP_SELECT                      (2U)
#define BSP_FEATURE_XSPI_NUM_UNITS                            (1U)
#define BSP_FEATURE_XSPI_DO_NOT_HAS_CSSCTL                    (1U)
#define BSP_FEATURE_XSPI_START_ADDRESS                        (0x60000000)
#define BSP_FEATURE_XSPI_DEVICE_CS0_1_ADDRESS_DELTA           (0x08000000)
#define BSP_FEATURE_XSPI_DEVICE_START_MIRROR_ADDRESS          (0x70000000)
#define BSP_FEATURE_XSPI_NUM_BRIDGE_CONTROL_CHANNEL           (2U)

#endif                                 /* BSP_FEATURE_H */
