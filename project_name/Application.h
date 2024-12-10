/*********************************************************************
 * @file  Application.h
 * @author Marques Raphaël/ Champagne Julie
 * @brief Fichier header de l'application
 *********************************************************************/
#ifndef APPLICATION_H_
#define APPLICATION_H_
#pragma once

#include "CapLum.h"
#include "CapTempHumid.h"
#include "CapToucher.h"
#include "ActioBuzzerV2.h"
#include "ActioLCD.h"
#include "ActioLED.h"
#include "UTCTime.h"


class Application {
  CapLum Lumiere;
  CapToucher Toucher;
  CapTempHumid TempHumid;
  ActioBuzzerV2 Buzzer;
  ActioLCD Ecran;
  ActioLED led;
  UTCTime Horloge;
  int tempsMesure;
  float seuilMesTH[2];
  int musics;
public : 
Application(int PinBuz,int PinTHu, int PinTou, int PinLum, int PinLed);
~Application();
void run(void);
void init(void);

};

#endif