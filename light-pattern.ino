/*
  Client file
*/

#include "helper.h"

// Set pins for LED
uint8_t led_pins[9] = {2, 3, 4, 5, 6, 7, 8, 9, 10};

// Initialize pins with constructors. Pin 14 = A0, 15 = A1 ...
Button sw1(14);
Button sw2(15);
Button sw3(16);
Button sw4(17);
Led leds(led_pins);

void setup()
{
    // Begin tests here
    Serial.begin(9600);
    Serial.flush();
    // End tests here
}

void loop()
{
    // Begin tests here
    // sw1.test();
    // leds.test();
    // End tests here
}