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
    // Initialise que la broche
    void init(void);
    //assesseur de la valeur du capteur sans modifier l'attribut etat
    int getCapt(void);
    //Fonction de Mise à jour de l'état par mesure du capteur en digital pin
    void updateMesCapt(void);
    //Assesseur de l'attribut etat
    int getEtat(void);
    void run(void);


};

#endif