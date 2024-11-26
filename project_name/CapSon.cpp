/*********************************************************************
 * @file  CapSon.cpp
 * @author Julie Champagne
 * @brief Classe pour le driver CapSon
 *********************************************************************/
#include "CapSon.h"

CapSon::CapSon(){
  sonPin = 0;
  mesCapt = 0;
}
CapSon::CapSon(int Pin){
  sonPin = Pin;
  mesCapt = 0;
}
CapSon::~CapSon(){
  ;
}
void CapSon::init(void){
  mesCapt = analogRead(sonPin);
}
int CapSon::getMesCapt(void){
  return mesCapt;
}
int CapSon::updateMesCapt(void){
  mesCapt = analogRead(sonPin);
  return mesCapt;
}