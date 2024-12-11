/*********************************************************************
 * @file  ActioLCD.h
 * @author Marques Raphaël
 * @brief Fichier header de la classe du driver ActioLCD
 *********************************************************************/
#ifndef MYLCD_H_
#define MYLCD_H_
#include "Actionneur.h"
#include "Arduino.h"
#include "rgb_lcd.h"

/**
  * @class ActioLCD
  * @brief Classe ActioLCD 
*/    
class ActioLCD : public Actionneur
{
  rgb_lcd lcd;
  int isOn,isCurs,isBlink;
  public :
    /**
     * @fn ActioLCD();
     * @brief Constructeur par defaut
    */    
    ActioLCD();
    /**
     * @fn ActioLCD(int On,int Cur, int Blin);
     * @brief Constructeur avec le curseur, l'allumage et le stroboscope
    */    
    ActioLCD(int On,int Cur, int Blin);

    void setParam(int On,int Cur, int Blin);
    /**
     * @fn void setIsOn(int On)
     * @brief Assesseur du LCD
    */
    void setIsOn(int On);
    /**
     * @fn void setIsCurs(int Cur)
     * @brief Assesseur du LCD
    */
    void setIsCurs(int Cur);
    /**
     * @fn void setIsBlink(int Blin)
     * @brief Assesseur du LCD
    */
    void setIsBlink(int Blin);
    /**
     * @fn void setIsBlink(int Blin)
     * @brief Assesseur du LCD
    */
    int getIsOn(void);
    /**
     * @fn void setIsBlink(int Blin)
     * @brief Assesseur du LCD
    */
    int getIsCur(void);
    /**
     * @fn void setIsBlink(int Blin)
     * @brief Assesseur du LCD
    */
    int getIsBlink(void);
    /**
     * @fn void init(void)
     * @brief Fonction d'initialisation du LCD
    */
    void init(void);
    /**
     * @fn void affChar(char c)
     * @brief Fonction d'affichage d'un character
    */
    void affChar(char c);
    /**
     * @fn void affChar(char c, int Col, int Row)
     * @brief Fonction d'affichage d'un character à une position donnée
    */
    void affChar(char c,int Col, int Row);
    /**
     * @fn void whereCur(int Col, int Row)
     * @brief Fonction de positionnement du curseur
    */
    void whereCur(int Col, int Row);
    /**
     * @fn void affMsg(const char *Msg)
     * @brief Fonction d'affichage d'un string
    */
    void affMsg(const char* Msg);
    /**
     * @fn void run(void)
     * @brief Fonction d'affichage (run) du LCD
    */
    void run(void);
    /**
     * @fn void clear(void)
     * @brief Fonction d'effaçage du LCD
    */
    void clear(void);
};

#endif