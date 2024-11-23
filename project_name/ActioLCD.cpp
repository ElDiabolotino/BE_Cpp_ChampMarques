/*********************************************************************
 * @file  ActioLCD.cpp
 * @author Raphaël Marques
 * @brief Classe pour le driver ActioLCD
 *********************************************************************/
#include "ActioLCD.h"
using namespace std;

ActioLCD::ActioLCD()
{
  lcd.clear();
  lcd.noDisplay();
  isOn = 0;
  isCurs = 0;
  isBlink = 0;
}
  
ActioLCD::ActioLCD(int On,int Cur, int Blin)
{
  lcd.clear();
  if (On){
    lcd.display();
    isOn = 1;
  } else {
    lcd.noDisplay();
    isOn = 0;
  }
  isCurs = Cur;
  isBlink = Blin;
}

ActioLCD::~ActioLCD()
{
  lcd.clear();
  lcd.noDisplay();
}  
void ActioLCD::setParam(int On,int Cur, int Blin){
  if (On) lcd.display();
  else lcd.noDisplay();
  if (Cur) lcd.cursor();

}
void ActioLCD::setIsOn(int On){
  if (On) lcd.display();
  else lcd.noDisplay();
  isOn = On;
}

void setIsCurs(int Cur){
  if (Cur) lcd.cursor();
  else lcd.noCursor();
  isCurs = Cur;
}

void setIsBlink(int Blin){
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
void ActioLCD::affMsg(char *Msg){
  lcd.print(Msg);
}
void ActioLCD::init(void)
{
  lcd.begin(16,2);
  set(1);
  lcd.print("Wake Up!!");
}

void ActioLCD::run(void)
{
  lcd.clear();
}