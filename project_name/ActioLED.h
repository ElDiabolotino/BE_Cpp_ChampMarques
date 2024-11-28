/*********************************************************************
 * @file  ActioLED.h
 * @author Marques Raphaël
 * @brief Fichier header de la classe du driver ActioLED
 *********************************************************************/
#ifndef MYLED_H_
#define MYLED_H_
#include "Actionneur.h"
#include "Arduino.h"

// grove LED SOCKET KIT v1.4
/**
  * @class ActioLED
  * @brief Classe ActioLED 
*/    
class ActioLED : public Actionneur
{
  int ledPin;
  int ledOn;
  public :
    /**
     * @fn ActioLED();
     * @brief Constructeur par defaut
    */    
    ActioLED();
    ActioLED(int Pin);
    /**
     * @fn ActioLED();
     * @brief Destructeur
    */    
    ~ActioLED();    
    /**
     * @fn virtual void init(void)
     * @brief Fonction d'initialisation du Buzzer
    */
    void init(void);
    /**
     * @fn virtual void run(void)
     * @brief Fonction de lancement des Buzzer
    */
    void run(void);
    int getLED (void);
    void setLED(void);
    void resetLED(void);
    void toggleLED (void);
};

#endif