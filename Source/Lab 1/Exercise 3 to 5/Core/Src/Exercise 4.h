/*
 * Exercise 4.h
 *
 *  Created on: Sep 12, 2025
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

void display7SEGGreenYellow(int num) {
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, SET);  // a
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, SET);  // b
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, SET); // c
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, SET); // d
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, SET); // e
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, SET); // f
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, SET); // g

    // Switch case for each digit
    switch (num) {
        case 0:
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, RESET);  // a
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, RESET);  // b
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, RESET); // c
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, RESET); // d
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, RESET); // e
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, RESET); // f
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, SET);   // g
            break;
        case 1:
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, RESET);  // b
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, RESET); // c
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, SET);    // a
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, SET);   // d
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, SET);   // e
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, SET);   // f
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, SET);   // g
            break;
        case 2:
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, RESET);  // a
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, RESET);  // b
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, RESET); // d
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, RESET); // e
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, RESET); // g
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, SET);   // c
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, SET);   // f
            break;
        case 3:
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, RESET);  // a
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, RESET);  // b
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, RESET); // c
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, RESET); // d
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, RESET); // g
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, SET);   // e
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, SET);   // f
            break;
        case 4:
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, RESET);  // b
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, RESET); // c
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, RESET); // f
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, RESET); // g
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, SET);    // a
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, SET);   // d
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, SET);   // e
            break;
        case 5:
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, RESET);  // a
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, RESET); // c
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, RESET); // d
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, RESET); // f
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, RESET); // g
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, SET);    // b
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, SET);   // e
            break;
        case 6:
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, RESET);  // a
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, RESET); // c
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, RESET); // d
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, RESET); // e
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, RESET); // f
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, RESET); // g
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, SET);    // b
            break;
        case 7:
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, RESET);  // a
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, RESET);  // b
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, RESET); // c
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, SET);   // d
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, SET);   // e
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, SET);   // f
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, SET);   // g
            break;
        case 8:
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, RESET);  // a
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, RESET);  // b
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, RESET); // c
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, RESET); // d
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, RESET); // e
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, RESET); // f
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, RESET); // g
            break;
        case 9:
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, RESET);  // a
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, RESET);  // b
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, RESET); // c
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, RESET); // d
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, RESET); // f
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, RESET); // g
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, SET);   // e
            break;
    }
}

void count_Up(void)
{
	int counter = 0;
		while (1){
			if(counter >= 10) counter = 0;
	 			display7SEGGreenYellow(counter);
	 		 	display7SEG(counter);
	 		 	counter++;
	 		 	HAL_Delay(1000);
	 	}
}

#endif /* SRC_EXERCISE_4_H_ */
