/*
SEQUENCER

Controls the behavior of an array of LEDs using tactile switches and save states.

version: 1.0.0
author:  carmelopaz0708@gmail.com
 */

const int TACTILE = 2;
const int LED = 3;

bool lastState = LOW;
bool currentState = LOW;
bool ledOn = false;

void setup() 
{
	pinMode(TACTILE, INPUT);
	pinMode(LED, OUTPUT);
}

bool debounce(bool last) 
{
	bool current = digitalRead(TACTILE);
	if (last != current) 
	{
		delay(50);
		current = digitalRead(TACTILE);
	}
	return current;
}

void loop() 
{ 
	currentState = debounce(lastState);
	if (lastState == LOW && currentState == HIGH)
	{
		ledOn = !ledOn;
	}
	lastState = currentState;
	digitalWrite(LED, ledOn);
}
