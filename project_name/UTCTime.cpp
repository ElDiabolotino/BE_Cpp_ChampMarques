/*********************************************************************
 * @file  UTCTime.cpp
 * @author Raphaël Marques
 * @brief Classe pour le driver UTCTime
 *********************************************************************/
#include "UTCTime.h"

//ATTENTION ce fichier n'est pas utilisé dans la version 1.0 de l'application !!!!



UTCTime::UTCTime ():MyTime(){
  hour = 0;
  min = 0;
  sec = 0;
  Shour = "00";
  Smin = "00" ;
  Ssec = "00" ;
}
UTCTime::UTCTime (int port, char *ssid,char *pass): MyTime(port,ssid,pass){
  hour = 0;
  min = 0;
  sec = 0;
  Shour = "00";
  Smin = "00" ;
  Ssec = "00" ;
}
void UTCTime::run(void){
  MyTime::run();
  hour = (epoch%86400L)/3600;
  min = (epoch%3600)/60;
  sec = (epoch%60);
  Shour = {0x30+ (hour%24-hour%10)/10, 0x30+ (hour%10)};
  Smin = {0x30+ (min%60-min%10)/10, 0x30+ (min%10)};
  Ssec = {0x30+ (sec%60-sec%10)/10, 0x30+ (sec%10)};
}
  long int UTCTime::getEpoch(void){return epoch;}
  String UTCTime::getTime(void){return (Shour+":"+Smin+":"+Ssec);}
