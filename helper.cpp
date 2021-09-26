// Implementation program

#include <Arduino.h>
#include "helper.h"

Button::Button(int pin)
{
    pinMode(pin, INPUT);
    m_pin = pin;
}

void Button::readAndDebounce()                 // Work in progress. Won't trigger
{
    bool pos_edge;
    unsigned long db_time;

    bool reading = digitalRead(m_pin);
    if (reading == true) db_time = millis();
    
    if ((millis() - db_time) > db_delay)
    {
        if (reading == true) pos_edge = true;
    }

    if (pos_edge == true) m_pressed = true;
    else m_pressed = false;
}
