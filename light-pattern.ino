/*
  Client file
*/

const int LED_COUNT = 9;
const int SW_COUNT = 4;
int led[LED_COUNT] = {2, 3, 4, 5, 6, 7, 8, 9, 10};

const unsigned long db_delay = 50;
bool buttonState;
bool lastButtonState = LOW;

struct Button 
{
	int m_pin;
	bool m_pressed;

	// Function won't retain the last value
	bool readAndDebounce(int pin)
	{
		unsigned long db_time;

		int reading = digitalRead(pin);
		if (reading != lastButtonState)
		{
			db_time = millis();
		}

		if ((millis() - db_time) > db_delay)
		{
			if (reading != buttonState)
			{
				buttonState = reading;
			}
			if (buttonState == true)
			{
				return true;
			} else return false;
		}
	};
};

struct Button sw1 = {14, false};	// 14~17 : A0~A3
struct Button sw2 = {15, false};
struct Button sw3 = {16, false};
struct Button sw4 = {17, false};

void setup() 
{
	pinMode(sw1.m_pin, INPUT);
	pinMode(sw2.m_pin, INPUT);
	pinMode(sw3.m_pin, INPUT);
	pinMode(sw4.m_pin, INPUT);

	for (int i = 0; i < sizeof(led); i++)
	{
		pinMode(led[i], OUTPUT);
	}

	Serial.begin(9600);
	Serial.flush();
}

void loop() 
{
	// For testing
	sw1.m_pressed = digitalRead(sw1.m_pin);
	
	if (sw1.m_pressed == true)
	{
		Serial.println(1);
	} else Serial.println(0);

	delay(500);
}
