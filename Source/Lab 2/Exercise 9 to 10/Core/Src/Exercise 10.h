/*
 * Exercise 10.h
 *
 *  Created on: Sep 27, 2025
 *      Author: DELL
 */

#include "main.h"
#ifndef SRC_EXERCISE_10_H_
#define SRC_EXERCISE_10_H_

void shiftLeftMatrix(void) {
    for (int i = 0; i < MAX_LED_MATRIX; i++) {
        uint8_t temp = matrix_buffer[i];
        matrix_buffer[i] = (temp << 1) | (temp >> 7);
    }
}

#endif /* SRC_EXERCISE_10_H_ */
