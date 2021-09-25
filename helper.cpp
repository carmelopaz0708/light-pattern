// Implementation program

#include <Arduino.h>
#include "helper.h"

Button::Button(int pin)
{
    pinMode(pin, INPUT);
    m_pin = pin;
}

bool Button::debounce(bool reading)
{
    digitalRead(m_pin);              // Unfinished. Must tact on
}

