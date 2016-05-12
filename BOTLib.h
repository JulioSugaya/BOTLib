/*
 * BOtLib.cpp
 *
 *  Created on: Aug 26, 2015
 *      Author: juliosugaya
 */

// Only modify this file to include
// - function definitions (prototypes)
// - include files
// - extern variable definitions
// In the appropriate section

#ifndef _BOTLib_H_
#define _BOTLib_H_
#include "Arduino.h"
#include <inttypes.h>
#include <Stream.h>
#include <SoftwareSerial.h>
#include <LiquidCrystal.h>
//add your includes for the project BOTLib here

//end of add your includes here
#ifdef __cplusplus
extern "C++" {
#endif

#define HC05_HW_SERIAL_PORT Serial

// FACADE BOTLib
	// LED Class
	class LED{
		private:
			byte LED_PIN;
		public:
			LED(uint8_t pin);
			void on();
			void off();
	};
	// SensorSR04 Class
	class SR04{
		private:
			byte TRIG_PIN;
			byte ECHO_PIN;
			long duration; // Duration used to calculate distance
		public:
			SR04(uint8_t trigPin, uint8_t echoPin);
			long getDistanceCM();
	};

	// SensorIR Class
	class SensorIR{
		private:
			byte Sensor_PIN;
			byte Sensor_State;
		public:
			SensorIR(uint8_t pin);
			int getState();
	};

	// Button Class
	class Button{
		private:
			byte Button_PIN;
			byte Button_State;
		public:
			Button(uint8_t pin);
			int getState();
	};

	// Motor Class
	class Motor{
		private:
			byte ENABLE_PIN;
			byte PIN_A1;
			byte PIN_A2;
		public:
			Motor(uint8_t enable, uint8_t pinA1, uint8_t pinA2);
			void run();
			void stop();
			void reverse();
	};

	class BlueTooth{
		private:
		    SoftwareSerial* btSerial;
		public:
			BlueTooth(uint8_t pinTX, uint8_t pinRX);
		    char read();
		    void write(char t);
		    int received();
//		    char getMessage();
	};

	// Debug Class
	class Debug{
		private:
		    LiquidCrystal* lcd;
		public:
			Debug(uint8_t pin1, uint8_t pin2, uint8_t pin3, uint8_t pin4, uint8_t pin5, uint8_t pin6);
			void print(char t);
	};

// end facade

#ifdef __cplusplus
} // extern "C"

#endif

//add your function definitions for the project BOtLib here

extern BlueTooth btSerial;
//Do not add code below this line
#endif /* _BOtLib_H_ */
