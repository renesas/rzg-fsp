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

/*******************************************************************************************************************//**
 * @ingroup RENESAS_INTERFACES
 * @defgroup MHU_API MHU Interface (for secure and non secure channels)
 * @brief Interface for Message Handling Unit
 *
 * @section MHU_API_SUMMARY Summary
 * The Message Handling Unit interface provides a common API for MHU HAL drivers.
 * The Message Handling Unit interface supports:
 *        - Message communication between Cortex-A55 and Cortex-M33.
 *        - 32-bit data can be communicated between CPUs via shared memory.
 *
 * Implemented by:
 * - @ref MHU_S
 * - @ref MHU_NS
 *
 * @{
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Includes
 **********************************************************************************************************************/

/* Register definitions, common services and error codes. */
#include "bsp_api.h"

#ifndef R_MHU_API_H
 #define R_MHU_API_H

/* Common macro for FSP header files. There is also a corresponding FSP_FOOTER macro at the end of this file. */
FSP_HEADER

/**********************************************************************************************************************
 * Macro definitions
 **********************************************************************************************************************/
 #define MHU_API_VERSION_MAJOR    (1U)
 #define MHU_API_VERSION_MINOR    (0U)

/**********************************************************************************************************************
 * Typedef definitions
 **********************************************************************************************************************/

typedef enum e_mhu_send_type
{
    MHU_SEND_TYPE_MSG = 0,             ///< Channel for sending "message" and receiving "response".
    MHU_SEND_TYPE_RSP,                 ///< Channel for sending "response" and receiving "message".
} mhu_send_type_t;

/** MHU callback parameter definition */
typedef struct st_mhu_callback_args
{
    /** Placeholder for user data.  Set in @ref mhu_api_t::open function in @ref mhu_cfg_t. */
    void const * p_context;
    uint32_t     channel;              ///< Channel where the receive interrupt occurred.
    uint32_t     msg;                  ///< 32-bit received data.
} mhu_callback_args_t;

/** MHU configuration block */
typedef struct st_mhu_cfg
{
    /** Generic configuration */
    uint32_t  channel;                                 ///< Identifier recognizable by implementation
    uint8_t   rx_ipl;                                  ///< Receive interrupt priority
    IRQn_Type rx_irq;                                  ///< Receive interrupt ID

    /** Parameters to control software behavior */
    void (* p_callback)(mhu_callback_args_t * p_args); ///< Pointer to callback function

    void const * p_shared_memory;                      ///< Pointer to 64-bit send/receive data buffer.

    /** Placeholder for user data.  Passed to the user callback in @ref mhu_callback_args_t. */
    void const * p_context;
} mhu_cfg_t;

/** MHU control block.  Allocate an instance specific control block to pass into the MHU API calls.
 * @par Implemented as
 * - mhu_instance_ctrl_t
 */
typedef void mhu_ctrl_t;

/** Interface definition for MHU */
typedef struct st_mhu_api
{
    /** Opens the MHU driver and initializes the hardware.
     * @par Implemented as
     * - @ref R_MHU_S_Open()
     * - @ref R_MHU_NS_Open()
     *
     * @param[in] p_ctrl    Pointer to control block. Must be declared by user. Elements are set here.
     * @param[in] p_cfg     Pointer to configuration structure.
     */
    fsp_err_t (* open)(mhu_ctrl_t * const p_ctrl, mhu_cfg_t const * const p_cfg);

    /** Performs a send operation on an MHU device.
     * @par Implemented as
     * - @ref R_MHU_S_MsgSend()
     * - @ref R_MHU_NS_MsgSend()
     *
     * @param[in] p_ctrl    Pointer to control block set in mhu_api_t::open call.
     * @param[in] msg       32bit send data.
     */
    fsp_err_t (* msgSend)(mhu_ctrl_t * const p_ctrl, uint32_t const msg);

    /**
     * Specify callback function and optional context pointer and working memory pointer.
     * @par Implemented as
     * - @ref R_MHU_S_CallbackSet()
     * - @ref R_MHU_NS_CallbackSet()
     *
     * @param[in]   p_ctrl                   Control block set in @ref mhu_api_t::open call for this channel.
     * @param[in]   p_callback               Callback function to register
     * @param[in]   p_context                Pointer to send to callback function
     * @param[in]   p_callback_memory        Pointer to volatile memory where callback structure can be allocated.
     *                                       Callback arguments allocated here are only valid during the callback.
     */
    fsp_err_t (* callbackSet)(mhu_ctrl_t * const p_api_ctrl, void (* p_callback)(mhu_callback_args_t *),
                              void const * const p_context, mhu_callback_args_t * const p_callback_memory);

    /** Closes the driver and releases the MHU device.
     * @par Implemented as
     * - @ref R_MHU_S_Close()
     * - @ref R_MHU_NS_Close()
     *
     * @param[in] p_ctrl    Pointer to control block set in mhu_api_t::open call.
     */
    fsp_err_t (* close)(mhu_ctrl_t * const p_ctrl);

    /* DEPRECATED Get version and stores it in provided pointer p_version.
     * @par Implemented as
     * - @ref R_MHU_S_VersionGet()
     * - @ref R_MHU_NS_VersionGet()
     *
     * @param[out] p_version  Code and API version used.
     */
    fsp_err_t (* versionGet)(fsp_version_t * const p_version);
} mhu_api_t;

/** This structure encompasses everything that is needed to use an instance of this interface. */
typedef struct st_mhu_instance
{
    mhu_ctrl_t      * p_ctrl;          ///< Pointer to the control structure for this instance
    mhu_cfg_t const * p_cfg;           ///< Pointer to the configuration structure for this instance
    mhu_api_t const * p_api;           ///< Pointer to the API structure for this instance
} mhu_instance_t;

/******************************************************************************************************************//**
 * @} (end addtogroup MHU_API)
 *********************************************************************************************************************/

/* Common macro for FSP header files. There is also a corresponding FSP_HEADER macro at the top of this file. */
FSP_FOOTER

#endif                                 /* R_MHU_API_H */
