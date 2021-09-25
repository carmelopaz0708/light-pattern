// Helper function for the switch and LED behavior

#ifndef HELPER_H
#define HELPER_H

class Button
{
    bool m_pressed = false;
    bool debounce(bool reading);
public:
    int m_pin;
    Button::Button(int pin);
};

#endif
