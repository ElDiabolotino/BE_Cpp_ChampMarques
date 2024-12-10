/*********************************************************************
 * @file  Reêrtoire.cpp
 * @author Julie Champagne
 * @brief Classe Repertoire de mélodies
 *********************************************************************/
#ifndef REPERTOIRE_H_
#define REPERTOIRE_H_

#include <map>
#include "Arduino.h"
//#include "string" String.h
//#include "Melodies.h"

#define C_3 261.63
#define Cd_3 277.18
#define D_3 293.66
#define Dd_3 311.13
#define E_3 329.63
#define F_3 349.23
#define Fd_3 369.99
#define G_3 392.00
#define Gd_3 415.30
#define A_3 440.00
#define Ad_3 466.16
#define B_3 493.88
#define rest 0 


class Repertoire{
    protected:
    //Base Melodies
    //Melodie 0
    float Mel_n_0[11];
    int Mel_b_0[11];
    int Mel_t_0;

    //Melodie 1   
    float Mel_n_1[14];
    int Mel_b_1[14];
    int Mel_t_1;

    std::map<String,float*> melody;
    std::map<String, int*> beats;
    std::map< String,int> tempo;
    public :
    Repertoire();
    //Repertoire(String name, map<String,float*> mel, map<String,int*> b, map<String,int> t);
    void Add(String mel_name, float mel_notes[], int mel_beats[], int mel_tempo);
    void init(void);
    int getsize(float *notes);
};

#endif