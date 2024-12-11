/*********************************************************************
 * @file  CapLum.h
 * @author Champagne Julie
 * @brief Fichier header de la classe Capteur de Luminosite
 *********************************************************************/
#ifndef CAPLUM_H_
#define CAPLUM_H_
#include <deque>
#include "Arduino.h"
#include "Capteur.h"

/**
  * @class CapLium
  * @brief Classe CapLum 
*/   
class CapLum : public Capteur {
  int lumPin;
  int mesCapt; //Permet le calcul de resistCap
  float resistCapt; //diminue avec l'augmentation de la lumiere
  int mySize;
  std::deque<float> resistValues;

    public:
    /**
     * @fn CapLum();
     * @brief Constructeur par defaut
    */  
    CapLum();
    /**
     * @fn CapLum(int Pin,int size);
     * @brief Constructeur avec la broche et la taille de la deque
    */  
    CapLum(int Pin,int size);
    /**
     * @fn ~CapLum();
     * @brief Destructeur par défaut
    */  
    ~CapLum();
    /**
     * @fn void init(void)
     * @brief Fonction d'initialisation du capteur
    */
    void init(void);
    /**
     * @fn float getResistCapt(void)
     * @brief Assesseur de la resistance lumineuse
    */
    float getResistCapt(void);
    /**
     * @fn int getMesCapt(void)
     * @brief Assesseur de la mesure lumineuse
    */
    int getMesCapt(void);
    /**
     * @fn int updateMesLum(void)
     * @brief Mise à jour de la mesure
    */
    int updateMesLum(void);
    /**
     * @fn float updateResistCapt(void)
     * @brief Mise à jour de la résistance
    */
    float updateResistCapt(void);
    /**
     * @fn void updateMesCapt(void)
     * @brief Mise à jour complète du capteur (fonction préférée aux autres)
    */
    void updateMesCapt(void);
    /**
     * @fn int seuilDetect(int seuil)
     * @brief Fonction de détection de dépassement de seuil de luminosité (Resistance<Seuil)
    */
    int seuilDetect(int seuil);
    /**
     * @fn void clear(void)
     * @brief Fonction pour effacer le contenu de la deque
    */
    void clear (void);
};

#endif