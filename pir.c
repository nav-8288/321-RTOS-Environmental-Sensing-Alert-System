/*
 * pir.c
 *
 *  Created on: Oct 29, 2026
 *      Author: Arnav
 */


#include "pir.h"
#include "main.h"

int readPIR(void){

	int detected = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_1); /*read the pir motion sensor val at PA1 (config. in STM32MX)  */
	/*GPIO PORT A, PIN 1 */
	return detected; /*return the val (0 = NO MOTION, 1 = MOTION) */
}
