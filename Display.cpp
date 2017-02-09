/*
 * Display.cpp
 *
 *  Created on: Jan 03, 2017
 *      Author: juliosugaya
 */

#include "Arduino.h"
#include "BOTLib.h"
#include "LiquidCrystal.h"
#include <U8glib.h>

//<<constructor>>
Display::LCD(uint8_t pin1, uint8_t pin2, uint8_t pin3, uint8_t pin4, uint8_t pin5, uint8_t pin6){
	lcd = new LiquidCrystal(pin1, pin2, pin3, pin4, pin5, pin6);
	lcd->begin(16, 2);
}

Display::OLED(){
	U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NO_ACK);
	delay(10);
}

void Display::print(char t){
	lcd->print(t);
}

//#include <U8glib.h>
//
//U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NO_ACK);
//
//const uint8_t rook_bitmap[] U8G_PROGMEM = {
//  0x00,         // 00000000
//  0x55,         // 01010101
//  0x7f,         // 01111111
//  0x3e,         // 00111110
//  0x3e,         // 00111110
//  0x3e,         // 00111110
//  0x3e,         // 00111110
//  0x7f          // 01111111
//};
//
//void setup()
//{
//  delay(10);
//}
//
//char val[3] = "27";
//
//void loop(void)
//{
//  // picture loop
//  u8g.firstPage();
//  do {
//    draw();
//  } while( u8g.nextPage() );
//  delay(500);
//}
//
//void draw(void) {
//  // Draw some Icons
//  u8g.setFont(u8g_font_m2icon_9);
//  u8g.drawStr( 17, 45, "ABCD");
//  // Draw the bitmap
//  u8g.drawBitmapP(28,15,1,8, rook_bitmap);
//  u8g.setFont(u8g_font_04b_03r);
//  // Draw some text
//  u8g.drawStr( 15, 30, "Julio Sugaya");
//  u8g.setFont(u8g_font_u8glib_4);
//  u8g.drawStr( 70, 48, "MEASUREMENT");
//  // Draw graphics
//  u8g.drawBox(0,51,128,20);
//  // Invert the color
//  u8g.setColorIndex(0);
//  u8g.drawStr( 20, 59, "THIS IS A TEST SCREEN");
//  // Invert the color again
//  u8g.setColorIndex(1);
//    // Some big text
//  u8g.setFont(u8g_font_fub30r);
//  u8g.drawStr( 70, 40, val);
//}
