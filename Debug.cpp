/*
 * Debug.cpp
 *
 *  Created on: Jan 03, 2016
 *      Author: juliosugaya
 */

#include "Arduino.h"
#include "BOTLib.h"
#include "LiquidCrystal.h"

//<<constructor>>
Debug::Debug(uint8_t pin1, uint8_t pin2, uint8_t pin3, uint8_t pin4, uint8_t pin5, uint8_t pin6){
	lcd = new LiquidCrystal(pin1, pin2, pin3, pin4, pin5, pin6);
	lcd->begin(16, 2);
}

void Debug::print(char t){
	lcd->print(t);
}

