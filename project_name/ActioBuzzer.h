/*********************************************************************
 * @file  ActioBuzzer.h
 * @author Marques Raphaël
 * @brief Fichier header de la classe du driver ActioBuzzer
 *********************************************************************/
#ifndef MYBUZZER_H_
#define MYBUZZER_H_
#include "Actionneur.h"
#include "Arduino.h"

//ATTENTION ce fichier n'est pas utilisé dans la version 1.0 de l'application !!!!

/**
  * @class ActioBuzzer
  * @brief Classe ActioBuzzer 
*/    
class ActioBuzzer : public Actionneur
{
  int Biping;
  int buzzerPin;
  String melody;
  int beats[15] = {1,1,1,1,1,1,2,1,1,1,1,1,1,2,4};
  int tempo;
  public :
    /**
     * @fn ActioBuzzer();
     * @brief Constructeur par defaut
    */    
    ActioBuzzer();
    ActioBuzzer(int Pin);
    /**
     * @fn ActioBuzzer();
     * @brief Destructeur
    */    
    ~ActioBuzzer();    
    /**
     * @fn virtual void init(void)
     * @brief Fonction d'initialisation du Buzzer
    */
    virtual void init(void);
    /**
     * @fn virtual void run(void)
     * @brief Fonction de lancement des Buzzer
    */
    void run(void);
    void toggleBip (void);
    void playMelody (String melody, int *beats, int tempo);
    void playTone(int tone, int duration);
    void playNote(char note, int duration);


};

#endif