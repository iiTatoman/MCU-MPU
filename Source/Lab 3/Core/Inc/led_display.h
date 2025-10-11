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

void set7SegH(int);
void set7SegV(int);
void scan7Seg(int);

void updateSegment(int, int, int, int);
void updateSegment2Digits(int, int);

#endif /* SRC_LED_DISPLAY_H_ */
