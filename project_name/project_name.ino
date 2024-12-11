#include "Application.h"


  //(PinBuzzer=12,PinTempHumid=14,PinTactile=13,PinLumiere=0,PinLed=15)
  Application Appli(12,14,13,0,15);
  
void setup() 
{
  // put your setup code here, to run once:
  Appli.init();
}

void loop() 
{
  // put your main code here, to run repeatedly:
  Appli.run();
}
