/*
 * Exercise 9.h
 *
 *  Created on: Sep 27, 2025
 *      Author: DELL
 */

#include "main.h"
#ifndef SRC_UPDATELEDMATRIX_H_
#define SRC_UPDATELEDMATRIX_H_

const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
uint8_t matrix_buffer[8] = {0x18, 0x24, 0x42, 0x7E, 0x42, 0x42, 0x42, 0x00};
void updateLEDMatrix(int index) {

    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_10 | GPIO_PIN_11 |
                            GPIO_PIN_12 | GPIO_PIN_13 | GPIO_PIN_14 | GPIO_PIN_15, SET);

    // Write row data to PB8–PB15 (active high)
    for(int row = 0; row < 8; row++) {
    	if(matrix_buffer[row] & (1 << index)) {
    		HAL_GPIO_WritePin(GPIOB, (1 << (8+row)), RESET);
        } else {
        	HAL_GPIO_WritePin(GPIOB, (1 << (8+row)), SET);
        }
    }

    switch (index) {
        case 0:
            HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, RESET);
            break;
        case 1:
        	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, RESET);
            break;
        case 2:
            HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, RESET);
            break;
        case 3:
            HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, RESET);
            break;
        case 4:
            HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, RESET);
            break;
        case 5:
            HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, RESET);
            break;
        case 6:
            HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, RESET);
            break;
        case 7:
            HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, RESET);
            break;
        default:
            break;
    }
}

#endif /* SRC_UPDATELEDMATRIX_H_ */
