/*********************************************************************
 * @file  Actionneur.h
 * @author Marques Raphaël
 * @brief Fichier header de la classe virtuelle Actionneur
 *********************************************************************/
#ifndef MYACTIONNEUR_H_
#define MYACTIONNEUR_H_
#include "Driver.h"

/**
  * @class Actionneur
  * @brief Classe Actionneur 
*/    
class Actionneur : public Driver
{
  public :
    /**
     * @fn Actionneur();
     * @brief Constructeur par defaut
    */    
    Actionneur();
    /**
     * @fn Actionneur();
     * @brief Destructeur
    */    
    ~Actionneur();    
    /**
     * @fn virtual void init(void)
     * @brief Fonction d'initialisation des actionneurs
    */
    virtual void init(void)=0;
    /**
     * @fn virtual void run(void)
     * @brief Fonction de lancement des actionneurs
    */
    void run(void);
};

#endif