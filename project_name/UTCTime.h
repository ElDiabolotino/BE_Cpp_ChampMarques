/*********************************************************************
 * @file  UTCime.h
 * @author Raphaël Marques
 * @brief Fichier header de la classe UTCTime
 *********************************************************************/
 #ifndef UTCTIME_H_
#define UTCTIME_H_

//ATTENTION ce fichier n'est pas utilisé dans la version 1.0 de l'application !!!!

#include "MyTime.h"

class UTCTime : public MyTime{
  int hour, min, sec;
  String Shour,Smin,Ssec;
  public:
  UTCTime();
  UTCTime(int port,char *ssid,char *pass);
  void run(void);
  long int getEpoch(void);
  String getTime(void);


};



#endif