/*
* Copyright (c) 2020 - 2024 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/*******************************************************************************************************************//**
 * @ingroup RENESAS_SENSOR_INTERFACES
 * @defgroup RM_ZMOD4XXX_API ZMOD4XXX Middleware Interface
 * @brief Interface for ZMOD4XXX Middleware functions.
 *
 * @section RM_ZMOD4XXX_API_Summary Summary
 * The ZMOD4XXX interface provides ZMOD4XXX functionality.
 *
 *
 * @{
 **********************************************************************************************************************/

/* Guards against multiple inclusion */
#ifndef RM_ZMOD4XXX_API_H_
#define RM_ZMOD4XXX_API_H_

/**********************************************************************************************************************
 * Includes   <System Includes> , "Project Includes"
 *********************************************************************************************************************/

#if defined(__CCRX__) || defined(__ICCRX__) || defined(__RX__)
 #include "platform.h"
#elif defined(__CCRL__) || defined(__ICCRL78__) || defined(__RL78__)
 #include "r_cg_macrodriver.h"
 #include <stddef.h>
#else
 #include "bsp_api.h"
 #include "r_external_irq_api.h"
#endif

#include "rm_comms_api.h"

#if defined(__CCRX__) || defined(__ICCRX__) || defined(__RX__)
#elif defined(__CCRL__) || defined(__ICCRL78__) || defined(__RL78__)
#else

/* Common macro for FSP header files. There is also a corresponding FSP_FOOTER macro at the end of this file. */
FSP_HEADER
#endif

/**********************************************************************************************************************
 * Macro definitions
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Typedef definitions
 *********************************************************************************************************************/

/** Event in the callback function */
typedef enum e_rm_zmod4xxx_event
{
    RM_ZMOD4XXX_EVENT_SUCCESS = 0,
    RM_ZMOD4XXX_EVENT_MEASUREMENT_COMPLETE,
    RM_ZMOD4XXX_EVENT_MEASUREMENT_NOT_COMPLETE,
    RM_ZMOD4XXX_EVENT_DEV_ERR_POWER_ON_RESET,  ///< Unexpected reset
    RM_ZMOD4XXX_EVENT_DEV_ERR_ACCESS_CONFLICT, ///< Getting invalid results while results readout
    RM_ZMOD4XXX_EVENT_DEV_ERR_DAMAGE,          ///< Sensor may be damaged.
    RM_ZMOD4XXX_EVENT_ERROR,
} rm_zmod4xxx_event_t;

/** ZMOD4XXX sensor API callback parameter definition */
typedef struct st_rm_zmod4xxx_callback_args
{
    void const        * p_context;
    rm_zmod4xxx_event_t event;
} rm_zmod4xxx_callback_args_t;

/** ZMOD4XXX raw data structure */
typedef struct st_rm_zmod4xxx_raw_data
{
    uint8_t adc_data[32]; // In RRH46410, this means measurement results
} rm_zmod4xxx_raw_data_t;

/** Sulfur-Odor status */
typedef enum e_rm_zmod4xxx_sulfur_odor
{
    RM_ZMOD4XXX_SULFUR_ODOR_ACCEPTABLE = 0,
    RM_ZMOD4XXX_SULFUR_ODOR_UNACCEPTABLE,
} rm_zmod4xxx_sulfur_odor_t;

/** ZMOD4XXX IAQ 1st gen data structure */
typedef struct st_rm_zmod4xxx_iaq_1st_data
{
    float rmox;                        ///< MOx resistance.
    float rcda;                        ///< CDA resistance.
    float iaq;                         ///< IAQ index.
    float tvoc;                        ///< TVOC concentration (mg/m^3).
    float etoh;                        ///< EtOH concentration (ppm).
    float eco2;                        ///< eCO2 concentration (ppm).
} rm_zmod4xxx_iaq_1st_data_t;

/** ZMOD4XXX IAQ 2nd gen data structure */
typedef struct st_rm_zmod4xxx_iaq_2nd_data
{
    float rmox[13];                    ///< MOx resistance.
    float log_rcda;                    ///< log10 of CDA resistance for IAQ 2nd Gen.
    float log_nonlog_rcda[3];          ///< log10 of CDA resistance for IAQ 2nd Gen ULP.
    float iaq;                         ///< IAQ index.
    float tvoc;                        ///< TVOC concentration (mg/m^3).
    float etoh;                        ///< EtOH concentration (ppm).
    float eco2;                        ///< eCO2 concentration (ppm).
    uint8_t sample_id;                 ///< Sample ID. RRH46410 only.
    float   rel_iaq;                   ///< Relative IAQ. RRH46410 only.
} rm_zmod4xxx_iaq_2nd_data_t;

/** ZMOD4XXX Odor structure */
typedef struct st_rm_zmod4xxx_odor_data
{
    bool  control_signal;              ///< Control signal input for odor lib.
    float odor;                        ///< Concentration ratio for odor lib.
} rm_zmod4xxx_odor_data_t;

/** ZMOD4XXX Sulfur-Odor structure */
typedef struct st_rm_zmod4xxx_sulfur_odor_data
{
    float rmox[9];                     ///< MOx resistance.
    float intensity;                   ///< odor intensity rating ranges from 0.0 to 5.0 for sulfur lib
    rm_zmod4xxx_sulfur_odor_t odor;    ///< sulfur_odor classification for lib
} rm_zmod4xxx_sulfur_odor_data_t;

/** ZMOD4XXX OAQ 1st gen data structure */
typedef struct st_rm_zmod4xxx_oaq_1st_data
{
    float rmox[15];                    ///< MOx resistance
    float aiq;                         ///< Air Quality
} rm_zmod4xxx_oaq_1st_data_t;

/** ZMOD4XXX OAQ 2nd gen data structure */
typedef struct st_rm_zmod4xxx_oaq_2nd_data
{
    float    rmox[8];                  ///< MOx resistance.
    float    temperature;              ///< Temperature (degC) used for ambient compensation
    float    ozone_concentration;      ///< The ozone concentration in part-per-billion
    uint16_t fast_aqi;                 ///< 1-minute average of the Air Quality Index according to the EPA standard based on ozone
    uint16_t epa_aqi;                  ///< The Air Quality Index according to the EPA standard based on ozone
} rm_zmod4xxx_oaq_2nd_data_t;

/** ZMOD4XXX RAQ structure */
typedef struct st_rm_zmod4xxx_raq_data
{
    bool  control_signal;              ///< Control signal input for raq lib.
    float raq;                         ///< Concentration ratio for raq lib.
} rm_zmod4xxx_raq_data_t;

/** ZMOD4XXX Relative IAQ data structure */
typedef struct st_rm_zmod4xxx_rel_iaq_data
{
    float rmox[13];                    ///< MOx resistances.
    float rhtr;                        ///< heater resistance.
    float rel_iaq;                     ///< relative IAQ index.
} rm_zmod4xxx_rel_iaq_data_t;

/** ZMOD4XXX PBAQ data structure */
typedef struct st_rm_zmod4xxx_pbaq_data
{
    float rmox[13];                    ///< MOx resistance.
    float log_rcda;                    ///< log10 of CDA resistance.
    float rhtr;                        ///< heater resistance.
    float temperature;                 ///< ambient temperature (degC).
    float tvoc;                        ///< TVOC concentration (mg/m^3).
    float etoh;                        ///< EtOH concentration (ppm).
    uint8_t sample_id;                 ///< Sample ID. RRH46410 only.
} rm_zmod4xxx_pbaq_data_t;

/** ZMOD4XXX NO2 O3 data structure */
typedef struct st_rm_zmod4xxx_no2_o3_data
{
    float    rmox[4];                           ///< MOx resistance.
    float    temperature;                       ///< Temperature (degC) used for ambient compensation
    float    ozone_concentration;               ///< O3_conc_ppb stands for the ozone concentration in part-per-billion
    float    no2_concentration;                 ///< NO2_conc_ppb stands for the NO2 concentration in part-per-billion
    uint16_t fast_aqi;                          ///< FAST_AQI stands for a 1-minute average of the Air Quality Index according to the EPA standard based on ozone
    uint16_t epa_aqi;                           ///< EPA_AQI stands for the Air Quality Index according to the EPA standard based on ozone.
} rm_zmod4xxx_no2_o3_data_t;

/** ZMOD4XXX configuration block */
typedef struct st_rm_zmod4xxx_cfg
{
    rm_comms_instance_t const * p_comms_instance;                    ///< Pointer to Communications Middleware instance.
    void const                * p_irq_instance;                      ///< Pointer to IRQ instance.
    void const                * p_context;                           ///< Pointer to the user-provided context.
    void const                * p_extend;                            ///< Pointer to extended configuration by instance of interface.
    void (* p_comms_callback)(rm_zmod4xxx_callback_args_t * p_args); ///< I2C Communications callback
    void (* p_irq_callback)(rm_zmod4xxx_callback_args_t * p_args);   ///< IRQ callback
} rm_zmod4xxx_cfg_t;

/** ZMOD4xxx Control block. Allocate an instance specific control block to pass into the API calls.
 */
typedef void rm_zmod4xxx_ctrl_t;

/** ZMOD4XXX APIs */
typedef struct st_rm_zmod4xxx_api
{
    /** Open sensor.
     *
     * @param[in]  p_ctrl       Pointer to control structure.
     * @param[in]  p_cfg        Pointer to configuration structure.
     */
    fsp_err_t (* open)(rm_zmod4xxx_ctrl_t * const p_ctrl, rm_zmod4xxx_cfg_t const * const p_cfg);

    /** Start measurement
     *
     * @param[in]  p_ctrl                 Pointer to control structure.
     */
    fsp_err_t (* measurementStart)(rm_zmod4xxx_ctrl_t * const p_ctrl);

    /** Stop measurement
     *
     * @param[in]  p_ctrl                 Pointer to control structure.
     */
    fsp_err_t (* measurementStop)(rm_zmod4xxx_ctrl_t * const p_ctrl);

    /** Read status of the sensor
     *
     * @param[in]  p_ctrl                 Pointer to control structure.
     */
    fsp_err_t (* statusCheck)(rm_zmod4xxx_ctrl_t * const p_ctrl);

    /** Read ADC data.
     *
     * @param[in]  p_ctrl                 Pointer to control structure.
     * @param[in]  p_raw_data             Pointer to raw data structure.
     */
    fsp_err_t (* read)(rm_zmod4xxx_ctrl_t * const p_ctrl, rm_zmod4xxx_raw_data_t * const p_raw_data);

    /** Calculate IAQ 1st Gen. values from ADC data.
     *
     * @param[in]  p_ctrl               Pointer to control structure.
     * @param[in]  p_raw_data           Pointer to raw data.
     * @param[in]  p_zmod4xxx_data      Pointer to ZMOD4XXXX data structure.
     */
    fsp_err_t (* iaq1stGenDataCalculate)(rm_zmod4xxx_ctrl_t * const p_ctrl, rm_zmod4xxx_raw_data_t * const p_raw_data,
                                         rm_zmod4xxx_iaq_1st_data_t * const p_zmod4xxx_data);

    /** Calculate IAQ 2nd Gen. values from ADC data.
     *
     * @param[in]  p_ctrl               Pointer to control structure.
     * @param[in]  p_raw_data           Pointer to raw data.
     * @param[in]  p_zmod4xxx_data      Pointer to ZMOD4XXXX data structure.
     */
    fsp_err_t (* iaq2ndGenDataCalculate)(rm_zmod4xxx_ctrl_t * const p_ctrl, rm_zmod4xxx_raw_data_t * const p_raw_data,
                                         rm_zmod4xxx_iaq_2nd_data_t * const p_zmod4xxx_data);

    /** Calculate Odor values from ADC data.
     *
     * @param[in]  p_ctrl               Pointer to control structure.
     * @param[in]  p_raw_data           Pointer to raw data.
     * @param[in]  p_zmod4xxx_data      Pointer to ZMOD4XXXX data structure.
     */
    fsp_err_t (* odorDataCalculate)(rm_zmod4xxx_ctrl_t * const p_ctrl, rm_zmod4xxx_raw_data_t * const p_raw_data,
                                    rm_zmod4xxx_odor_data_t * const p_zmod4xxx_data);

    /** Calculate Sulfur Odor values from ADC data.
     *
     * @param[in]  p_ctrl               Pointer to control structure.
     * @param[in]  p_raw_data           Pointer to raw data.
     * @param[in]  p_zmod4xxx_data      Pointer to ZMOD4XXXX data structure.
     */
    fsp_err_t (* sulfurOdorDataCalculate)(rm_zmod4xxx_ctrl_t * const p_ctrl, rm_zmod4xxx_raw_data_t * const p_raw_data,
                                          rm_zmod4xxx_sulfur_odor_data_t * const p_zmod4xxx_data);

    /** Calculate OAQ 1st Gen. values from ADC data.
     *
     * @param[in]  p_ctrl               Pointer to control structure.
     * @param[in]  p_raw_data           Pointer to raw data.
     * @param[in]  p_zmod4xxx_data      Pointer to ZMOD4XXXX data structure.
     */
    fsp_err_t (* oaq1stGenDataCalculate)(rm_zmod4xxx_ctrl_t * const p_ctrl, rm_zmod4xxx_raw_data_t * const p_raw_data,
                                         rm_zmod4xxx_oaq_1st_data_t * const p_zmod4xxx_data);

    /** Calculate OAQ 2nd Gen. values from ADC data.
     *
     * @param[in]  p_ctrl               Pointer to control structure.
     * @param[in]  p_raw_data           Pointer to raw data.
     * @param[in]  p_zmod4xxx_data      Pointer to ZMOD4XXXX data structure.
     */
    fsp_err_t (* oaq2ndGenDataCalculate)(rm_zmod4xxx_ctrl_t * const p_ctrl, rm_zmod4xxx_raw_data_t * const p_raw_data,
                                         rm_zmod4xxx_oaq_2nd_data_t * const p_zmod4xxx_data);

    /** Calculate RAQ values from ADC data.
     *
     * @param[in]  p_ctrl               Pointer to control structure.
     * @param[in]  p_raw_data           Pointer to raw data.
     * @param[in]  p_zmod4xxx_data      Pointer to ZMOD4XXXX data structure.
     */
    fsp_err_t (* raqDataCalculate)(rm_zmod4xxx_ctrl_t * const p_ctrl, rm_zmod4xxx_raw_data_t * const p_raw_data,
                                   rm_zmod4xxx_raq_data_t * const p_zmod4xxx_data);

    /** Calculate Relative IAQ values from ADC data.
     *
     * @param[in]  p_ctrl               Pointer to control structure.
     * @param[in]  p_raw_data           Pointer to raw data.
     * @param[in]  p_zmod4xxx_data      Pointer to ZMOD4XXXX data structure.
     */
    fsp_err_t (* relIaqDataCalculate)(rm_zmod4xxx_ctrl_t * const p_ctrl, rm_zmod4xxx_raw_data_t * const p_raw_data,
                                      rm_zmod4xxx_rel_iaq_data_t * const p_zmod4xxx_data);

    /** Calculate PBAQ values from ADC data.
     *
     * @param[in]  p_ctrl               Pointer to control structure.
     * @param[in]  p_raw_data           Pointer to raw data.
     * @param[in]  p_zmod4xxx_data      Pointer to ZMOD4XXXX data structure.
     */
    fsp_err_t (* pbaqDataCalculate)(rm_zmod4xxx_ctrl_t * const p_ctrl, rm_zmod4xxx_raw_data_t * const p_raw_data,
                                    rm_zmod4xxx_pbaq_data_t * const p_zmod4xxx_data);

    /** Calculate NO2 O3 values from ADC data.
     *
     * @param[in]  p_ctrl               Pointer to control structure.
     * @param[in]  p_raw_data           Pointer to raw data.
     * @param[in]  p_zmod4xxx_data      Pointer to ZMOD4XXXX data structure.
     */
    fsp_err_t (* no2O3DataCalculate)(rm_zmod4xxx_ctrl_t * const p_ctrl, rm_zmod4xxx_raw_data_t * const p_raw_data,
                                         rm_zmod4xxx_no2_o3_data_t * const p_zmod4xxx_data);

    /** Set temperature and humidity.
     *
     * @param[in]  p_ctrl                 Pointer to control structure.
     * @param[in]  temperature            Temperature (deg C).
     * @param[in]  humidity               Humidity (percent).
     */
    fsp_err_t (* temperatureAndHumiditySet)(rm_zmod4xxx_ctrl_t * const p_ctrl, float temperature, float humidity);

    /** Check device error event.
     *
     * @param[in]  p_ctrl                 Pointer to control structure.
     */
    fsp_err_t (* deviceErrorCheck)(rm_zmod4xxx_ctrl_t * const p_ctrl);

    /** Close the sensor
     *
     * @param[in]  p_ctrl               Pointer to control structure.
     */
    fsp_err_t (* close)(rm_zmod4xxx_ctrl_t * const p_ctrl);
} rm_zmod4xxx_api_t;

/** ZMOD4XXX instance */
typedef struct st_rm_zmod4xxx_instance
{
    rm_zmod4xxx_ctrl_t      * p_ctrl;  /**< Pointer to the control structure for this instance */
    rm_zmod4xxx_cfg_t const * p_cfg;   /**< Pointer to the configuration structure for this instance */
    rm_zmod4xxx_api_t const * p_api;   /**< Pointer to the API structure for this instance */
} rm_zmod4xxx_instance_t;

/**********************************************************************************************************************
 * Exported global functions
 *********************************************************************************************************************/

#if defined(__CCRX__) || defined(__ICCRX__) || defined(__RX__)
#elif defined(__CCRL__) || defined(__ICCRL78__) || defined(__RL78__)
#else

/* Common macro for FSP header files. There is also a corresponding FSP_FOOTER macro at the end of this file. */
FSP_FOOTER
#endif

#endif                                 /* RM_ZMOD4XXX_API_H_*/

/******************************************************************************************************************//**
 * @} (end addtogroup RM_ZMOD4XXX_API)
 *********************************************************************************************************************/
