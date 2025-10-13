/*
 * timer.h
 *
 *  Created on: Oct 3, 2025
 *      Author: iiTatoman
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

#include "global.h"

#define CYCLE 10

extern int timer1, timer2, timer3;
extern int flag1, flag2, flag3;

void set1(int timer);
void set2(int timer);
void set3(int timer);

int isTimer1Expired(void);
int isTimer3Expired(void);

void resetTimer(int timer);
void timerRun();

#endif /* INC_TIMER_H_ */
