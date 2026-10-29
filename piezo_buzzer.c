/*
 * piezo_buzzer.c
 *
 *  Created on: Oct 28, 2026
 *      Author: Arnav
 */

#include "main.h"
#include "piezo_buzzer.h"
extern TIM_HandleTypeDef htim3; /*using the TIMER var def in main.c */




void piezo_active(void){
	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_1); /*Enable the signal to piezo buzzer
	(Pwm output on timer 3 channel 1)  */


}

void piezo_inactive(void){
	HAL_TIM_PWM_Stop(&htim3, TIM_CHANNEL_1); /*Disable the signal to piezo buzzer (Pwm output on timer 3 channel 1)  */


}

