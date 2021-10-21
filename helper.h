/*
    Library file
*/

#ifndef HELPER_H
#define HELPER_H

class Button
{
    static const unsigned long DB_DELAY = 20;
    uint8_t m_pin;
public:
    Button(uint8_t pin);
    bool m_pressed;
    void read();
};

class Led
{
    static const int LED_COUNT = 9;
    uint8_t m_pins[LED_COUNT];
    static const unsigned long interval = 500;
    void reset();
public:
    Led(uint8_t *pins);
    void activateAll();
    void activateDown();
    void activateUp();
    void activateRandom();
};

#endif
