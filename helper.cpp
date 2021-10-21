/*
    Implementation file
*/

#include "Arduino.h"
#include "helper.h"

// Initializes the button pins
Button::Button(uint8_t pin)
{
    m_pin = pin;
    pinMode(m_pin, INPUT_PULLUP);
    m_pressed = false;
}

// Initializes the LED pins
Led::Led(uint8_t *pins)
{
    for (uint8_t i = 0; i < LED_COUNT; i++)
    {
        m_pins[i] = pins[i];
        pinMode(m_pins[i], OUTPUT);   
    }
}

// Reads and debounce button
void Button::read()
{
    bool pressed = false;
    bool reading = digitalRead(m_pin);
    if (reading == true)
    {
        if (millis() >= DB_DELAY)
        {
            pressed = true;
        }
        if (pressed)
        {
            m_pressed = true;
        }
    }
}

// Reset led state
void Led::reset()
{
    for (int i = 0; i < LED_COUNT; i++)
    {
        digitalWrite(m_pins[i], LOW);
    }
}

// Sets all leds to high
void Led::activateAll()
{
    reset();
    for (int i = 0; i < LED_COUNT; i++)
    {
        digitalWrite(m_pins[i], HIGH);
    }
}

void Led::activateDown()
{
    // TODO: Modify code from Led::activateUp()
    reset();
}

void Led::activateUp()
{
    // FIXME: Let function exit when a different button is pressed. Perhaps inherit all button pins
    reset();

    int i = 0;
    unsigned long startCount = 0;

    while (i < LED_COUNT)
    {
        unsigned long endCount = millis();
        if ((endCount - startCount) >= interval)
        {
            startCount = endCount;
            digitalWrite(m_pins[i], HIGH);
            digitalWrite(m_pins[i - 1], LOW);
            i++;
        }
    }
}
