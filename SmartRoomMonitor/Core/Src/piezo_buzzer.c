#include "main.h"
#include "piezo_buzzer.h"

extern TIM_HandleTypeDef htim3;   /* defined in main.c */

/* Start the 2 kHz square wave on TIM3 channel 1 -> buzzer sounds */
void piezo_active(void)
{
  HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_1);
}

/* Stop the square wave -> buzzer silent */
void piezo_inactive(void)
{
  HAL_TIM_PWM_Stop(&htim3, TIM_CHANNEL_1);
}
