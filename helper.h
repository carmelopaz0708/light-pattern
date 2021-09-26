// Library file

#ifndef HELPER_H
#define HELPER_H

class Button
{
    int m_pin;
    static const unsigned long db_delay = 50;
public:
    bool m_pressed;
    void readAndDebounce();
    Button::Button(int pin);
};

#endif