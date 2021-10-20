/*
    Library file
*/

#ifndef HELPER_H
#define HELPER_H

class Button
{
    static const unsigned long DB_DELAY = 20;
    uint8_t m_pin;
    bool debounce(unsigned long t_previous);
public:
    Button(uint8_t pin);
    bool m_pressed;
    void read();
};

class Led
{
    static const int LED_COUNT = 9;
    uint8_t m_pins[LED_COUNT];
    bool m_on_all;
    bool m_on_up;
    bool m_on_down;
    bool m_on_rand;
public:
    Led(uint8_t *pins);
    void reset();
    void activateAll();
    void activateUp();
    void activateDown();
    void activateRandom();
};

#endif
