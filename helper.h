// Helper function for the switch and LED behavior

#ifndef HELPER_H
#define HELPER_H

class Button
{
    int _pin;
    bool _pressed = false;
    bool debounce(bool reading);
    public:
        Button::Button(int pin);
};

class Led
{
    int _pin;
    bool _on;
    // Might include an extra private class variable relating class Button to class Led
    public:
        Led::Led(int pin);
        void onAll();
        void onDecrement();
        void onIncrement();
        void onRandom();
};

#endif
