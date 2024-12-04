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
#include "Melodies.h"


class Repertoire{
    public :

    std::map<String,float*> melody;
    std::map<String, int*> beats;
    std::map< String,int> tempo;

    Repertoire();
    //Repertoire(String name, map<String,float*> mel, map<String,int*> b, map<String,int> t);
    void Add(String mel_name, float* mel_notes, int* mel_beats, int mel_tempo);
    void init(void);
    int getsize(float *notes);
};

#endif