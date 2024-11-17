/*********************************************************************
 * @file  CapTouch.h
 * @author Champagne Julie
 * @brief Fichier header de la classe Capteur Bouton
 *********************************************************************/
#ifndef CAPTOUCH_H_
#define CAPTOUCH_H_
#include "Capteur.h"


class CapTouch : public Capteur {
    public:
    CapTouch();
    ~CapTouch();
    void init(void);
    int getIntensity();

};

#endif