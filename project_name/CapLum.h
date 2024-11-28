/*********************************************************************
 * @file  CapLum.h
 * @author Champagne Julie
 * @brief Fichier header de la classe Capteur de Luminosite
 *********************************************************************/
#ifndef CAPLUM_H_
#define CAPLUM_H_
#include "Capteur.h"
#include "Arduino.h"


class CapLum : public Capteur {
  int lumPin;
  int mesCapt;
  float resistCapt;
    public:
    CapLum();
    CapLum(int Pin);
    ~CapLum();
    void init(void);
    float getResistCapt(void);
    int getMesCapt(void);
    int updateMesCapt(void);
    float updateResistCapt(void);
    void updateCapteur(void);

};

#endif