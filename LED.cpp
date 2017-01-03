/*
 * LED.cpp
 *
 *  Created on: Aug 26, 2015
 *      Author: juliosugaya
 */

#include "Arduino.h"
#include "BOTLib.h"

//<<constructor>>
LED::LED(uint8_t pin){
	LED_PIN = pin;
    pinMode(LED_PIN, OUTPUT);
}

//turn the LED on
void LED::on(){
	digitalWrite(LED_PIN,HIGH);
}

//turn the LED on per seconds
void LED::blink(uint8_t t, uint8_t s = 1){
	for (int i = 0; i < t; ++i){
		digitalWrite(LED_PIN,HIGH);
		delay(s*1000);
		digitalWrite(LED_PIN,LOW);
		delay(s*1000);
	}
}

//turn the LED off
void LED::off(){
	digitalWrite(LED_PIN,LOW);
}

