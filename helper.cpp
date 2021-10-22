/*
    Implementation file
*/

#include "Arduino.h"
#include "helper.h"

// Initializes the button pins
Button::Button(uint8_t pin)
{
    m_pin = pin;
    pinMode(m_pin, INPUT);
    m_pressed = false;
}

// Reads button press
void Button::read()
{
    unsigned long db_time = millis();
    bool reading = digitalRead(m_pin);
    if (reading == true)
    {
        bool pressed = Button::debounce(db_time);
        if (pressed)
        {
            m_pressed = true;
        }
    }
}

// Debounce button press
bool Button::debounce(unsigned long t_previous)
{
    unsigned long t_current = millis();
    if ((t_current - t_previous) > DB_DELAY)
    {
        return true;
    }
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

// Downward sweeping movement of LED lights
void Led::activateDown()
{
    reset();
    int i = LED_COUNT;
    unsigned long startCount = 0;
    while (i >= 0)
    {
        unsigned long endCount = millis();
        if ((endCount - startCount) >= interval)
        {
            startCount = endCount;
            digitalWrite(m_pins[i], LOW);
            digitalWrite(m_pins[i - 1], HIGH);
            i--;
        }
    }
}

// Upward sweeping movement of LED lights
void Led::activateUp()
{
    reset();
    int i = 0;
    unsigned long startCount = 0;
    while (i <= LED_COUNT)
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

// TODO: WIP. Instead of random, make it wave out from the center
void Led::activateRandom()
{
    reset();
    int i = 0;
    unsigned long startCount = 0;
    while (i <= LED_COUNT)
    {
        unsigned long endCount = millis();
        if ((endCount - startCount) >= interval)
        {
            startCount = endCount;
            int index = random(LED_COUNT);
            digitalWrite(m_pins[index], HIGH);
            i++;
        }
    }
}
