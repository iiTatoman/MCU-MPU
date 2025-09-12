/*
 * Exercise 10.h
 *
 *  Created on: Sep 12, 2025
 *      Author: DELL
 */
#include "main.h"
#include "Exercise 7.h"
#include "Exercise 8.h"
#include "Exercise 9.h"

#ifndef SRC_EXERCISE_10_H_
#define SRC_EXERCISE_10_H_

void completeAnalog_clock(void)
{
    static uint32_t total_seconds = 0;
    int hour, minute, second;

    while (1)
    {
        second = total_seconds % 60;
        minute = (total_seconds / 60) % 60;
        hour = (total_seconds / 3600) % 24;

        clearAllClock();
        setNumberOnClock(hour % 12);
        setNumberOnClock((minute / 5) % 12);
        setNumberOnClock((second / 5) % 12);

        total_seconds++;
        HAL_Delay(1000);
    }
}

#endif /* SRC_EXERCISE_10_H_ */
