/* 
 * File:   application.h
 * Author: W&N
 *
 * Created on November 25, 2023, 2:48 PM
 */

#ifndef APPLICATION_H
#define	APPLICATION_H

/* Section : Includes */
//#include "ECU_Layer/LED/ecu_led.h"
#include "ECU_Layer/LED/ecu_led.h"
#include "ECU_Layer/button/ecu_button.h"
#include "ECU_Layer/ecu_layer_init.h"
#include "MCAL_Layer/Interrupt/mcal_external_interrupt.h"

/* Section: Macro Declarations */

/* Section: Macro Functions Declarations */

/* Section: Data Type Declarations */
extern led_t led1;
/* Section: Function Declarations */
void application_intialize(void);

#define _XTAL_FREQ 8000000UL


#endif	/* APPLICATION_H */

