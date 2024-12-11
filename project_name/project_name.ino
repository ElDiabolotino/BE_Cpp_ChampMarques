#include "Application.h"


  //(PinBuz=12,PinTHu=14,PinTou=13,PinLum=0,PinLed=15)
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
