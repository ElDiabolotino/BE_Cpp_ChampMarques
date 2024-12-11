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
     * @fn void init(void)
     * @brief Fonction d'initialisation de la LED
    */
    void init(void);
    /**
     * @fn void run(void)
     * @brief Fonction de lancement de la LED
    */
    void run(void);
    /**
     * @fn int getLED(void)
     * @brief Assesseur de l'état de la LED
    */
    int getLED (void);
    /**
     * @fn int getLED(void)
     * @brief Allumage de la LED et changement de ledOn
    */
    void setLED(void);
    /**
     * @fn int getLED(void)
     * @brief éteignage de la LED et changement de ledOn
    */
    void resetLED(void);
    /**
     * @fn int getLED(void)
     * @brief Allumage ou éteignage de la LED en fonction de ledOn qui change
    */
    void toggleLED (void);
};

#endif