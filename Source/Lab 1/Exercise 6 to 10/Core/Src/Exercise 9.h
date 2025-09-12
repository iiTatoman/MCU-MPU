/*
 * Exercise 9.h
 *
 *  Created on: Sep 12, 2025
 *      Author: DELL
 */
#include "main.h"
#include "Exercise 6.h"

#ifndef SRC_EXERCISE_9_H_
#define SRC_EXERCISE_9_H_

void clearNumberOnClock(int num)
{
	if (num >= 0 && num < 12)
	    {
	        HAL_GPIO_WritePin(GPIOA, led_pins[num], RESET);
	    }
}

#endif /* SRC_EXERCISE_9_H_ */
