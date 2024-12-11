/*********************************************************************
 * @file  CapTempHumid.h
 * @author Champagne Julie
 * @brief Fichier header de la classe Capteur TempHumid
 *********************************************************************/
#ifndef CAPTEMPHUMID_H_
#define CAPTEMPHUMID_H_
#include <deque>
#include "Capteur.h"
#include "Arduino.h"
#include "Grove_Temperature_And_Humidity_Sensor.h"


#define DHTTYPE DHT11


class CapTempHumid : public Capteur {
  float mesCapt[2];
  int DHTPIN;
  int mySize;
  DHT dht;
  std::deque<float> MesHumid;
  std::deque<float> MesTempe; 
    public:
    // Constructeurs et Destructeur
    CapTempHumid();
    CapTempHumid(int Pin,int size);
    ~CapTempHumid();
    //effectue une premiere mesure
    void init(void);
    //Met à jour les deux mesures et les attributs associés
    void updateMesCapt(void);
    //Assesseurs des deux attributs utilisés
    float getHumid(void);
    float getTemp(void);
    //Détection de dépassement du seuil d'Humidité en which=1 et de Température en which=2 
    int seuilDetect (float seuil,int which);
    void clear(int which=0);
  

};

#endif