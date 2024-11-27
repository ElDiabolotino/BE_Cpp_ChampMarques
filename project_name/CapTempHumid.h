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

#define DHTTYPE DHT11
#define DHTPIN 0

class CapTempHumid : public Capteur {
  float mesCapt[2];
  DHT dht(DHTPIN,DHTTYPE);
    public:
    CapTempHumid();
    CapTempHumid(int wioLink);
    ~CapTempHumid();
    void init(void);
    int getMesCapt(void);
    int updateMesCapt(void);
  

};

#endif