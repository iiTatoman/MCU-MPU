/*
 * Exercise5.h
 *
 *  Created on: Sep 12, 2025
 *      Author: DELL
 */
#include "main.h"
#include "Exercise 4.h"

#ifndef SRC_EXERCISE_5_H_
#define SRC_EXERCISE_5_H_

void completeTraffic_light(void)
{
	// Direction 1
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, RESET); // Red off
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, SET);   // Red on
		for (int count = 5; count >= 0; count--) {
			if (count > 2) {
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, SET);   // Green on
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, RESET); // Yellow off
				display7SEGGreenYellow(count - 2);
	        } else {
	        	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, RESET); // Green off
	        	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, SET);   // Yellow on
	        	display7SEGGreenYellow(count);
	        }
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, RESET); // Yellow off
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET); // Green off
				display7SEG(count);
				HAL_Delay(1000);
	    }

	// Direction 2
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, SET);   // Red on
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, RESET); // Red off
		for (int count = 5; count >= 0; count--) {
			if (count > 2) {
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);   // Green on
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, RESET); // Yellow off
				display7SEGGreenYellow(count - 2);
			} else {
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET); // Green off
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);   // Yellow on
				display7SEGGreenYellow(count);
			}
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, RESET);
				display7SEG(count);
				HAL_Delay(1000);
	   }
}

#endif /* SRC_EXERCISE_5_H_ */
