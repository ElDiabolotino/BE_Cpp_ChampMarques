/*********************************************************************
 * @file  CapTempHumid.cpp
 * @author Julie Champagne
 * @brief Classe pour le driver CapTempHumid
 *********************************************************************/
#include "CapTempHumid.h"


CapTempHumid::CapTempHumid(void){
  mesCapt = {0,0};
}

CapTempHumid::CapTempHumid(int wioLink){
  mesCapt = {0,0};
  if (wioLink){
    pinMode(PIN_GROVE_POWER, OUTPUT);
    digitalWrite(PIN_GROVE_POWER,1);
  }
}

CapTempHumid::~CapTempHumid(void){
  delete [] dht;
}

void CapTempHumid::init(){
  Wire.begin();
  dht.begin();
}

float CapTempHumid::getHumid(void){
  return mesCapt[0];
}
float CapTempHumid::getTemp(void){
  return mesCapt[1];
}

int CapTempHumid::updateMesCapt(void){
  return dht.readTempAndHumidity(mesCapt);
}

