/*
 * sch.c
 *
 *  Created on: Oct 22, 2025
 *      Author: iiTatoman
 */

#include "sch.h"
#include <string.h>

Task taskList[SCH_MAX_TASKS];
uint32_t currentTaskCount = 0;
uint32_t errorCode = 0;
volatile uint32_t systemTick = 0;

void SCH_Init(void) {
    memset(taskList, 0, sizeof(taskList));
    currentTaskCount = 0;
    errorCode = 0;
    systemTick = 0;

    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5, SET);
}

uint32_t SCH_Add_Task(void (*pFunction)(), uint32_t DELAY, uint32_t PERIOD) {
    if (currentTaskCount >= SCH_MAX_TASKS) {
        errorCode = ERROR_SCH_TOO_MANY_TASKS;
        return 0;
    }

    uint32_t newTaskID = currentTaskCount;
    taskList[newTaskID].funcPtr = pFunction;
    taskList[newTaskID].delay = DELAY;
    taskList[newTaskID].period = PERIOD;
    taskList[newTaskID].runme = 0;
    taskList[newTaskID].taskID = newTaskID;
    taskList[newTaskID].isActive = true;

    currentTaskCount++;
    return newTaskID;
}

void SCH_Update(void) {
    for (uint32_t i = 0; i < currentTaskCount; i++) {
        if (taskList[i].isActive && taskList[i].delay > 0) {
            taskList[i].delay--;
            if (taskList[i].delay == 0) {
                taskList[i].runme = 1;
                if (taskList[i].period > 0) {
                    taskList[i].delay = taskList[i].period;
                }
            }
        }
    }
    systemTick++;
}

void SCH_Dispatch_Tasks(void) {
    for (uint32_t i = 0; i < currentTaskCount; i++) {
        if (taskList[i].isActive && taskList[i].runme) {
            taskList[i].runme = 0;
            (*taskList[i].funcPtr)();

            if (taskList[i].period == 0) {
                SCH_Delete_Task(taskList[i].taskID);
            }
        }
    }
}

uint8_t SCH_Delete_Task(uint32_t taskID) {
    if (taskID >= currentTaskCount || !taskList[taskID].isActive) {
        errorCode = ERROR_SCH_INVALID_ID;
        return errorCode;
    }

    for (uint32_t i = taskID; i < currentTaskCount - 1; i++) {
        taskList[i] = taskList[i + 1];
        taskList[i].taskID = i;
    }

    currentTaskCount--;
    taskList[currentTaskCount].funcPtr = NULL;
    taskList[currentTaskCount].delay = 0;
    taskList[currentTaskCount].period = 0;
    taskList[currentTaskCount].runme = 0;
    taskList[currentTaskCount].isActive = false;

    return 0;
}
