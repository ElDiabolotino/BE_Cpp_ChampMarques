/*********************************************************************
 * @file  CapTempHumid.h
 * @author Champagne Julie
 * @brief Fichier header de la classe Capteur TempHumid
 *********************************************************************/
#ifndef CAPTEMPHUMID_H_
#define CAPTEMPHUMID_H_
#include "Capteur.h"
#include "Arduino.h"


class CapTempHumid : public Capteur {
  int THPin;
  int mesCapt;
    public:
    CapTempHumid();
    CapTempHumid(int Pin);
    ~CapTempHumid();
    void init(void);
    int getMesCapt(void);
    int updateMesCapt(void);


};

#endif