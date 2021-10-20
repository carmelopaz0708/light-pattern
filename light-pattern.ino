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
    // TODO
    // - Update eschema to use Arduino Nano
    // - Test new schematic using internal pullup. This may get rid of spurious input and interference
    // - Rewire one switch to use the revised schematic

    // Begin tests here
    // Serial.begin(9600);
    // Serial.flush();
    // End tests here
}

void loop()
{
    sw1.read();
    if (sw1.m_pressed == true)
    {
        leds.activateAll();
        // m_pin must be set to 0 after leds activate
    }

    // Begin tests here
    // sw1.test();
    // leds.test();
    // End tests here
}