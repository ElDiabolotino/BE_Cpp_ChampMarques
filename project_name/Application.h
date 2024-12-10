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


class Application {
  CapLum Lumiere;
  CapToucher Toucher;
  CapTempHumid TempHumid;
  ActioBuzzerV2 Buzzer;
  ActioLCD Ecran;
  ActioLED led;

public : 
Application();
~Application();
void run(void);
void init(void);

};

#endif