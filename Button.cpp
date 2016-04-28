/*
 * Button.cpp
 *
 *  Created on: Aug 26, 2015
 *      Author: juliosugaya
 */

#include "Arduino.h"
#include "BOTLib.h"

Button::Button(uint8_t pin) {
	// TODO Auto-generated constructor stub
	Button_PIN = pin;
	Button_State = LOW;
    pinMode(Button_PIN, INPUT);
}

int Button::getState(){
	Button_State = digitalRead(Button_PIN);
	return Button_State;
}
