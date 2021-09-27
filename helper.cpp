/*
    Implementation file
*/

#include "Arduino.h"
#include "helper.h"

Button::Button(uint8_t pin)
{
    m_pin = pin;
    pinMode(m_pin, INPUT);
}

Led::Led(uint8_t *pins)
{
    for (uint8_t i = 0; i < LED_COUNT; i++)
    {
        m_pins[i] = pins[i];
        pinMode(m_pins[i], OUTPUT);   
    }
}

// Test function for switch
void Button::test()
{
    Serial.println(m_pin);
    delay(500);
}

// Test function for led
void Led::test()
{
    for (int i = 0; i < LED_COUNT; i++)
    {
        digitalWrite(m_pins[i], HIGH);
    }
}