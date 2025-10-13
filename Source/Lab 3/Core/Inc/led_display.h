/*
 * led_display.h
 *
 *  Created on: Oct 3, 2025
 *      Author: iiTatoman
 */

#ifndef SRC_LED_DISPLAY_H_
#define SRC_LED_DISPLAY_H_

#include "global.h"

extern int segment_buffer[4];

void setHorizontal(int);
void setVertical(int);
void scanSegment(int);

void updateSegment(int, int, int, int);
void updateSegment2Digits(int, int);

#endif /* SRC_LED_DISPLAY_H_ */
