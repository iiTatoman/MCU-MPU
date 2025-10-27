/*
 * task.c
 *
 *  Created on: Oct 22, 2025
 *      Author: iiTatoman
 */

#include "task.h"
#include <main.h>

extern volatile uint32_t systemTick;

void task1(void) {
    HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_1); //0.5ms
}

void task2(void) {
    HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_2); //1.0ms
}

void task3(void) {
    HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_3); //1.5ms
}

void task4(void) {
    HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_4); //1.0ms
}

void task5(void) {
    HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5); //2.5ms
}
