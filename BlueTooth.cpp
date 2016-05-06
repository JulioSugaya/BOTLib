/*
 * BlueTooth.cpp
 *
 *  Created on: Dec, 5, 2015
 *      Author: juliosugaya
 */

#include <Arduino.h>
#include "BOTLib.h"

//<<constructor>>
BlueTooth::BlueTooth(uint8_t rx, uint8_t tx){
    btSerial = new SoftwareSerial(rx, tx);
    btSerial->begin(9600);
}

char BlueTooth::read()
{
    return (char)btSerial->read();
}

void BlueTooth::write(char t)
{
	btSerial->write(t);
}
int BlueTooth::received()
{
	return btSerial->available();
}

//char BlueTooth::getMessage()
//{
//	char[] cmd;
//	if (btSerial->available())
//	{
//	   while(btSerial->available())
//	   {
//	     cmd += (char)btSerial->read();
//	     strcpy(cmd, cmd + btSerial->read());
//	   }
//	}
//	return cmd;
//}
