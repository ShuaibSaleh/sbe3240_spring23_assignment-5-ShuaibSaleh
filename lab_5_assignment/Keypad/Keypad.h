/*
 *  	Name: Shuaib Abdulsalam Ahmed Aklan Saleh
 *      Sec: 1
 *      B.N.: 48
 */

#ifndef KEYPAD_H
#define KEYPAD_H
#include "Gpio.h"
#include "Std_Types.h"


#define COLUMN_PORT GPIO_B
#define COLUMN_START_IDX 0
#define COLUMN_END_IDX 2

#define ROW_PORT GPIO_B
#define ROW_START_IDX 7
#define ROW_END_IDX 10


void Keypad_Init(void);
void Keypad_Manage(void);
uint8 Keypad_GetKey(void);
void KeypadCallouts_KeyPressNotificaton(void);




#endif
