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
#include "string" //Cette ligne a été ajoutée des suites d'un disfonctionnement de "to_string" après des mises de commentaires
using namespace std;


class Application {
  CapLum Lumiere;
  CapToucher Toucher;
  CapTempHumid TempHumid;
  ActioBuzzerV2 Buzzer;
  ActioLCD Ecran;
  ActioLED led;
  UTCTime Horloge; //Présent dans le constructeur mais est en commentaire dans l'initialisation car inutilisé
  int tempsMesure;
  int musics;
public : 
Application(int PinBuz,int PinTHu, int PinTou, int PinLum, int PinLed);
void run(void);
void init(void);
//Fonction permettant d'afficher les mesures usuelles de Température et d'humidité pour gagner en lisibilité
void refreshScreen(void);
};

#endif