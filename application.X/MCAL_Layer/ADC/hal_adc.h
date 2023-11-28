/* 
 * File:   hal_adc.h
 * Author: W&N
 *
 * Created on November 28, 2023, 3:53 PM
 */

#ifndef HAL_ADC_H


/* Section : Includes */
#include "../proc/pic18f4620.h"
#include "../mcal_std_types.h"
#include "../../MCAL_Layer/GPIO/hal_gpio.h"
#include "hal_adc_cfg.h"
#include "../../MCAL_Layer/Interrupt/mcal_internal_interrupt.h" 
/* Section: Macro Declarations */

/* Section: Macro Functions Declarations */

/* A/D Conversion Status : A/D conversion in progress / A/D Idle */
#define ADC_CONVERSION_STATUS()  (ADCON0bits.GO_nDONE)

/* Section: Data Type Declarations */
typedef enum{
    ADC_CHANNEL_AN0 = 0,
    ADC_CHANNEL_AN1,
    ADC_CHANNEL_AN2,
    ADC_CHANNEL_AN3,
    ADC_CHANNEL_AN4,
    ADC_CHANNEL_AN5,
    ADC_CHANNEL_AN6,
    ADC_CHANNEL_AN7,
    ADC_CHANNEL_AN8,
    ADC_CHANNEL_AN9,
    ADC_CHANNEL_AN10,
    ADC_CHANNEL_AN11,
    ADC_CHANNEL_AN12
}adc_channel_select_t;

/* Section: Function Declarations */


#endif	/* HAL_ADC_H */

