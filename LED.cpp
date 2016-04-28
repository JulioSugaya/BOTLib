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

//turn the LED off
void LED::off(){
	digitalWrite(LED_PIN,LOW);
}

