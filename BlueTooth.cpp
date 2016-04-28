/*
 * BlueTooth.cpp
 *
 *  Created on: Dec, 5, 2015
 *      Author: juliosugaya
 */

#include <Arduino.h>
#include "BOTLib.h"

//<<constructor>>
BlueTooth::BlueTooth(uint8_t rx, uint8_t tx):_btSerial(rx,tx,0){
    _bufsize = sizeof(_buffer)/sizeof(char);
}

//
static const unsigned long baunds[] =
    {4800,9600,19200,38400,57600,115200};

unsigned long BlueTooth::findBaud()
{
    const int bt_rx = 4;
    const int bt_tx = 5;
    int numRates = sizeof(baunds)/sizeof(unsigned long);
    int response = false;
    int recvd = 0;

    delay(100);
    for(int rn = 0; rn < numRates; rn++){
        _btSerial.begin(baunds[rn]);
        _btSerial.setTimeout(100);
        _btSerial.flush();
        _btSerial.write("AT\r\n");
        recvd = _btSerial.readBytes(_buffer,_bufsize);
        if (recvd > 0){
            // FIXME: refactor to a single return
            return(baunds[rn]);
        }
    }
    return(0);
}

void BlueTooth::setBaud(unsigned long baud, unsigned long stopbits, unsigned long parity)
{
    int recvd = 0;
    delay(200);
    _btSerial.write("AT+UART=");
    _btSerial.print(baud);

    _btSerial.print(",");

    _btSerial.print(stopbits);

    _btSerial.print(",");

    _btSerial.print(parity);

    _btSerial.write("\r\n");

    recvd = _btSerial.readBytes(_buffer,_bufsize);
    _btSerial.begin(baud);
    delay(1000);
}

// Usually parity is none, and there is only one stop bit, so this
// simpler call will do the job.
void BlueTooth::setBaud(unsigned long baud)
{
    setBaud(baud, 0, 0);
}


int BlueTooth::available()
{
    _btSerial.available();
}

int BlueTooth::peek()
{
    _btSerial.peek();
}

void BlueTooth::flush()
{
    _btSerial.flush();
}

int BlueTooth::read()
{
    _btSerial.read();
}

void BlueTooth::begin(unsigned long baud)
{
    _btSerial.begin(baud);
}


size_t BlueTooth::write(uint8_t byte)
{
    _btSerial.write(byte);
}
