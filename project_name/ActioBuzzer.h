/*********************************************************************
 * @file  ActioBuzzer.h
 * @author Marques Raphaël
 * @brief Fichier header de la classe du driver ActioBuzzer
 *********************************************************************/
#ifndef MYBUZZER_H_
#define MYBUZZER_H_
#include "Actionneur.h"

/**
  * @class ActioBuzzer
  * @brief Classe ActioBuzzer 
*/    
class ActioBuzzer : public Actionneur
{
  public :
    /**
     * @fn ActioBuzzer();
     * @brief Constructeur par defaut
    */    
    ActioBuzzer();
    /**
     * @fn ActioBuzzer();
     * @brief Destructeur
    */    
    ~ActioBuzzer();    
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