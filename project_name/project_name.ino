#include "ActioLCD.h"
#include "CapToucher.h"
#include "ActioBuzzer.h"


const int TouchPin = 3;
const int LedPin = 7;
const int BuzzPin = 13;
ActioBuzzer ab(BuzzPin);
CapToucher ct(TouchPin);

void setup() 
{
  // put your setup code here, to run once:
  //myLCD.init();
  ct.init();
  ab.init();
  pinMode(LedPin,OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  //myLCD.run();
  ct.run();
  ab.run();
  /*
  if (ct.getEtat() == 1){
    //ab.run();
    digitalWrite(LedPin,HIGH);
  }
  else{
    //digitalWrite(BuzzPin,LOW);
    
    digitalWrite(LedPin,LOW);
    }*/
}

/*const int TouchPin=14;
const int ledPin=13;

void setup() {
    pinMode(TouchPin, INPUT);
    pinMode(ledPin,OUTPUT);

}

void loop() {
  if (digitalRead(TouchPin)){
    digitalWrite(ledPin,HIGH);
  } else
    digitalWrite(ledPin, LOW);
}*/
