/*
  Client file
*/

#include "helper.h"

// Set pins for LED
uint8_t led_pins[9] = {2, 3, 4, 5, 6, 7, 8, 9, 10};

// Set objects
Button sw1(A0);
Button sw2(A1);
Button sw3(A2);
Button sw4(A3);
Led leds(led_pins);

void setup() {}

void loop()
{
    sw1.read();
    sw2.read();
    sw3.read();

    // TODO: Modify loop to allow functions to interrupt when a button is pressed
    if (sw1.m_pressed)
    {
        sw1.m_pressed = !sw1.m_pressed;
        leds.activateAll();
    } 
    if (sw2.m_pressed)
    {
        sw2.m_pressed = !sw2.m_pressed;
        leds.activateDown();
    }
    if (sw3.m_pressed)
    {
        sw3.m_pressed = !sw3.m_pressed;
        leds.activateUp();
    }
}