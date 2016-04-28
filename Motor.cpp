/*
 * Motor.cpp
 *
 *  Created on: Dec, 5, 2015
 *      Author: juliosugaya
 */

#include "Arduino.h"
#include "BOTLib.h"

//<<constructor>>
Motor::Motor(uint8_t enable_pin, uint8_t pinA1, uint8_t pinA2){
	ENABLE_PIN = enable_pin;
	PIN_A1 = pinA1;
	PIN_A2 = pinA2;
	pinMode (ENABLE_PIN, OUTPUT);
	pinMode (PIN_A1, OUTPUT);
	pinMode (PIN_A2, OUTPUT);
	digitalWrite(ENABLE_PIN,HIGH);
}

//forward
void Motor::run(){
	digitalWrite(PIN_A1,HIGH);
	digitalWrite(PIN_A2,LOW);
}

//stop it
void Motor::stop(){
	digitalWrite(PIN_A1,LOW);
	digitalWrite(PIN_A2,LOW);
}

//go back
void Motor::reverse(){
	digitalWrite(PIN_A1,LOW);
	digitalWrite(PIN_A2,HIGH);
}

