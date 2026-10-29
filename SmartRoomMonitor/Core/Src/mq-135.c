/*
 * mq-135.c
 *
 *  Created on: Oct 29, 2026
 *      Author: Arnav
 */

#include "mq-135.h"
#include "main.h"

extern ADC_HandleTypeDef hadc; /*using the ADC var def in main.c  */

int readMQ(void){

	int adc_reading = -1; /*var stores the MQ-135 reading, init to -1 to indicate error  */

	HAL_ADC_Start(&hadc); /*Enables ADC, start the conversion.*/

	int polling = HAL_ADC_PollForConversion(&hadc, 150); /* Wait max 150 ms for the conversion to be completed by polling */

	if (polling == HAL_OK){ /*if the ADC was successfully converted */

		adc_reading = HAL_ADC_GetValue(&hadc); /* Get ADC  conversion result.*/

	}



	HAL_ADC_Stop(&hadc); /*Stop the ADC conversion after gathering result*/

	return adc_reading; /*Return the reading */


}
