/*
 * global.h
 *
 *  Created on: Oct 10, 2025
 *      Author: iiTatoman
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "input_reading.h"
#include "input_processing.h"
#include "led_display.h"
#include "timer.h"
#include "traffic.h"

extern int DURATION_RED_DEFAULT;
extern int DURATION_YELLOW_DEFAULT;
extern int DURATION_GREEN_DEFAULT;

extern int temp_duration;

uint8_t getSystemMode(void);
void completeTraffic_light(void);

#endif /* INC_GLOBAL_H_ */
