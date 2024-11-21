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
  int ColorR,ColorG,ColorB;
  public :
    /**
     * @fn ActioLCD();
     * @brief Constructeur par defaut
    */    
    ActioLCD();
    /**
     * @fn ActioLCD(int R,int G,int B);
     * @brief Constructeur avec les couleurs
    */    
    ActioLCD(int R,int G,int B);
    /**
     * @fn ActioLCD();
     * @brief Destructeur
    */    
    ~ActioLCD(); 
    /**
     * @fn virtual void setColors(int R, int G, int B)
     * @brief Fonction assesseur des couleurs du LCD
    */
    void setColors(int R,int G,int B);   
    
    void setTheTime(void);//*******************************************************/
    /**
     * @fn virtual void toggleOn(int On)
     * @brief Fonction d'allumage du LCD
    */
    void toggleOn(int On);
    /**
     * @fn virtual void toggleOn(int On)
     * @brief Fonction d'allumage du LCD
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