/*
    Implementation file
*/

#include "Arduino.h"
#include "helper.h"

// Constructor. Initializes the button pins
Button::Button(uint8_t pin)
{
    m_pin = pin;
    pinMode(m_pin, INPUT_PULLUP);
    m_pressed = false;
}

// Detects a button press on the switch
void Button::read()
{
    unsigned long db_time = millis();
    bool reading = digitalRead(m_pin);
    if (reading == true)
    {
        bool pressed = Button::debounce(db_time);
        if (pressed == true)
        {
            m_pressed = true;
        }
    }
}

// Function called from Button::read(). Eliminates spurious readings from switches.
bool Button::debounce(unsigned long t_previous)
{
    unsigned long t_current = millis();
    if ((t_current - t_previous) > DB_DELAY)
    {
        return true;
    }
}

// Constructor. Initializes the LED pins
Led::Led(uint8_t *pins)
{
    for (uint8_t i = 0; i < LED_COUNT; i++)
    {
        m_pins[i] = pins[i];
        pinMode(m_pins[i], OUTPUT);   
    }
}

// Lights up all the leds
void Led::activateAll()
{
    for (int i = 0; i < LED_COUNT; i++)
    {
        digitalWrite(m_pins[i], HIGH);
    }
}

// Button test function. Prints pin number to serial output
void Button::test()
{
    Serial.println(m_pin);
    delay(500);
}

// LED test function. Lights all LEDs in the circuit.
void Led::test()
{
    for (int i = 0; i < LED_COUNT; i++)
    {
        digitalWrite(m_pins[i], HIGH);
    }
}
