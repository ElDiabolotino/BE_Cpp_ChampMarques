/*********************************************************************
 * @file  CapToucher.h
 * @author Champagne Julie
 * @brief Fichier header de la classe Capteur Toucher
 *********************************************************************/
#ifndef CAPTOUCHER_H_
#define CAPTOUCHER_H_
#include "Capteur.h"
#include "Arduino.h"


class CapToucher : public Capteur {
  int touchPin;
  int etat;

    public:
    CapToucher();
    CapToucher(int Pin);
    ~CapToucher();
    void init(void);
    int getCapt(void);
    void updateMesCapt(void);
    int getEtat(void);
    void run(void);


};

#endif