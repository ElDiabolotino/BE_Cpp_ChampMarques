/*********************************************************************
 * @file  Actionneur.h
 * @author Marques Raphaël
 * @brief Fichier header de la classe virtuelle Actionneur
 *********************************************************************/
#ifndef MYACTIONNEUR_H_
#define MYACTIONNEUR_H_

/**
  * @class Actionneur
  * @brief Classe Actionneur 
*/    
class Actionneur
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