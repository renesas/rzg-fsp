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
 * File Name    : bsp_address_convert.c
 * Version      : 1.00
 * Description  : bsp_address_convert source code
 *********************************************************************************************************************/

/***********************************************************************************************************************
 * Includes   <System Includes> , "Project Includes"
 **********************************************************************************************************************/
#include "bsp_api.h"
#include "bsp_address_convert.h"

/***********************************************************************************************************************
 * Macro definitions
 **********************************************************************************************************************/
#define BSP_PRV_ADDRESS_TABLE_END    (0xFFFFFFFF)

/***********************************************************************************************************************
 * Typedef definitions
 **********************************************************************************************************************/
typedef struct bsp_address_convert_table
{
    uint32_t original_address;         ///< Base address of CPU Address space
    uint32_t converted_address;        ///< Base address of Bus-master's Address space
    uint32_t size;                     ///< size of region (byte)
} r_bsp_address_convert_table_t;

/***********************************************************************************************************************
 * Exported global variables (to be accessed by other files)
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Private global variables and functions
 **********************************************************************************************************************/
r_bsp_address_convert_table_t g_address_convert_table_array[] =
{
    BSP_ADDRESS_CONVERT_TABLE_BODY,
    {BSP_PRV_ADDRESS_TABLE_END,    BSP_PRV_ADDRESS_TABLE_END,BSP_PRV_ADDRESS_TABLE_END}
};

/*******************************************************************************************************************//**
 * @addtogroup BSP_MCU
 *
 * @{
 **********************************************************************************************************************/

/** @} (end addtogroup BSP_MCU) */

/*******************************************************************************************************************//**
 * Converts the cpu address specified in the argument to the bus address.
 * If an address that does not exist in the external-bus is specified, it will not be converted.
 *
 * @param[in]  original_address    Address that CPU access to slave.
 *
 * @retval     converted_address   Address that Bus-master device access to slave.
 **********************************************************************************************************************/
uint32_t R_BSP_SlaveAddressConversion (uint32_t original_address)
{
    uint32_t converted_address = original_address; // Set unconverted address as initial value.
    r_bsp_address_convert_table_t * p_convert_table = &g_address_convert_table_array[0];

    for ( ; BSP_PRV_ADDRESS_TABLE_END != p_convert_table->original_address; p_convert_table++)
    {
        uint32_t region_base = p_convert_table->original_address;
        if ((region_base <= original_address) && (original_address < (region_base + p_convert_table->size)))
        {
            /* find region: convert address */
            converted_address = (original_address & BSP_ADDRESS_OFFSET_MASK) | p_convert_table->converted_address;

            /* exit loop */
            break;
        }
    }

    return converted_address;
}
