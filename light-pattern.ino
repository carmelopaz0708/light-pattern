#include "helper.h"

Button sw1(A0);
Button sw2(A1);
Button sw3(A2);
Button sw4(A4);

unsigned long sw_dbTime = 0;
unsigned long db_delay = 100;
const int LED_COUNT = 9;

struct Led
{
    int pins[LED_COUNT] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    bool m_f_all = false;
    bool m_f_dec = false;
    bool m_f_inc = false;
    bool m_f_ran = false;
    void activateAll();
    void activateDecrement();
    void activateIncrement();
    void activateRandom();
} leds;

void setup() 
{
	for (int i = 0; i < sizeof(leds.pins); i++)
	{
		pinMode(leds.pins[i], OUTPUT);
	}
}

void loop() 
{
	// Test function. Can be deleted
	if (digitalRead(sw1.m_pin) == HIGH)
	{
		for (int i = 0; i < LED_COUNT; i++)
		{
			digitalWrite(leds.pins[i], HIGH);
			delay(500);
		}
	}
}
