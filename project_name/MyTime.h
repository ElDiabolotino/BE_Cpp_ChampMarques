/*********************************************************************
 * @file  MyTime.h
 * @author Raphaël Marques
 * @brief Fichier header de la classe MyTime
 *********************************************************************/
#ifndef MYTIME_H_
#define MYTIME_H_
#include "time.h"

class MyTime {
  int Ahour, Amin;
  time_t t;

  MyTime();

  ~MyTime();
  void init(void);
  void run(void);
  void setAlarm(void);
  int isTimeOfAlarm(void);


};

#endif