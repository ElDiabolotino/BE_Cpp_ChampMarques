/*********************************************************************
 * @file  ActioLCD.cpp
 * @author Raphaël Marques
 * @brief Classe pour le driver ActioLCD
 *********************************************************************/
#include "ActioLCD.h"
using namespace std;

ActioLCD::ActioLCD()
{
  lcd.setRGB(0,0,0);
  ColorR = 0;
  ColorG = 0;
  ColorB = 0;
}

ActioLCD::ActioLCD(int R,int G,int B){
  lcd.setRGB(R,G,B);
  ColorR = R;
  ColorG = G;
  ColorB = B;
}
  
ActioLCD::~ActioLCD()
{
  lcd.clear();
  lcd.noDisplay();
}  
void ActioLCD::setColors(int R,int G, int B){
  lcd.setRGB(R,G,B);
  ColorR = R;
  ColorG = G;
  ColorB = B;
}

void ActioLCD::toggleOn(int On){
  if (On==1) lcd.display();
  else lcd.noDisplay();
}
void ActioLCD::affChar(char c){
  lcd.print(c);
}
void ActioLCD::affChar(char c,int Col, int Row)
{
  lcd.setCursor(Col,Row);
  lcd.print(c);
}
void ActioLCD::whereCur(int Col, int Row){
  lcd.setCursor(Col,Row);
}
void ActioLCD::affMsg(char *Msg){
  lcd.print(Msg);
}
void ActioLCD::init(void)
{
  lcd.begin(16,2);
  toggleOn(1);
  lcd.print("Wake Up!!");
  ColorR = 100;
  ColorG = 0;
  ColorB = 0;
}


void ActioLCD::run(void)
{
  lcd.clear();
}