/** Button to turn led on and off
*/
#include "Arduino.h"

int ledpin = 11;
int buttonApin = 5;
int buttonBpin = 7;

byte leds = 0;

void setup()
{
  pinMode(ledpin,OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);
  pinMode(buttonBpin, INPUT_PULLUP);
}

void loop ()
{
  if (digitalRead(buttonApin) == LOW)
  {
    digitalWrite(ledpin, HIGH);
  }
  if (digitalRead(buttonBpin) == LOW)
  {
    digitalWrite(ledpin, LOW);
  }
}
