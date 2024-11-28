/*********************************************************************
 * @file  CapLum.cpp
 * @author Julie Champagne
 * @brief Classe pour le driver CapLum
 *********************************************************************/
#include "CapLum.h"


CapLum::CapLum(void){
  lumPin = 0;
  resistCapt = 0;
}
CapLum::CapLum(int Pin){
  lumPin = Pin;
  resistCapt = 0;
}
CapLum::~CapLum(){}

void CapLum::init(void){
  updateCapteur();
}
float CapLum::getResistCapt(void){
  return resistCapt;
}
int CapLum::getMesCapt (void){
  return mesCapt;
}
int CapLum::updateMesCapt(void){
  mesCapt = analogRead(lumPin);
  return mesCapt;
}
float CapLum::updateResistCapt(void){
  resistCapt = (float) (1023-mesCapt)*10/mesCapt;
  return resistCapt;
}
void CapLum::updateCapteur(void){
  updateMesCapt();
  updateResistCapt();
}