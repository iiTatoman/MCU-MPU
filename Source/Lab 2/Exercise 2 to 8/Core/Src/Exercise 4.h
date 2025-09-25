/*
 * Exercise 4.h
 *
 *  Created on: Sep 23, 2025
 *      Author: DELL
 */

	#include "main.h"
#ifndef SRC_EXERCISE_4_H_
#define SRC_EXERCISE_4_H_

void display7SEG(int num) {
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, SET); // a
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, SET); // b
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, SET); // c
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET); // d
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET); // e
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET); // f
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET); // g

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

const int MAX_LED = 4;
int index_led = 0;
int led_buffer[4] = {1, 2, 3, 4};
void update7SEG(int index) {
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, RESET); // SEG1
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET); // SEG2
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET); // SEG3
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET); // SEG4

    switch (index) {
        case 0:
        	// SEG1
            HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
            display7SEG(led_buffer[0]);
            break;
        case 1:
        	// SEG2
            HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
            display7SEG(led_buffer[1]);
            break;
        case 2:
        	// SEG3
            HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET);
            display7SEG(led_buffer[2]);
            break;
        case 3:
        	// SEG4
            HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, SET);
            display7SEG(led_buffer[3]);
            break;
        default:
            break;
    }
}

int counter = 100;
int led_status = 0;
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
    counter--;
    if (counter <= 0) {
        counter = 100;
        HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_4);
        HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
    }

    if (counter == 100 || counter == 25) {
        update7SEG(index_led);
        index_led = (index_led + 1) % MAX_LED;
    }
}

#endif /* SRC_EXERCISE_4_H_ */
