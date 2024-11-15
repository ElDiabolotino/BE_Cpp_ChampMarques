/*********************************************************************
 * @file  ActioLCD.h
 * @author Marques Raphaël
 * @brief Fichier header de la classe du driver ActioLCD
 *********************************************************************/
#ifndef MYLCD_H_
#define MYLCD_H_
#include "Actionneur.h"

/**
  * @class ActioLCD
  * @brief Classe ActioLCD 
*/    
class ActioLCD : public Actionneur
{
  public :
    /**
     * @fn ActioLCD();
     * @brief Constructeur par defaut
    */    
    ActioLCD();
    /**
     * @fn ActioLCD();
     * @brief Destructeur
    */    
    ~ActioLCD();    
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