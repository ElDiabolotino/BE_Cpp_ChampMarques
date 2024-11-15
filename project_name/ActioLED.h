/*********************************************************************
 * @file  ActioLED.h
 * @author Marques Raphaël
 * @brief Fichier header de la classe du driver ActioLED
 *********************************************************************/
#ifndef MYLED_H_
#define MYLED_H_
#include "Actionneur.h"

/**
  * @class ActioLED
  * @brief Classe ActioLED 
*/    
class ActioLED : public Actionneur
{
  public :
    /**
     * @fn ActioLED();
     * @brief Constructeur par defaut
    */    
    ActioLED();
    /**
     * @fn ActioLED();
     * @brief Destructeur
    */    
    ~ActioLED();    
    /**
     * @fn virtual void init(void)
     * @brief Fonction d'initialisation du Buzzer
    */
    virtual void init(void)=0;
    /**
     * @fn virtual void run(void)
     * @brief Fonction de lancement des Buzzer
    */
    void run(void);
};

#endif