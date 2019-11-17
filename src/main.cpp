#include "Arduino.h"

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);  // set pin as output
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);  // set the LED on
  delay(1000);               // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // set the LED off
  delay(1000);               // wait for a second
}
