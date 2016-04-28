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
	TRIGPIN = trigPin;
	ECHOPIN = echoPin;
	Serial.begin (9600);
	pinMode(trigPin, OUTPUT);
	pinMode(echoPin, INPUT);
}

long SR04::getDistanceCM(){
	 digitalWrite(TRIGPIN, LOW);
	 delayMicroseconds(2);

	 digitalWrite(TRIGPIN, HIGH);
	 delayMicroseconds(10);

	 digitalWrite(TRIGPIN, LOW);
	 duration = pulseIn(ECHOPIN, HIGH);

	 //Calculate the distance (in cm) based on the speed of sound.
	 return duration/58.2;
}

//turn the LED off
void LED::off(){
	digitalWrite(LED_PIN,LOW);
}

