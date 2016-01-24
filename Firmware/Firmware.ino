#include "Global.h"

void setup() 
{
	Serial.begin(9600);
	Serial.println("start");
  
}

void loop() 
{	
	int sample = soilMoisture.read();
	
	if(sample > 400)
	{
		led.setRGB(sample,0,0);
		delay(100);
		led.setRGB(0,sample,0);
		delay(100);
		led.setRGB(0,0,sample);
		delay(100);
	}
  
}
