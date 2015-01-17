const int buttonPin = 7;     // the number of the pushbutton pin
const int buttonPin2 = 6;     // the number of the pushbutton2 pin
const int ledPin1 =  2;      // the number of the LED pin
const int ledPin2=  3;      // the number of the LED pin
const int ledPin3 =  4;      // the number of the LED pin

int counter = 0;
int buttonState = 0;        
int buttonState2 = 0;     

void setup() 
{
	pinMode(ledPin1, OUTPUT);     
	pinMode(ledPin2, OUTPUT);   
	pinMode(ledPin3, OUTPUT);    
	pinMode(buttonPin, INPUT);    
	pinMode(buttonPin2, INPUT); 
}

void ledAutomat()
{
	digitalWrite(ledPin1,HIGH);
	digitalWrite(ledPin2,LOW);
	digitalWrite(ledPin3,LOW);
	delay(1000);
  
	digitalWrite(ledPin1,LOW);
	digitalWrite(ledPin2,HIGH);
	digitalWrite(ledPin3,LOW);
	delay(1000);
  
	digitalWrite(ledPin1,LOW);
	digitalWrite(ledPin2,LOW);
	digitalWrite(ledPin3,HIGH); 
	delay(1000);
}

void loop()
{
	buttonState = digitalRead(buttonPin);
	buttonState2 = digitalRead(buttonPin2);

if(buttonState==1)
{
counter++;
}

if(buttonState2==HIGH)
{
	switch(counter)
	{
	case 1:
		digitalWrite(ledPin1,HIGH);
		digitalWrite(ledPin2,LOW);
		digitalWrite(ledPin3,LOW);
		delay(300);// czas odczekania na drgania styków
	break;
    
	case 2:
		digitalWrite(ledPin1,LOW);
		digitalWrite(ledPin2,HIGH);
		digitalWrite(ledPin3,LOW);
		delay(300);
	break;
   
	case 3:
		digitalWrite(ledPin1,LOW);
		digitalWrite(ledPin2,LOW);
		digitalWrite(ledPin3,HIGH);
		delay(300);
	break;

	case 4:
		digitalWrite(ledPin1,LOW);
		digitalWrite(ledPin2,LOW);
		digitalWrite(ledPin3,LOW);
		delay(300);
	break;

	default:
		counter=0;
	}
}

else
{
	ledAutomat();
}

}
