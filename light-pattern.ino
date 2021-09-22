/*
  LIGHT PATTERN

  Displays a pattern of lights based on switch input.
  carmelopaz0708@gmail.com
*/

// TODO: Include library headers like random.h

const int led1 = 2;
const int led2 = 3;
const int led3 = 4;
const int led4 = 5;
const int led5 = 6;
const int led6 = 7;
const int led7 = 8;
const int led8 = 9;
const int led9 = 10;

const int sw_triggerAll = A0;
const int sw_triggerUp = A1;
const int sw_triggerDown = A2;
const int sw_triggerRandom = A3;

bool switchLastState = LOW;
bool switchCurrentState = LOW;

#define LED_STARTCOUNT 2
#define LED_ENDCOUNT 11

void setup() 
{
	for (int i = LED_STARTCOUNT; i < LED_ENDCOUNT; i++)
	{
		pinMode(i, OUTPUT);
	}
	pinMode(A0, INPUT);
	pinMode(A1, INPUT);
	pinMode(A2, INPUT);
	pinMode(A3, INPUT);
}

bool switchDebounce(int swPos)
{
	bool switchCurrentState = digitalRead(swPos);
	if (switchLastState != switchCurrentState) 
	{
		delay(50);
		switchCurrentState = digitalRead(swPos);
	}
	return switchCurrentState;
}

void all() 
{
	static bool ledOn = false;
	if (switchLastState == LOW && switchCurrentState == HIGH)		// Condition that triggers event
	{
		ledOn = !ledOn;
		for (int i = LED_STARTCOUNT; i < LED_ENDCOUNT; i++) 
		{
			digitalWrite(i, ledOn);
		}
	}
	delay(100);
}

void decrement() 
{
	// TODO
}

void increment() 
{
	// TODO
}

void randomizer() 
{
	// TODO
}

void loop() 
{
	if (digitalRead(sw_triggerAll) == HIGH) 
	{
		switchCurrentState = switchDebounce(sw_triggerAll);
		all();
	}
	
	// else if (digitalRead(sw_decrement) == HIGH) {
	// 	// Enter debounce then decrement function
	// } else if (digitalRead(sw_increment) == HIGH) {
	// 	// Enter debounce then increment function
	// } else if (digitalRead(sw_random) == HIGH) {
	// 	// Enter debounce then decrement function
	// }
}
