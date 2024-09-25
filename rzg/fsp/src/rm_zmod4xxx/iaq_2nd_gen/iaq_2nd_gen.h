/*
* Copyright (c) 2020 - 2024 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/**
 * @file    iaq_2nd_gen.h
 * @author  Renesas Electronics Corporation
 * @version 2.2.0
 * @brief   This file contains the data structure definitions and
 *          the function definitions for the 2nd generation IAQ algorithm.
 * @details The library contains an algorithm to calculate an EtOH, TVOC and
 *          IAQ index from ZMOD4410 measurements.
 *          The implementation is made to allow more than one sensor.
 *
 */

#ifndef IAQ_2ND_GEN_H_
 #define IAQ_2ND_GEN_H_

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
 #define IAQ_2ND_GEN_OK               (0) /**< everything okay */
 #define IAQ_2ND_GEN_STABILIZATION    (1) /**< sensor in stabilization */
/** @}*/

/**
 * @brief Variables that describe the sensor or the algorithm state.
 */
typedef struct
{
    float log_rcda[9];                 /**< log10 of CDA resistances. */
    uint8_t
            stabilization_sample;      /**< Number of remaining stabilization samples. */
    uint8_t need_filter_init;
    float   tvoc_smooth;
    float   tvoc_deltafilter;
    float   acchw;
    float   accow;
    float   etoh;
    float   tvoc;
    float   eco2;
    float   iaq;
} iaq_2nd_gen_handle_t;

/**
 * @brief Variables that receive the algorithm outputs.
 */
typedef struct
{
    float rmox[13];                    /**< MOx resistance. */
    float log_rcda;                    /**< log10 of CDA resistance. */
    float iaq;                         /**< IAQ index. */
    float tvoc;                        /**< TVOC concentration (mg/m^3). */
    float etoh;                        /**< EtOH concentration (ppm). */
    float eco2;                        /**< eCO2 concentration (ppm). */
} iaq_2nd_gen_results_t;

/**
 * @brief Algorithm input structure
 * @param   [in] adc_result Array of 32 bytes with the values from the sensor results table.
 */
typedef struct
{
    uint8_t * adc_result;              /** Sensor raw values. **/
} iaq_2nd_gen_inputs_t;

/**
 * @brief   calculates IAQ results from present sample.
 * @param   [in] handle Pointer to algorithm state variable.
 * @param   [in] dev Pointer to the device.
 * @param   [in] algo_input Structure containing inputs required for algo calculation.
 * @param   [out] results Pointer for storing the algorithm results.
 * @return  error code.
 */
int8_t calc_iaq_2nd_gen(iaq_2nd_gen_handle_t       * handle,
                        zmod4xxx_dev_t             * dev,
                        const iaq_2nd_gen_inputs_t * algo_input,
                        iaq_2nd_gen_results_t      * results);

/**
 * @brief   Initializes the IAQ algorithm.
 * @param   [out] handle Pointer to algorithm state variable.
 * @return  error code.
 */
int8_t init_iaq_2nd_gen(iaq_2nd_gen_handle_t * handle);

 #ifdef __cplusplus
}
 #endif

#endif                                 /* IAQ_2ND_GEN_H_ */
