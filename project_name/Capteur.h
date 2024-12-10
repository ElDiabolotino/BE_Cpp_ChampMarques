/*********************************************************************
 * @file  Capteur.h
 * @author Champagne Julie
 * @brief Fichier header de la classe Capteur
 *********************************************************************/
#ifndef CAPTEUR_H_
#define CAPTEUR_H_
#include "Driver.h"


/**
  * @class Capteur
  * @brief Classe Capteur 
*/    
class Capteur : public Driver{
  public :
    /**
     * @fn Capteur();
     * @brief Constructeur par defaut
    */    
    Capteur();
    /**
     * @fn Capteur();
     * @brief Destructeur
    */    
    ~Capteur();    
    /**
     * @fn void init(void)
     * @brief Fonction d'initialisation de l'application
    */
    void init(void);
    /**
     * @fn void run(void)
     * @brief Fonction de lancement de l'application
    */
    void run(void);
};

#endif