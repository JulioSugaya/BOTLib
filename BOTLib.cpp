// Do not remove the include below
#include "BOTLib.h"


//The setup function is called once at startup of the sketch
//LED led(13);
//Button b(2);
//int ledState = LOW;

//Motor motor1(6,7,8);
//Motor motor2(9,10,11);
//BlueTooth bt(31,30);
//byte btReads;

LED l(13);

void setup()
{
	// Add your initialization code here

}
// Test Area for libs class
// The loop function is called in an endless loop
void loop()
{
l.on();
delay(5000);
l.off();
delay(5000);
//		btReads = bt.read();
//		Serial.println(btReads);
//
//	// Forward
//	motor1.run();
//	motor2.run();
//	delay(5000);
//	// Stop it
//	motor1.stop();
//	motor2.stop();
//	delay(5000);
//	// Go back
//	motor1.reverse();
//	motor2.reverse();
//	delay(5000);
	//Add your repeated code here
//	if( b.getState() == HIGH ){
//		if(ledState == HIGH){
//			led.offLed();
//			ledState = LOW;
//		}else{
//			led.onLed();
//			ledState = HIGH;
//		}
//
//	}

}
