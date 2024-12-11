/*********************************************************************
 * @file  CapLum.cpp
 * @author Julie Champagne
 * @brief Classe pour le driver CapLum
 *********************************************************************/
#include "CapLum.h"


CapLum::CapLum(void):resistValues(10,0.0){
  lumPin = 0;
  resistCapt = 0;
  mySize = 20;
}
CapLum::CapLum(int Pin,int size):mySize(size),resistValues(size/2,0.0){
  lumPin = Pin;
  resistCapt = 0;
  mySize = size;
}
CapLum::~CapLum(){}

void CapLum::init(void){
  updateMesCapt();
}

float CapLum::getResistCapt(void){
  return resistCapt;
}
int CapLum::getMesCapt (void){
  return mesCapt;
}
int CapLum::updateMesLum(void){
  mesCapt = analogRead(lumPin);
  return mesCapt;
}
float CapLum::updateResistCapt(void){
  resistCapt = (float) (1023-mesCapt)*10/mesCapt;
  if (resistValues.size()>=mySize) resistValues.pop_front();
  resistValues.push_back(resistCapt);
  return resistCapt;
}
void CapLum::updateMesCapt(void){
  updateMesLum();
  updateResistCapt();
}

int CapLum::seuilDetect(int seuil){
  int diff = 1;
  if (resistValues.back()>seuil)
    diff = 0;
  if (*(resistValues.end()-1)>seuil)
    diff = 0;
  if (*(resistValues.end()-2)>seuil)
    diff = 0;
  if (*(resistValues.end()-3)>seuil)
    diff = 0;
  if (*(resistValues.end()-4)>seuil)
    diff = 0;
  return diff;
}

void CapLum::clear (void){
  resistValues.clear();
}
