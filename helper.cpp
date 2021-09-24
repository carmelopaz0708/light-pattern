// Implementation program

#include <Arduino.h>
#include "helper.h"

Button::Button(int pin)
{
    pinMode(pin, INPUT);
    _pin = pin;
}

Led::Led(int pin)
{
    pinMode(pin, OUTPUT);
    _pin = pin;
}

bool Button::debounce(bool reading)
{
    digitalRead(_pin);              // Unfinished. Must tact on
}

