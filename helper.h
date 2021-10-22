/*
    Library file
*/

#ifndef HELPER_H
#define HELPER_H

class Button
{
    static const unsigned long DB_DELAY = 50;
    uint8_t m_pin;
public:
    Button(uint8_t pin);
    bool m_pressed;
    void read();
    bool debounce(unsigned long t_previous);
};

class Led
{
    static const int LED_COUNT = 9;
    uint8_t m_pins[LED_COUNT];
    static const unsigned long interval = 125;
    void reset();
public:
    Led(uint8_t *pins);
    void activateAll();
    void activateDown();
    void activateUp();
    void activateRandom();
};

#endif
