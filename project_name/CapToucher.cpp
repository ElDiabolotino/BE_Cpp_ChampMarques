/*********************************************************************
 * @file  CapToucher.cpp
 * @author Julie Champagne
 * @brief Classe pour le driver CapToucher
 *********************************************************************/
#include "CapToucher.h"


CapToucher::CapToucher(){
    touchPin = 0;;
    etat = 0;
}

CapToucher::CapToucher(int Pin){
    touchPin = Pin;
    etat = 0;
}

CapToucher::~CapToucher(){}

void CapToucher::init(void){
    pinMode(touchPin,INPUT);
}

void CapToucher::run(void){
    updateMesCapt();
}

int CapToucher::getCapt(void){
    return digitalRead(touchPin);
}

int CapToucher::getEtat(){
  return etat;
}

void CapToucher::updateMesCapt(void){
    etat = getCapt();
}
/*
int CapToucher::getEtatLed(void){
    return etatLed;
}*/
