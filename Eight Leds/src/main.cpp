/*
 Eight Leds
 Lighs up 8 leds with a shift register (SN74HC595 Texas Instruments)
 */
#include "Arduino.h"

const int latchPin = 8; //
const int clockPin = 7; //
const int dataPin =  9; // Pin 14 on SR (SER)

byte leds = 0;

void updateShiftRegister()
{
   digitalWrite(latchPin, LOW);
   shiftOut(dataPin, clockPin, LSBFIRST, leds);
   digitalWrite(latchPin, HIGH);
}

void setup()
{
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}

void loop()
{
  leds = 0;
  updateShiftRegister();
  delay(300);
  for (int i = 0; i <8; i++)
  {
    bitSet(leds, i);
    updateShiftRegister();
    delay(300);
  }
}
