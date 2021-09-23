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

// Revise variable names to sw_all etc.
const int sw_triggerAll = A0;
const int sw_triggerUp = A1;
const int sw_triggerDown = A2;
const int sw_triggerRandom = A3;

bool switchLastState = LOW;
bool switchCurrentState = LOW;
bool reset = false;

unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;

void setup() 
{
	for (int i = 2; i <= 10; i++)
	{
		pinMode(i, OUTPUT);
	}
	pinMode(A0, INPUT);
	pinMode(A1, INPUT);
	pinMode(A2, INPUT);
	pinMode(A3, INPUT);
}

bool debounce(int swPos)
{
	switchCurrentState = digitalRead(swPos);
	if (switchLastState != switchCurrentState) 
	{
		delay(100);
		switchCurrentState = digitalRead(swPos);
	}

	if (switchCurrentState == HIGH)
	{
		return true;
	}
}

bool all(bool trigger) 
{
	if (trigger)		// Condition that triggers event
	{
		for (int i = 2; i <= 10; i++) 
		{
			digitalWrite(i, HIGH);
		}
		delay(100);
	}
	return false;
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

void resetLED()
{
	for (int i = 2; i <= 10; i++)
	{
		digitalWrite(i, LOW);
	}
}

void loop() 
{
	if (digitalRead(sw_triggerAll) == HIGH && reset == false) 
	{
		bool led_All = debounce(sw_triggerAll);
		reset = all(led_All);
	}
}
