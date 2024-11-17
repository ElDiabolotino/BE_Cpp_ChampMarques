/*********************************************************************
 * @file  CapTempHum.h
 * @author Champagne Julie
 * @brief Fichier header de la classe Capteur de Température et d'Humidité
 *********************************************************************/

#ifndef CAPTEMPHUM_H_
#define CAPTEMPHUM_H_
#include "Capteur.h"


class CapTempHum : public Capteur {
    public:
    CapTempHum();
    ~CapTempHum();
    void init(void);
    int getIntensity();

};

#endif