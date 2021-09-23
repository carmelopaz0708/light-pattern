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
const int sw1 = A0;
const int sw2 = A1;
const int sw3 = A2;
const int sw4 = A3;

unsigned long sw_dbTime = 0;
unsigned long db_delay = 100;

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

bool debounce(bool reading)
{
	sw_dbTime = millis();

	if ((millis() - sw_dbTime) > db_delay)
	{
		if (reading == true)
		{
			return true;
		}
	}
}

void testFN1(bool on) 
{
	// Make led1 ~ led4 light up
	digitalWrite(led1, on);
	digitalWrite(led2, on);
	digitalWrite(led3, on);
	digitalWrite(led4, on);
}

void testFN2(bool on)
{
	// Make led5 ~ led9 light up
	digitalWrite(led5, on);
	digitalWrite(led6, on);
	digitalWrite(led7, on);
	digitalWrite(led8, on);
	digitalWrite(led9, on);
}

void loop() 
{
	bool activate_sw1 = false;

	bool read_sw1 = digitalRead(sw1);

	// Listen for button presses
	if (read_sw1 != false)
	{
		activate_sw1 = debounce(read_sw1);
	}

	// Activate pattern on button press
	if (activate_sw1 == true)
	{
		testFN1(activate_sw1);
	}
}
