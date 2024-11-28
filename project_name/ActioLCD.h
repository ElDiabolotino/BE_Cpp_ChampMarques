/*********************************************************************
 * @file  ActioLCD.h
 * @author Marques Raphaël
 * @brief Fichier header de la classe du driver ActioLCD
 *********************************************************************/
#ifndef MYLCD_H_
#define MYLCD_H_
#include "Actionneur.h"
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
    /**
     * @fn ActioLCD();
     * @brief Destructeur
    */    
    ~ActioLCD(); 
    void setParam(int On,int Cur, int Blin);
    /**
     * @fn virtual void setIsOn(int On)
     * @brief Assesseur du LCD
    */
    void setIsOn(int On);
    /**
     * @fn virtual void setIsCurs(int Cur)
     * @brief Assesseur du LCD
    */
    void setIsCurs(int Cur);
    /**
     * @fn virtual void setIsBlink(int Blin)
     * @brief Assesseur du LCD
    */
    void setIsBlink(int Blin);
    
    int getIsOn(void);
    int getIsCur(void);
    int getIsBlink(void);
    /**
     * @fn virtual void init(void)
     * @brief Fonction d'init du LCD
    */
    void init(void);
    
    void affChar(char c);
    /**
     * @fn virtual void affChar(char c, int Col, int Row)
     * @brief Fonction d'affichage d'un character
    */
    void affChar(char c,int Col, int Row);
    /**
     *
     *
    */
    void whereCur(int Col, int Row);
    /**
     * @fn virtual void affMsg(char *Msg)
     * @brief Fonction d'affichage d'un string
    */
    void affMsg(char *Msg);

    void run(void);

};

#endif