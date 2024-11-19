/*********************************************************************
 * @file  ActioLCD.h
 * @author Marques Raphaël
 * @brief Fichier header de la classe du driver ActioLCD
 *********************************************************************/
#ifndef MYLCD_H_
#define MYLCD_H_
#include "Actionneur.h"
#include "rgb_lcd.h"

/**
  * @class ActioLCD
  * @brief Classe ActioLCD 
*/    
class ActioLCD : public Actionneur
{
  rgb_lcd lcd;
  int ColorR,ColorG,ColorB;
  public :
    /**
     * @fn ActioLCD();
     * @brief Constructeur par defaut
    */    
    ActioLCD();
    ActioLCD(int R,int G,int B);
    /**
     * @fn ActioLCD();
     * @brief Destructeur
    */    
    ~ActioLCD();    
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
};

#endif