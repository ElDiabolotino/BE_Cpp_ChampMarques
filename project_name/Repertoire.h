/*********************************************************************
 * @file  Reêrtoire.cpp
 * @author Julie Champagne
 * @brief Classe Repertoire de mélodies
 *********************************************************************/

#ifndef CAPTOUCHER_H_
#define CAPTOUCHER_H_
#include "Arduino.h"
#include "string"
#include <map>
#include <iostream>
#include <vector>
#include <list>
#include <set>
using namespace std;

class Repertoire(){
    map<String,float*> melody;
    map<String, int*> beats;
    map< String,int> tempo;

    public :
    Repertoire();
    Repertoire(String mel, int * b, int t);
    void Add(String mel_name, String mel_notes, int* mel_beats, int mel_tempo);
    void init(void);
    int getsize(void);
};

#endif