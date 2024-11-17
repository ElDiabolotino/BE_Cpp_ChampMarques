/*********************************************************************
 * @file  CapLum.h
 * @author Champagne Julie
 * @brief Fichier header de la classe Capteur de Luminosite
 *********************************************************************/
#ifndef CAPLUM_H_
#define CAPLUM_H_
#include "Capteur.h"


class CapLum : public Capteur {
    public:
    CapLum();
    ~CapLum();
    void init(void);
    int getIntensity();

};

#endif