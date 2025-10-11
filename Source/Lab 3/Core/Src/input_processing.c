/*
 * input_processing.c
 *
 * Created on: Oct 3, 2025
 * 	   Author: iiTatoman
 */

#include "global.h"

uint8_t systemMode = 0;
int temp_duration = 0;

enum ButtonState { BUTTON_RELEASED, BUTTON_PRESSED, BUTTON_PRESSED_MORE_THAN_1_SECOND };
enum ButtonState button1State = BUTTON_RELEASED;

uint8_t getSystemMode(void) {
    return systemMode;
}

int is_button_just_pressed(int button_index) {
    static GPIO_PinState prev_state[3] = {GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET};

    int is_pressed_now = is_button_pressed(button_index);

    if (is_pressed_now && (prev_state[button_index] == GPIO_PIN_SET)) {
        prev_state[button_index] = GPIO_PIN_RESET;
        return 1;
    }

    if (!is_pressed_now) {
        prev_state[button_index] = GPIO_PIN_SET;
    }

    return 0;
}

void fsm_for_input_processing(void) {
	// Button 1: changing mode
    if (is_button_just_pressed(0)) {
        systemMode = (systemMode + 1) % 4;

        switch(systemMode) {
            case 1:
                temp_duration = DURATION_RED_DEFAULT;
                break;
            case 2:
                temp_duration = DURATION_YELLOW_DEFAULT;
                break;
            case 3:
                temp_duration = DURATION_GREEN_DEFAULT;
                break;
            case 0:
                resetLEDsAndDisplay();
                break;
        }
    }
    // Button 2: changing duration
    if (systemMode > 0) {
        switch(button1State) {
            case BUTTON_RELEASED:
                if (is_button_just_pressed(1)) {
                    button1State = BUTTON_PRESSED;
                    temp_duration++;
                    if (temp_duration > 99) {
                        temp_duration = 1;
                    }
                }
                break;
            case BUTTON_PRESSED:
                if (!is_button_pressed(1)) {
                    button1State = BUTTON_RELEASED;
                } else if (is_button_pressed_1s(1)) {
                    button1State = BUTTON_PRESSED_MORE_THAN_1_SECOND;
                    temp_duration++;
                    if (temp_duration > 99) {
                        temp_duration = 1;
                    }
                }
                break;
            case BUTTON_PRESSED_MORE_THAN_1_SECOND:
                if (!is_button_pressed(1)) {
                    button1State = BUTTON_RELEASED;
                } else if (is_button_pressed_1s(1)) {
                    temp_duration++;
                    if (temp_duration > 99) {
                        temp_duration = 1;
                    }
                }
                break;
        }
        //Button 3: confirm
        if (is_button_just_pressed(2)) {
            switch(systemMode) {
                case 1:
                    DURATION_RED_DEFAULT = temp_duration;
                    break;
                case 2:
                    DURATION_YELLOW_DEFAULT = temp_duration;
                    break;
                case 3:
                    DURATION_GREEN_DEFAULT = temp_duration;
                    break;
            }
            systemMode = 0;
            resetLEDsAndDisplay();
        }
    }
}
