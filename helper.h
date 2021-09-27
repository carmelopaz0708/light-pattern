/*
    Library file
*/

#ifndef HELPER_H
#define HELPER_H

class Button
{
private:
    bool m_pressed;
    uint8_t m_pin;
public:
    Button(uint8_t pin);
    void read();

    // Test function
    void test();
};

class Led
{
private:
    static const int LED_COUNT = 9;
    uint8_t m_pins[LED_COUNT];
    bool m_on_all;
    bool m_on_up;
    bool m_on_down;
    bool m_on_rand;
public:
    Led(uint8_t *pins);
    void activateAll();
    void activateUp();
    void activateDown();
    void activateRandom();

    // Test function
    void test();
};

#endif