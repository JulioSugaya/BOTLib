/*
 * SensorSR04.cpp
 *
 *  Created on: April 28, 2016
 *      Author: juliosugaya
 */

#include "Arduino.h"
#include "BOTLib.h"

//<<constructor>>
SR04::SR04(uint8_t trigPin, uint8_t echoPin){
	TRIG_PIN = trigPin;
	ECHO_PIN = echoPin;
	duration = 0;
	Serial.begin (9600);
	pinMode(trigPin, OUTPUT);
	pinMode(echoPin, INPUT);
}

long SR04::getDistanceCM(){
	 digitalWrite(TRIG_PIN, LOW);
	 delayMicroseconds(2);

	 digitalWrite(TRIG_PIN, HIGH);
	 delayMicroseconds(10);

	 digitalWrite(TRIG_PIN, LOW);
	 duration = pulseIn(ECHO_PIN, HIGH);

	 //Calculate the distance (in cm) based on the speed of sound.
	 return duration/58.2;
}
