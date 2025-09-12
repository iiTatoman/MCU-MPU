/*
 * Exercise 7.h
 *
 *  Created on: Sep 12, 2025
 *      Author: DELL
 */
#include "main.h"

#ifndef SRC_EXERCISE_7_H_
#define SRC_EXERCISE_7_H_

void clearAllClock(void)
{
	HAL_GPIO_WritePin(GPIOA, LED_1_Pin|LED_2_Pin|LED_3_Pin|LED_4_Pin
                        |LED_5_Pin|LED_6_Pin|LED_7_Pin|LED_8_Pin
                        |LED_9_Pin|LED_10_Pin|LED_11_Pin|LED_12_Pin, RESET);
}

#endif /* SRC_EXERCISE_7_H_ */
