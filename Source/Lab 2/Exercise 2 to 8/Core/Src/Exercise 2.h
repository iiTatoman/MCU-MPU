/*
 * Exercise 2.h
 *
 *  Created on: Sep 22, 2025
 *      Author: DELL
 */

#include "main.h"
#ifndef SRC_EXERCISE_2_H_
#define SRC_EXERCISE_2_H_

void display7SEG(int num) {
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, SET); // a
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, SET); // b
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, SET); // c
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET); // d
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET); // e
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET); // f
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET); // g

    // Switch case for each digit
    switch (num) {
        case 0:
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET); // a
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET); // b
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET); // c
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET); // d
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET); // e
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET); // f
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET);   // g
            break;
        case 1:
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET); // b
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET); // c
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, SET);   // a
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET);   // d
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);   // e
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET);   // f
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET);   // g
            break;
        case 2:
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET); // a
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET); // b
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET); // d
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET); // e
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET); // g
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, SET);   // c
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET);   // f
            break;
        case 3:
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET); // a
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET); // b
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET); // c
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET); // d
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET); // g
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);   // e
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET);   // f
            break;
        case 4:
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET); // b
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET); // c
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET); // f
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET); // g
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, SET);   // a
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET);   // d
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);   // e
            break;
        case 5:
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET); // a
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET); // c
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET); // d
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET); // f
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET); // g
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, SET);   // b
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);   // e
            break;
        case 6:
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET); // a
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET); // c
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET); // d
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET); // e
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET); // f
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET); // g
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, SET);   // b
            break;
        case 7:
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET); // a
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET); // b
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET); // c
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET);   // d
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);   // e
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET);   // f
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET);   // g
            break;
        case 8:
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET); // a
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET); // b
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET); // c
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET); // d
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET); // e
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET); // f
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET); // g
            break;
        case 9:
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET); // a
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET); // b
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET); // c
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET); // d
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET); // f
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET); // g
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);   // e
            break;
    }
}

int counter = 100;
int seg_counter = 50;
int led_status = 0;
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
	counter--;
	if (counter <= 0) {
		counter = 100;
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_4);
	}

	seg_counter--;
	if (seg_counter <= 0) {
		seg_counter = 50;

		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET);

		if (led_status == 0) {
			//7-SEG 1
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
			display7SEG(1);
			led_status = 1;
		} else if (led_status == 1) {
		//7-SEG 2
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
			display7SEG(2);
			led_status = 2;
		} else if (led_status == 2) {
		//7-SEG 2
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET);
			display7SEG(3);
			led_status = 3;
		} else {
		//7-SEG 2
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, SET);
			display7SEG(0);
			led_status = 0;
		}
	}
}

#endif /* SRC_EXERCISE_2_H_ */
