/**
* My Blink
*Turns on built in LED on and off at set
*/

#include "Arduino.h"

void setup()
{
  //initialize LED digital pin as an output
  pinMode(LED_BUILTIN,OUTPUT);
}

int x = 2000;
int y = 2000;
void loop(){

  digitalWrite(LED_BUILTIN,HIGH); //turn the LED on (HIGH=Votage Level);

  delay(x); //wait for x seconds

  digitalWrite(LED_BUILTIN,LOW); //turn the LED off by setting voltage to LOW

  delay(y); //wait for x seconds
}
