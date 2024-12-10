/*********************************************************************
 * @file  Driver.h
 * @author Marques Raphaël/ Champagne Julie
 * @brief Fichier header de l'application
 *********************************************************************/
#ifndef DRIVER_H_
#define DRIVER_H_

/**
  * @class Driver
  * @brief Classe Driver 
*/    
class Driver
{
  public :
    /**
     * @fn Driver();
     * @brief Constructeur par defaut
    */    
    Driver();
    /**
     * @fn Driver();
     * @brief Destructeur
    */    
    ~Driver();    
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