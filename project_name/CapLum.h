/*********************************************************************
 * @file  CapLum.h
 * @author Champagne Julie
 * @brief Fichier header de la classe Capteur de Luminosite
 *********************************************************************/
#ifndef CAPLUM_H_
#define CAPLUM_H_
#include <deque>
#include "Arduino.h"
#include "Capteur.h"


class CapLum : public Capteur {
  int lumPin;
  int mesCapt;
  float resistCapt;
  int mySize;
  std::deque<float> resistValues;
    public:
    CapLum();
    CapLum(int Pin,int size);
    ~CapLum();
    void init(void);
    float getResistCapt(void);
    int getMesCapt(void);
    int updateMesCapt(void);
    float updateResistCapt(void);
    void updateCapteur(void);
    int seuilDetect(int seuil);
};

#endif