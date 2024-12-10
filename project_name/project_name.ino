#include "ActioLCD.h"
#include "CapToucher.h"
#include "ActioBuzzerV2.h"
ActioLCD myLCD;


const int TouchPin = 3;
const int LedPin = 7;
const int BuzzPin = 6;
//ActioBuzzerV2 ab(BuzzPin,OUTPUT);
CapToucher ct(TouchPin);

void setup() 
{
  // put your setup code here, to run once:
  //myLCD.init();
  //ct.init();
  //ab.init();
  //pinMode(LedPin,OUTPUT);

}

void loop() 
{
  // put your main code here, to run repeatedly:
  //myLCD.run();
  //ct.run();
  
  /*if (ct.getEtat() == 1){
    //ab.run();
    digitalWrite(LedPin,HIGH);
  }
  else{
    //digitalWrite(BuzzPin,LOW);
    
    digitalWrite(LedPin,LOW);
    }*/

}
