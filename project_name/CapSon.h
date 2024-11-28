/*********************************************************************
 * @file  CapSon.h
 * @author Champagne Julie
 * @brief Fichier header de la classe Capteur Sonore
 *********************************************************************/
#ifndef CAPSON_H_
#define CAPSON_H_
#include "Capteur.h"
#include "Arduino.h"


class CapSon : public Capteur {
  int sonPin;
  int mesCapt;
    public:
    CapSon();
    CapSon(int Pin);
    ~CapSon();
    void init(void);
    int getMesCapt(void);
    int updateMesCapt(void);


};

#endif