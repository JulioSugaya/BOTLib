/*
 * Debug.cpp
 *
 *  Created on: Jan 03, 2016
 *      Author: juliosugaya
 */

#include "Arduino.h"
#include "BOTLib.h"

//<<constructor>>
Debug::Debug(uint8_t pinA1, uint8_t pinA2, uint8_t pinA3, uint8_t pinA4, uint8_t pinA5, uint8_t pinA6){
	lcd(pinA1, pinA2, pinA3, pinA4, pinA5, pinA6);
	lcd.begin(16, 2);
}

//turn the LED on
void Debug::print(uint8_t t){
	lcd.Print(t);
}

