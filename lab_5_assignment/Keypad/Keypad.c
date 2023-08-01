/*
 *  	Name: Shuaib Abdulsalam Ahmed Aklan Saleh
 *      Sec: 1
 *      B.N.: 48
 */

#include "Keypad.h"
#include "Gpio.h"
#include "Std_Types.h"


uint8 kp_elements[4][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9},
		{0,0,0}
	};
uint8 pressed_key = 0;




void Keypad_Init(void){

	uint8 index ;

	/*Columns configuration*/
	for(index = COLUMN_START_IDX; index <= COLUMN_END_IDX; index++ ){

		GPIO_ConfigPin(COLUMN_PORT, index,  GPIO_INPUT,  GPIO_PULL_UP);
	}

	/*Rows configuration and ideal state*/
	for(index = ROW_START_IDX; index <= ROW_END_IDX; index++ ){

		GPIO_ConfigPin(ROW_PORT, index,  GPIO_OUTPUT,  GPIO_PUSH_PULL);
		GPIO_WritePin( ROW_PORT, index,  HIGH);
	}


	
}





void Keypad_Manage(void){

	uint8 row ;
	uint8 col ;
	
	for(row = ROW_START_IDX; row <= ROW_END_IDX; row++ ){

		GPIO_WritePin( ROW_PORT,  row,  LOW);

		for(col = COLUMN_START_IDX; col <= COLUMN_END_IDX; col++ ){

			if( GPIO_ReadPin( COLUMN_PORT,  col) == LOW){

				if( GPIO_ReadPin( COLUMN_PORT,  col) == LOW){

					pressed_key = kp_elements[(row-ROW_START_IDX)][col];
					KeypadCallouts_KeyPressNotificaton();
				}
			}


		}

		GPIO_WritePin( ROW_PORT,  row,  HIGH);

	}





}


uint8 Keypad_GetKey(void){
	return pressed_key ;

}
