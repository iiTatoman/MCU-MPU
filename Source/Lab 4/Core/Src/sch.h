/*
 * sch.h
 *
 *  Created on: Oct 22, 2025
 *      Author: iiTatoman
 */

#ifndef SRC_SCH_H_
#define SRC_SCH_H_

#include "main.h"
#include <stdbool.h>

#define SCH_MAX_TASKS 100
#define ERROR_SCH_TOO_MANY_TASKS 1
#define ERROR_SCH_INVALID_ID 2

typedef struct {
    void (*funcPtr)(void);
    uint32_t delay;    // Initial delay in ticks (10ms per tick)
    uint32_t period;   // Period in ticks (0 for one-shot)
    uint32_t runme;    // Flag to indicate task should run
    uint32_t taskID;   // Unique task identifier
    bool isActive;     // Task status
} Task;

void SCH_Init(void);
uint32_t SCH_Add_Task(void (*pFunction)(), uint32_t DELAY, uint32_t PERIOD);
void SCH_Update(void);
void SCH_Dispatch_Tasks(void);
uint8_t SCH_Delete_Task(uint32_t taskID);

#endif /* SRC_SCH_H_ */
