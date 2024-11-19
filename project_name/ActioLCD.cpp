/*********************************************************************
 * @file  ActioLCD.cpp
 * @author Raphaël Marques
 * @brief Classe pour le driver ActioLCD
 *********************************************************************/
#include "ActioLCD.h"


ActioLCD::ActioLCD()
{
  ColorR = 0;
  ColorG = 0;
  ColorB = 0; 
}

ActioLCD::ActioLCD(int R,int G,int B){
  ColorR = R;
  ColorG = G;
  ColorB = B;
}
  
ActioLCD::~ActioLCD()
{
  // Code
  ;
}  

void ActioLCD::init(void)
{
  lcd.begin(16,2);
  ColorR = 100;
  ColorG = 0;
  ColorB = 0;
}


void ActioLCD::run(void)
{
  // Code
    ;
}
