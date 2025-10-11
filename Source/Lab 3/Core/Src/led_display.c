/*
 * led_display.c
 *
 * Created on: Oct 10, 2025
 *     Author: iiTatoman
 */

#include "led_display.h"

int segment_buffer[4] = {0, 0, 0, 0};

GPIO_PinState pinArr[11][7] = {
    {0, 0, 0, 0, 0, 0, 1}, // 0
    {1, 0, 0, 1, 1, 1, 1}, // 1
    {0, 0, 1, 0, 0, 1, 0}, // 2
    {0, 0, 0, 0, 1, 1, 0}, // 3
    {1, 0, 0, 1, 1, 0, 0}, // 4
    {0, 1, 0, 0, 1, 0, 0}, // 5
    {0, 1, 0, 0, 0, 0, 0}, // 6
    {0, 0, 0, 1, 1, 1, 1}, // 7
    {0, 0, 0, 0, 0, 0, 0}, // 8
    {0, 0, 0, 0, 1, 0, 0}, // 9
    {1, 1, 1, 1, 1, 1, 1}  // OFF
};


void setHorizontal(int num) {
    int index = (num >= 0 && num <= 9) ? num : 10;

    HAL_GPIO_WritePin(SEG_a_GPIO_Port, SEG_a_Pin, pinArr[index][0]);
    HAL_GPIO_WritePin(SEG_b_GPIO_Port, SEG_b_Pin, pinArr[index][1]);
    HAL_GPIO_WritePin(SEG_c_GPIO_Port, SEG_c_Pin, pinArr[index][2]);
    HAL_GPIO_WritePin(SEG_d_GPIO_Port, SEG_d_Pin, pinArr[index][3]);
    HAL_GPIO_WritePin(SEG_e_GPIO_Port, SEG_e_Pin, pinArr[index][4]);
    HAL_GPIO_WritePin(SEG_f_GPIO_Port, SEG_f_Pin, pinArr[index][5]);
    HAL_GPIO_WritePin(SEG_g_GPIO_Port, SEG_g_Pin, pinArr[index][6]);
}


void setVertical(int num) {
    int index = (num >= 0 && num <= 9) ? num : 10;

    HAL_GPIO_WritePin(SEG_a1_GPIO_Port, SEG_a1_Pin, pinArr[index][0]);
    HAL_GPIO_WritePin(SEG_b1_GPIO_Port, SEG_b1_Pin, pinArr[index][1]);
    HAL_GPIO_WritePin(SEG_c1_GPIO_Port, SEG_c1_Pin, pinArr[index][2]);
    HAL_GPIO_WritePin(SEG_d1_GPIO_Port, SEG_d1_Pin, pinArr[index][3]);
    HAL_GPIO_WritePin(SEG_e1_GPIO_Port, SEG_e1_Pin, pinArr[index][4]);
    HAL_GPIO_WritePin(SEG_f1_GPIO_Port, SEG_f1_Pin, pinArr[index][5]);
    HAL_GPIO_WritePin(SEG_g1_GPIO_Port, SEG_g1_Pin, pinArr[index][6]);
}

void scanSegment(int state) {
    switch (state % 2) {
    case 0:
        HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
        HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
        HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
        HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);

        setHorizontal(segment_buffer[0]);
        setVertical(segment_buffer[2]);
        break;

    case 1:
        HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
        HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
        HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
        HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);

        setHorizontal(segment_buffer[1]);
        setVertical(segment_buffer[3]);
        break;

    default:
        break;
    }
}

void updateSegment(int a, int b, int c, int d) {
    segment_buffer[0] = a;
    segment_buffer[1] = b;
    segment_buffer[2] = c;
    segment_buffer[3] = d;
}

void updateSegment2Digits(int firstNum, int secNum) {
    segment_buffer[0] = firstNum / 10;
    segment_buffer[1] = firstNum % 10;
    segment_buffer[2] = secNum / 10;
    segment_buffer[3] = secNum % 10;
}
