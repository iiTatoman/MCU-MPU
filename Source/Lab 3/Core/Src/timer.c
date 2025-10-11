/*
 * timer.c
 *
 *  Created on: Oct 3, 2025
 *      Author: iiTatoman
 */

#include "timer.h"

static int scan_state = 0;

int timer1 = 0, timer2 = 0, timer3 = 0;
int flag1 = 0, flag2 = 0, flag3 = 0;

void set1(int timer){
    timer1 = timer / CYCLE;
    flag1 = 0;
}

void set2(int timer){
    timer2 = timer / CYCLE;
    flag2 = 0;
}

void set3(int timer){
    timer3 = timer / CYCLE;
    flag3 = 0;
}

void resetTimer(int timer){
	switch(timer){
	case 1:
		timer1 = 0;
		flag1 = 0;
		break;
	case 2:
		timer2 = 0;
		flag2 = 0;
		break;
	case 3:
		timer3 = 0;
		flag3 = 0;
		break;
	default:
		timer1 = 0;
		timer2 = 0;
		timer3 = 0;
		flag1 = 0;
		flag2 = 0;
		flag3 = 0;
		break;
	}
}

void timerRun(){
    timer1--;
    timer2--;
    timer3--;
    if (timer1 == 0){
        flag1 = 1;
    }
    if (timer2 == 0){
        flag2 = 1;
    }
    if (timer3 == 0){
        flag3 = 1;
    }
}

int isTimer1Expired(void){
	if(flag1 == 1){
		flag1 = 0;
		return 1;
	}
	return 0;
}

int isTimer3Expired(void){
	if(flag3 == 1){
		flag3 = 0;
		return 1;
	}
	return 0;
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
    if (htim->Instance == TIM2) {
        button_reading();
        fsm_for_input_processing();
        timerRun();
        if (flag2) {
            scanSegment(scan_state);
            scan_state = (scan_state + 1) % 2;
            set2(250);
        }
    }
}
