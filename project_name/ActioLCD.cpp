/*********************************************************************
 * @file  ActioLCD.cpp
 * @author Raphaël Marques
 * @brief Classe pour le driver ActioLCD
 *********************************************************************/
#include "ActioLCD.h"



ActioLCD::ActioLCD():lcd()
{
  isOn = 0;
  isCurs = 0;
  isBlink = 0;
}
  
ActioLCD::ActioLCD(int On,int Cur, int Blin)
{
  isOn = On;
  isCurs = Cur;
  isBlink = Blin;
}

void ActioLCD::setParam(int On,int Cur, int Blin){
  setIsOn(On);
  setIsCurs(Cur);
  setIsBlink(Blin);

}
void ActioLCD::setIsOn(int On){
  if (On) lcd.display();
  else lcd.noDisplay();
  isOn = On;
}

void ActioLCD::setIsCurs(int Cur){
  if (Cur) lcd.cursor();
  else lcd.noCursor();
  isCurs = Cur;
}

void ActioLCD::setIsBlink(int Blin){
  if (Blin) lcd.blink();
  else lcd.noBlink();
  isBlink = Blin;
}
int ActioLCD::getIsOn(void){return isOn;}
int ActioLCD::getIsCur(void){return isCurs;}
int ActioLCD::getIsBlink(void){return isBlink;}

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
void ActioLCD::affMsg(const char* Msg){
  lcd.print(Msg);
}
void ActioLCD::init(void)
{
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.clear();
  setParam(1,0,0);
}
void ActioLCD::clear(){
  lcd.clear();
}
void ActioLCD::run(void)
{
  ;
}