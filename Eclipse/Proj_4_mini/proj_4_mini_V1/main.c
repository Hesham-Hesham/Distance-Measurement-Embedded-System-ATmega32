/*
 * main.c
 *
 *  Created on: May 27, 2023
 *      Author: Hesham Hesham
 */



#include "lcd.h"
#include "ultrasonic_HCSR04.h"
#include "avr/io.h" /* To use the IO Ports Registers */

#include <util/delay.h> //to use _delay_us

int main(){

	SREG |= (1<<7);

	LCD_init();
	LCD_clearScreen();

	LCD_displayString("Distance= ");

	Ultrasonic_init();

	uint16 ret=0;
	for(;;){

		//take the readings from the Ultrasonic sensor and show them on the LCD
		ret=Ultrasonic_readDistance()+1;
		LCD_intgerToString(ret);
		LCD_moveCursor(0, 10);
//		_delay_ms(1000);
	}

}
