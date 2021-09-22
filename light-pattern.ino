/*
  LIGHT PATTERN

  Displays a pattern of lights based on switch input.
  carmelopaz0708@gmail.com
*/

// TODO: Include library headers like random.h

// Pin assignment
const int sw_all = A0;
const int sw_decrement = A1;
const int sw_increment = A2;
const int sw_random = A3;
const int led1 = 2;
const int led2 = 3;
const int led3 = 4;
const int led4 = 5;
const int led5 = 6;
const int led6 = 7;
const int led7 = 8;
const int led8 = 9;
const int led9 = 10;

// Global variables
bool lastState = LOW;
bool currentState = LOW;
bool ledOn = false;

// Global constants
#define LED_STARTCOUNT 2
#define LED_ENDCOUNT 11

void setup() 
{
	pinMode(sw_all, INPUT);
	pinMode(sw_decrement, INPUT);
	pinMode(sw_increment, INPUT);
	pinMode(sw_random, INPUT);
	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);
	pinMode(led3, OUTPUT);
	pinMode(led4, OUTPUT);
	pinMode(led5, OUTPUT);
	pinMode(led6, OUTPUT);
	pinMode(led7, OUTPUT);
	pinMode(led8, OUTPUT);
	pinMode(led9, OUTPUT);
}

bool debounce(bool last) 
{
	bool current = digitalRead(sw_all);
	if (last != current) 
	{
		delay(50);
		current = digitalRead(sw_all);
	}
	return current;
}

void decrement() {
	// TODO
}

void increment() {
	// TODO
}

void randomizer() {
	// TODO
}

void all(bool currentState) {
	if (lastState == LOW && currentState == HIGH) {
		ledOn = !ledOn;
	}
	delay(10);
	lastState = currentState;

	for (int i = LED_STARTCOUNT; i < LED_ENDCOUNT; i++) {
		digitalWrite(i, ledOn);
	}
}

void loop() 
{
	// TODO: Revise loop function. Use switch case or nested if loop. Or use an array and switch case with a variable
	if (digitalRead(sw_all) == HIGH) {
		currentState = debounce(lastState);
		all(currentState);
	} else if (digitalRead(sw_decrement) == HIGH) {
		// Enter debounce then decrement function
	} else if (digitalRead(sw_increment) == HIGH) {
		// Enter debounce then increment function
	} else if (digitalRead(sw_random) == HIGH) {
		// Enter debounce then decrement function
	}
}
