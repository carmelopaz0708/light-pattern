// Helper function for the switch and LED behavior

#ifndef HELPER_H
#define HELPER_H

class Button
{
    Button::Button(int pin);
    int _pin;
    bool _pressed = false;
    bool debounce(bool reading);
};

class Led
{
    Led::Led(int pin);
    int _pin;
    bool _on;
    // Might include an extra private class variable relating class Button to class Led
    public:
        void onAll();
        void onDecrement();
        void onIncrement();
        void onRandom();
};

#endif
