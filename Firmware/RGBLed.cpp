#include "RGBLed.h"

RGBLed::RGBLed(int redPin, int greenPin, int bluePin)
{
	rPin = redPin;
	gPin = greenPin;
	bPin = bluePin;
	
	pinMode(rPin, OUTPUT);
	pinMode(gPin, OUTPUT);
	pinMode(bPin, OUTPUT);
}
void RGBLed::setRGB(int R, int G, int B)
{
	analogWrite(rPin,255-R);
	analogWrite(gPin,255-G);
	analogWrite(bPin,255-B);
}
void RGBLed::turnOff()
{
	digitalWrite(rPin,1);
	digitalWrite(gPin,1);
	digitalWrite(bPin,1);
}


