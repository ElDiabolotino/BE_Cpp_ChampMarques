/*********************************************************************
 * @file  CapTempHumid.cpp
 * @author Julie Champagne
 * @brief Classe pour le driver CapTempHumid
 *********************************************************************/
#include "CapTempHumid.h"


CapTempHumid::CapTempHumid(void): dht(0,DHTTYPE),mySize(10),MesHumid(10,0.0),MesTempe(10,0.0){
  DHTPIN = 0;
  mesCapt[0] = 0;
  mesCapt[1] = 0;
}

CapTempHumid::CapTempHumid(int Pin,int size): dht(Pin,DHTTYPE),mySize(size),MesHumid((int) size/2,0.0),MesTempe((int) size/2,0.0){
  DHTPIN = Pin;
  mesCapt[0] = 0;
  mesCapt[1] = 0;
  //if (wioLink){
  //  pinMode(PIN_GROVE_POWER, OUTPUT);
  //  digitalWrite(PIN_GROVE_POWER,1);
  //}
}

CapTempHumid::~CapTempHumid(void){}

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

  int succes = dht.readTempAndHumidity(mesCapt);
  if (MesHumid.size()>=mySize) MesHumid.pop_front();
  MesHumid.push_back(mesCapt[0]);
  if (MesTempe.size()>=mySize) MesTempe.pop_front();
  MesTempe.push_back(mesCapt[1]);
  return succes;
}

int* CapTempHumid::seuilDetect (float* seuil){

  int diff[2];
  diff[0]=0;
  diff[1]=0;
  if (seuil[0]<=MesHumid.back()){
    diff[0] = 1;
  }
  if (seuil[1]<=MesTempe.back()){
    diff[1] = 1;
  }

  return diff;
}






