/*
 * ServoMotor.c
 *
 *  Created on: Jan 25, 2025
 *      Author: kakashi
 */
#include "../Inc/ServoMotor.h"

extern TIM_HandleTypeDef htim2;

void ServoMotor_init(void){

	SERVO_MOTOR_TIMER_TYPEDEF->SERVO_MOTOR_TIMER_CCR = 499;
	HAL_TIM_PWM_Start(SERVO_MOTOR_TIMER_HANDLER, SERVO_MOTOR_TIMER_CAHNNEL);


}
void ServoMotor_SetAngle(uint8_t angle){

   SERVO_MOTOR_TIMER_TYPEDEF->SERVO_MOTOR_TIMER_CCR = 499 + ((float)angle   * (2000.0/180)) ;
   HAL_TIM_PWM_Start(SERVO_MOTOR_TIMER_HANDLER, SERVO_MOTOR_TIMER_CAHNNEL);

}
