/*
 * ServoMotor.h
 *
 *  Created on: Jan 25, 2025
 *      Author: kakashi
 */

#ifndef INC_SERVOMOTOR_H_
#define INC_SERVOMOTOR_H_
#include "stm32f4xx_hal.h"

#define SERVO_MOTOR_TIMER_HANDLER   &htim2
#define SERVO_MOTOR_TIMER_CAHNNEL  TIM_CHANNEL_1
#define SERVO_MOTOR_TIMER_TYPEDEF  TIM2
#define SERVO_MOTOR_TIMER_CCR  CCR1


void ServoMotor_init(void);
void ServoMotor_SetAngle(uint8_t angle);
#endif /* INC_SERVOMOTOR_H_ */
