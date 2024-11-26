/*********************************************************************
 * @file  ActioLED.cpp
 * @author Raphaël Marques
 * @brief Classe pour le driver ActioLED
 *********************************************************************/
#include "ActioLED.h"

// grove LED SOCKET KIT v1.4
ActioLED::ActioLED() {
  ledPin = 0;
  ledOn = 0;
}
ActioLED::ActioLED(int Pin) {
  ledPin = Pin;
  ledOn = 0;
}
  
ActioLED::~ActioLED() {
  // Code
  ;
}  

void ActioLED::init(void) {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin,LOW);
}


void ActioLED::run(void) {
  for (int i=0;i<10;i++){
    toggleLED();
    delay(500); //in milliseconds
  }
}

int ActioLED::getLED (void) {
  return ledOn;
}

void ActioLED::resetLED (void) {
  digitalWrite(ledPin, LOW);
  ledOn = 0;
}

void ActioLED::setLED (void) {
  digitalWrite(ledPin, HIGH);
  ledOn = 1;
}

void ActioLED::toggleLED (void) {
  digitalWrite(ledPin,ledOn?LOW:HIGH);
  ledOn = ledOn? 0:1;
}
