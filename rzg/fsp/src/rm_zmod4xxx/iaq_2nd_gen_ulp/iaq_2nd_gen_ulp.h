/*
* Copyright (c) 2020 - 2024 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/**
 * @file    iaq_2nd_gen_ulp.h
 * @author Renesas Electronics Corporation
 * @version 1.0.0
 * @brief   This file contains the data structure definitions and
 *          the function definitions for the 2nd Gen IAQ ULP algorithm.
 * @details The library contains an algorithm to calculate an eCO2, EtOH, TVOC and
 *          IAQ index from ZMOD4410 measurements.
 *          The implementation is made to allow more than one sensor.
 *
 */

#ifndef IAQ_2ND_GEN_ULP_H_
 #define IAQ_2ND_GEN_ULP_H_

 #ifdef __cplusplus
extern "C" {
 #endif

 #include <stdint.h>
 #include <math.h>
 #if 0                                 // For multiple operations
  #include "zmod4xxx_types.h"

/**
 * @brief Variables that describe the library version
 */
typedef struct
{
    uint8_t major;
    uint8_t minor;
    uint8_t patch;
} algorithm_version;
 #else
  #include "../zmod4xxx_types.h"
 #endif

/** \addtogroup RetCodes Return codes of the algorithm functions.
 *  @{
 */
 #define IAQ_2ND_GEN_ULP_OK               (0) /**< everything okay */
 #define IAQ_2ND_GEN_ULP_STABILIZATION    (1) /**< sensor in stabilization */
/** @}*/

/**
 * @brief   The algorithm handle contains variables that describe the sensor
 *          or the algorithm state. It needs to be passed with between
 *          initialization and after each algorithm calculation.
 */
typedef struct
{
    float log_nonlog_rcda[3];          /**< various baselines. */
    uint8_t
            stabilization_sample;      /**< Number of remaining stabilization samples. */
    uint8_t need_filter_init;
    float   tvoc_smooth;
    float   tvoc_deltafilter;
    float   acchw;
    float   accow;
    float   etoh;
    float   eco2;
} iaq_2nd_gen_ulp_handle_t;

/**
 * @brief Variables that receive the algorithm outputs.
 */
typedef struct
{
    float rmox[13];                    /**< MOx resistance. */
    float log_nonlog_rcda[3];          /**< various baselines. */
    float iaq;                         /**< IAQ index. */
    float tvoc;                        /**< TVOC concentration (mg/m^3). */
    float etoh;                        /**< EtOH concentration (ppm). */
    float eco2;                        /**< eCO2 concentration (ppm). */
} iaq_2nd_gen_ulp_results_t;

/**
 * @brief  Algorithm input structure
 */
typedef struct
{
    uint8_t * adc_result;              /**< Sensor raw values. */
    float     humidity_pct;            /**< Relative Humditiy in percentage */
    float     temperature_degc;        /**< Ambient Temperature in C */
} iaq_2nd_gen_ulp_inputs_t;

/**
 * @brief   calculates IAQ results from present sample.
 * @param   [in] handle Pointer to algorithm state variable.
 * @param   [in] dev Pointer to the device.
 * @param   [in] algo_input Structure containing inputs required for algo calculation.
 * @param   [out] results Pointer for storing the algorithm results.
 * @return  error code.
 */
int8_t calc_iaq_2nd_gen_ulp(iaq_2nd_gen_ulp_handle_t       * handle,
                            zmod4xxx_dev_t                 * dev,
                            const iaq_2nd_gen_ulp_inputs_t * algo_input,
                            iaq_2nd_gen_ulp_results_t      * results);

/**
 * @brief   Initializes the IAQ algorithm.
 * @param   [out] handle Pointer to algorithm state variable.
 * @return  error code.
 */
int8_t init_iaq_2nd_gen_ulp(iaq_2nd_gen_ulp_handle_t * handle);

 #ifdef __cplusplus
}
 #endif

#endif                                 /* IAQ_2ND_GEN_ULP_H_ */
