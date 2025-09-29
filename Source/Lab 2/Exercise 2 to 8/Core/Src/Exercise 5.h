/*
 * Exercise 5.h
 *
 *  Created on: Sep 24, 2025
 *      Author: DELL
 */

#include "main.h"
#ifndef SRC_EXERCISE_5_H_
#define SRC_EXERCISE_5_H_

void updateClockBuffer() {
    extern int led_buffer[4];

    // hour
    led_buffer[0] = hour / 10;      // tens
    led_buffer[1] = hour % 10;      // units

    // minute
    led_buffer[2] = minute / 10;    // tens
    led_buffer[3] = minute % 10;    // units
}

#endif /* SRC_EXERCISE_5_H_ */
