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
 * File Name    : bsp_slave_address.h
 * Version      : 1.00
 * Description  : bsp_slave_address header
 *********************************************************************************************************************/

#ifndef BSP_SLAVE_ADDRESS_H
#define BSP_SLAVE_ADDRESS_H

/**********************************************************************************************************************
 * Macro definitions
 *********************************************************************************************************************/
#define BSP_ADDRESS_OFFSET_MASK                    (0x0FFFFFFF)

#define BSP_ADDRESS_CM_SRAM_CODE_NONSECURE_BASE    (0x00000000)
#define BSP_ADDRESS_CM_SRAM_CODE_SECURE_BASE       (0x10000000)
#define BSP_ADDRESS_CM_SRAM_DATA_NONSECURE_BASE    (0x20000000)
#define BSP_ADDRESS_CM_SRAM_DATA_SECURE_BASE       (0x30000000)
#define BSP_ADDRESS_CA_SRAM_BASE                   (0x00000000)
#define BSP_ADDRESS_SRAM_SIZE                      (0x10000000)

#define BSP_ADDRESS_CM_IOREG_NONSECURE_BASE        (0x40000000)
#define BSP_ADDRESS_CM_IOREG_SECURE_BASE           (0x50000000)
#define BSP_ADDRESS_CA_IOREG_BASE                  (0x10000000)
#define BSP_ADDRESS_IOREG_SIZE                     (0x10000000)

#define BSP_ADDRESS_CM_DDR_NONSECURE_BASE          (0x60000000)
#define BSP_ADDRESS_CM_DDR_SECURE_BASE             (0x70000000)
#define BSP_ADDRESS_CA_DDR_BASE                    (0x40000000)
#define BSP_ADDRESS_DDR_SIZE                       (0x10000000)

#define BSP_ADDRESS_CM_SPI_NONSECURE_BASE          (0x80000000)
#define BSP_ADDRESS_CM_SPI_SECURE_BASE             (0x90000000)
#define BSP_ADDRESS_CA_SPI_BASE                    (0x20000000)
#define BSP_ADDRESS_SPI_SIZE                       (0x10000000)

#define BSP_ADDRESS_CONVERT_TABLE_BODY                                                          \
    {BSP_ADDRESS_CM_SRAM_CODE_NONSECURE_BASE, BSP_ADDRESS_CA_SRAM_BASE, BSP_ADDRESS_SRAM_SIZE}, \
    {BSP_ADDRESS_CM_SRAM_CODE_SECURE_BASE, BSP_ADDRESS_CA_SRAM_BASE, BSP_ADDRESS_SRAM_SIZE},    \
    {BSP_ADDRESS_CM_SRAM_DATA_NONSECURE_BASE, BSP_ADDRESS_CA_SRAM_BASE, BSP_ADDRESS_SRAM_SIZE}, \
    {BSP_ADDRESS_CM_SRAM_DATA_SECURE_BASE, BSP_ADDRESS_CA_SRAM_BASE, BSP_ADDRESS_SRAM_SIZE},    \
    {BSP_ADDRESS_CM_IOREG_NONSECURE_BASE, BSP_ADDRESS_CA_IOREG_BASE, BSP_ADDRESS_IOREG_SIZE},   \
    {BSP_ADDRESS_CM_IOREG_SECURE_BASE, BSP_ADDRESS_CA_IOREG_BASE, BSP_ADDRESS_IOREG_SIZE},      \
    {BSP_ADDRESS_CM_DDR_NONSECURE_BASE, BSP_ADDRESS_CA_DDR_BASE, BSP_ADDRESS_DDR_SIZE},         \
    {BSP_ADDRESS_CM_DDR_SECURE_BASE, BSP_ADDRESS_CA_DDR_BASE, BSP_ADDRESS_DDR_SIZE},            \
    {BSP_ADDRESS_CM_SPI_NONSECURE_BASE, BSP_ADDRESS_CA_SPI_BASE, BSP_ADDRESS_SPI_SIZE},         \
    {BSP_ADDRESS_CM_SPI_SECURE_BASE, BSP_ADDRESS_CA_SPI_BASE, BSP_ADDRESS_SPI_SIZE}

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
 * @addtogroup BSP_MPU_RZG2UL
 * @{
 *********************************************************************************************************************/

/** @} (end addtogroup BSP_MPU_RZG2UL) */

#endif                                 /* BSP_SLAVE_ADDRESS_H */
