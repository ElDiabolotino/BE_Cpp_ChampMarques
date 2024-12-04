/*********************************************************************
 * @file  CapToucher.cpp
 * @author Julie Champagne
 * @brief Classe pour le driver CapToucher
 *********************************************************************/
#include "CapToucher.h"
#include "Arduino.h"

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
    updateCapt();
}

int CapToucher::getCapt(void){
    return digitalRead(touchPin);
}

int CapToucher::getEtat(){
  return etat;
}

int CapToucher::updateCapt(void){
    etat = getCapt();
    return etat;
}
/*
int CapToucher::getEtatLed(void){
    return etatLed;
}*/
