/*
  Client file
*/

#include "helper.h"

uint8_t led_pins[9] = {2, 3, 4, 5, 6, 7, 8, 9, 10};

Button sw1(14);     // Analog pin A0
Button sw2(15);
Button sw3(16);
Button sw4(17);
Led leds(led_pins);

void setup()
{
    Serial.begin(9600);
    Serial.flush();
}

void loop()
{
    leds.test();
    sw1.read();
}