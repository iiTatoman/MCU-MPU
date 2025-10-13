/*
 * traffic.c
 *
 * Created on: Oct 10, 2025
 *     Author: iiTatoman
 */

#include "global.h"

static uint8_t ledState = 0;
static uint8_t trafficState = 0;
static uint8_t is_initialized = 0;
static uint8_t is_blink_timer_set = 0;

static int countdown1 = 0;
static int countdown2 = 0;

void resetLEDsAndDisplay(void) {
    HAL_GPIO_WritePin(GPIOA, RED_1_Pin|YEL_1_Pin|GRE_1_Pin|RED_2_Pin|YEL_2_Pin|GRE_2_Pin, RESET);
    updateSegment(10, 10, 10, 10);
    ledState = 0;
    is_initialized = 0;
    is_blink_timer_set = 0;
    set1(1000);
}

void completeTraffic_light(void) {
    uint8_t mode = getSystemMode();

    if (mode == 0) {
        is_blink_timer_set = 0;

        if (!is_initialized) {
            trafficState = 0;
            countdown1 = DURATION_GREEN_DEFAULT;
            countdown2 = DURATION_RED_DEFAULT;
            is_initialized = 1;
        }

        if (isTimer1Expired()) {
            set1(1000);
            updateSegment2Digits(countdown1, countdown2);
            countdown1--;
            countdown2--;

            switch (trafficState) {
                case 0: // State 0: Green horizontal, Red vertical
                    HAL_GPIO_WritePin(GPIOA, GRE_1_Pin, SET);
                    HAL_GPIO_WritePin(GPIOA, RED_2_Pin, SET);
                    HAL_GPIO_WritePin(GPIOA, RED_1_Pin|YEL_1_Pin|YEL_2_Pin|GRE_2_Pin, RESET);
                    if (countdown1 < 1) {
                        trafficState = 1;
                        countdown1 = DURATION_YELLOW_DEFAULT;
                    }
                    break;
                case 1: // State 1: Yellow horizontal, Red vertical
                    HAL_GPIO_WritePin(GPIOA, YEL_1_Pin, SET);
                    HAL_GPIO_WritePin(GPIOA, RED_2_Pin, SET);
                    HAL_GPIO_WritePin(GPIOA, RED_1_Pin|GRE_1_Pin|YEL_2_Pin|GRE_2_Pin, RESET);
                    if (countdown1 < 1) {
                        trafficState = 2;
                        countdown1 = DURATION_RED_DEFAULT;
                        countdown2 = DURATION_GREEN_DEFAULT;
                    }
                    break;
                case 2: // State 2: Red horizontal, Green vertical
                    HAL_GPIO_WritePin(GPIOA, RED_1_Pin, SET);
                    HAL_GPIO_WritePin(GPIOA, GRE_2_Pin, SET);
                    HAL_GPIO_WritePin(GPIOA, YEL_1_Pin|GRE_1_Pin|RED_2_Pin|YEL_2_Pin, RESET);
                    if (countdown2 < 1) {
                        trafficState = 3;
                        countdown2 = DURATION_YELLOW_DEFAULT;
                    }
                    break;
                case 3: // State 3: Red horizontal, Yellow vertical
                    HAL_GPIO_WritePin(GPIOA, RED_1_Pin, SET);
                    HAL_GPIO_WritePin(GPIOA, YEL_2_Pin, SET);
                    HAL_GPIO_WritePin(GPIOA, YEL_1_Pin|GRE_1_Pin|RED_2_Pin|GRE_2_Pin, RESET);
                    if (countdown2 < 1) {
                        trafficState = 0;
                        countdown1 = DURATION_GREEN_DEFAULT;
                        countdown2 = DURATION_RED_DEFAULT;
                    }
                    break;
            }
        }
    } else {
        is_initialized = 0;

        if (!is_blink_timer_set) {
            set3(250);
            is_blink_timer_set = 1;
        }
        if (isTimer3Expired()) {
            set3(250);
            ledState = !ledState;
        }
        // Select Mode 2, 3, 4
        if (mode == 1) {
            updateSegment(0, 2, temp_duration / 10, temp_duration % 10);
            HAL_GPIO_WritePin(GPIOA, RED_1_Pin | RED_2_Pin, ledState);
            HAL_GPIO_WritePin(GPIOA, YEL_1_Pin | YEL_2_Pin | GRE_1_Pin | GRE_2_Pin, RESET);
        } else if (mode == 2) {
            updateSegment(0, 3, temp_duration / 10, temp_duration % 10);
            HAL_GPIO_WritePin(GPIOA, YEL_1_Pin | YEL_2_Pin, ledState);
            HAL_GPIO_WritePin(GPIOA, RED_1_Pin | RED_2_Pin | GRE_1_Pin | GRE_2_Pin, RESET);
        } else if (mode == 3) {
            updateSegment(0, 4, temp_duration / 10, temp_duration % 10);
            HAL_GPIO_WritePin(GPIOA, GRE_1_Pin | GRE_2_Pin, ledState);
            HAL_GPIO_WritePin(GPIOA, RED_1_Pin | RED_2_Pin | YEL_1_Pin | YEL_2_Pin, RESET);
        }
    }
}
