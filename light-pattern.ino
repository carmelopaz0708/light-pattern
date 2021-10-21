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
    // TODO: Perhaps modify the loop function to read only one input when running, and run the LED functions in a switch-case statement
    //      - This will toggle a flag that will set to true when a switch is pressed. The toggle is a global variable shared between
    //      - all button objects.
    //      - Or better yet, create a separate class that detects an input, and toggle different functions in it

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