/*
 *  	Name: Shuaib Abdulsalam Ahmed Aklan Saleh
 *      Sec: 1
 *      B.N.: 48
 */

#include "Gpio.h"
#include "Rcc.h"
#include "Keypad.h"
#include "Std_Types.h"

int main() {
  Rcc_Init();
  Rcc_Enable(RCC_GPIOA);
  Rcc_Enable(RCC_GPIOB);


  Keypad_Init();

  uint32 i;
  for (i = 0; i < 7; i++) {
	  GPIO_ConfigPin(GPIO_A, i, GPIO_OUTPUT, GPIO_PUSH_PULL);
  }




 while (1) {

	 Keypad_Manage();

 }


  return 0;
}


void KeypadCallouts_KeyPressNotificaton(void){
  uint8 key;
  key = Keypad_GetKey();

  switch (key)
	{
	case 0:
		GPIO_WritePin(GPIO_A, 0, HIGH);
		GPIO_WritePin(GPIO_A, 1, HIGH);
		GPIO_WritePin(GPIO_A, 2, HIGH);
		GPIO_WritePin(GPIO_A, 3, HIGH);
		GPIO_WritePin(GPIO_A, 4, HIGH);
		GPIO_WritePin(GPIO_A, 5, HIGH);
		GPIO_WritePin(GPIO_A, 6, LOW);
		break;
	
	case 1:
		GPIO_WritePin(GPIO_A, 0, LOW);
		GPIO_WritePin(GPIO_A, 1, HIGH);
		GPIO_WritePin(GPIO_A, 2, HIGH);
		GPIO_WritePin(GPIO_A, 3, LOW);
		GPIO_WritePin(GPIO_A, 4, LOW);
		GPIO_WritePin(GPIO_A, 5, LOW);
		GPIO_WritePin(GPIO_A, 6, LOW);
		break;

	// TODO: complete the remaining numbers
	case 2:
		GPIO_WritePin(GPIO_A, 0, HIGH);
		GPIO_WritePin(GPIO_A, 1, HIGH);
		GPIO_WritePin(GPIO_A, 2, LOW);
		GPIO_WritePin(GPIO_A, 3, HIGH);
		GPIO_WritePin(GPIO_A, 4, HIGH);
		GPIO_WritePin(GPIO_A, 5, LOW);
		GPIO_WritePin(GPIO_A, 6, HIGH);
		break;



	 case 3:
		GPIO_WritePin(GPIO_A, 0, HIGH);
		GPIO_WritePin(GPIO_A, 1, HIGH);
		GPIO_WritePin(GPIO_A, 2, HIGH);
		GPIO_WritePin(GPIO_A, 3, HIGH);
		GPIO_WritePin(GPIO_A, 4, LOW);
		GPIO_WritePin(GPIO_A, 5, LOW);
		GPIO_WritePin(GPIO_A, 6, HIGH);
		break;


	 case 4:
		GPIO_WritePin(GPIO_A, 0, LOW);
		GPIO_WritePin(GPIO_A, 1, HIGH);
		GPIO_WritePin(GPIO_A, 2, HIGH);
		GPIO_WritePin(GPIO_A, 3, LOW);
		GPIO_WritePin(GPIO_A, 4, LOW);
		GPIO_WritePin(GPIO_A, 5, HIGH);
		GPIO_WritePin(GPIO_A, 6, HIGH);
		break;


	 case 5:
		GPIO_WritePin(GPIO_A, 0, HIGH);
		GPIO_WritePin(GPIO_A, 1, LOW);
		GPIO_WritePin(GPIO_A, 2, HIGH);
		GPIO_WritePin(GPIO_A, 3, HIGH);
		GPIO_WritePin(GPIO_A, 4, LOW);
		GPIO_WritePin(GPIO_A, 5, HIGH);
		GPIO_WritePin(GPIO_A, 6, HIGH);
		break;



	 case 6:
		GPIO_WritePin(GPIO_A, 0, HIGH);
		GPIO_WritePin(GPIO_A, 1, LOW);
		GPIO_WritePin(GPIO_A, 2, HIGH);
		GPIO_WritePin(GPIO_A, 3, HIGH);
		GPIO_WritePin(GPIO_A, 4, HIGH);
		GPIO_WritePin(GPIO_A, 5, HIGH);
		GPIO_WritePin(GPIO_A, 6, HIGH);
		break;


	 case 7:
		GPIO_WritePin(GPIO_A, 0, HIGH);
		GPIO_WritePin(GPIO_A, 1, HIGH);
		GPIO_WritePin(GPIO_A, 2, HIGH);
		GPIO_WritePin(GPIO_A, 3, LOW);
		GPIO_WritePin(GPIO_A, 4, LOW);
		GPIO_WritePin(GPIO_A, 5, LOW);
		GPIO_WritePin(GPIO_A, 6, LOW);
		break;


	 case 8:
		GPIO_WritePin(GPIO_A, 0, HIGH);
		GPIO_WritePin(GPIO_A, 1, HIGH);
		GPIO_WritePin(GPIO_A, 2, HIGH);
		GPIO_WritePin(GPIO_A, 3, HIGH);
		GPIO_WritePin(GPIO_A, 4, HIGH);
		GPIO_WritePin(GPIO_A, 5, HIGH);
		GPIO_WritePin(GPIO_A, 6, HIGH);
		break;


	 case 9:
		GPIO_WritePin(GPIO_A, 0, HIGH);
		GPIO_WritePin(GPIO_A, 1, HIGH);
		GPIO_WritePin(GPIO_A, 2, HIGH);
		GPIO_WritePin(GPIO_A, 3, HIGH);
		GPIO_WritePin(GPIO_A, 4, LOW);
		GPIO_WritePin(GPIO_A, 5, HIGH);
		GPIO_WritePin(GPIO_A, 6, HIGH);
		break;

	default:
		break;
	}
}
