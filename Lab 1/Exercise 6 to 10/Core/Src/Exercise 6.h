/*
 * Exercise 6.h
 *
 *  Created on: Sep 12, 2025
 *      Author: DELL
 */
#include "main.h"

#ifndef SRC_EXERCISE_6_H_
#define SRC_EXERCISE_6_H_

uint16_t led_pins[12] = {
    LED_2_Pin,  // Hour 1
    LED_3_Pin,  // Hour 2
    LED_4_Pin,  // Hour 3
    LED_5_Pin,  // Hour 4
    LED_6_Pin,  // Hour 5
    LED_7_Pin,  // Hour 6
    LED_8_Pin,  // Hour 7
    LED_9_Pin,  // Hour 8
    LED_10_Pin, // Hour 9
    LED_11_Pin, // Hour 10
    LED_12_Pin, // Hour 11
    LED_1_Pin   // Hour 12
};

int count = 0;
void analog_clock(void)
{
	while(1)
	{
		if (count < 12) {
			HAL_GPIO_WritePin(GPIOA, led_pins[count], SET);
		} else {
			// All on for full circle flash
			HAL_GPIO_WritePin(GPIOA, LED_1_Pin|LED_2_Pin|LED_3_Pin|LED_4_Pin
                                |LED_5_Pin|LED_6_Pin|LED_7_Pin|LED_8_Pin
                                |LED_9_Pin|LED_10_Pin|LED_11_Pin|LED_12_Pin, SET);
		}

		HAL_Delay(1000);
		if (count == 12) {
			count = 0;
		} else {
			count++;
		}
	}
}

#endif /* SRC_EXERCISE_6_H_ */
