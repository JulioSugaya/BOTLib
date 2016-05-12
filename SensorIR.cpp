/*
 * Button.cpp
 *
 *  Created on: Aug 26, 2015
 *      Author: juliosugaya
 */

#include "Arduino.h"
#include "BOTLib.h"

SensorIR::SensorIR(uint8_t pin) {
	// TODO Auto-generated constructor stub
	Sensor_PIN = pin;
	Sensor_State = LOW;
    pinMode(Sensor_PIN, INPUT);
}

int SensorIR::getState(){
	Sensor_State = digitalRead(Sensor_PIN);
	return Sensor_State;
}
