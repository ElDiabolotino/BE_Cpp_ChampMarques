/*********************************************************************
 * @file  CapTempHumid.h
 * @author Champagne Julie
 * @brief Fichier header de la classe Capteur TempHumid
 *********************************************************************/
#ifndef CAPTEMPHUMID_H_
#define CAPTEMPHUMID_H_
#include "Capteur.h"
#include "Arduino.h"
#include "Grove_Temperature_And_Humidity_Sensor.h"
#include "deque"

#define DHTTYPE DHT11


class CapTempHumid : public Capteur {
  float mesCapt[2];
  int DHTPIN;
  int mySize;
  DHT dht;
  std::deque<float> MesHumid;
  std::deque<float> MesTempe; 
    public:
    CapTempHumid();
    CapTempHumid(int Pin,int size);
    ~CapTempHumid();
    void init(void);
    void updateMesCapt(void);
    float getHumid(void);
    float getTemp(void);
    int* seuilDetect (float* seuil);
  

};

#endif