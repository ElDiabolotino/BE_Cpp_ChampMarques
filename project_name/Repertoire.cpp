/*********************************************************************
 * @file  Repertoire.cpp
 * @author Julie Champagne
 * @brief Classe Repertoire de mélodies
 *********************************************************************/
#include "Repertoire.h"
#include "Melodies.h"

Repertoire::Repertoire(){
    melody 
}
Repertoire::void Add(String mel_name, float* mel_notes, int *mel_beats, int mel_tempo){
    melody[mel_name] = mel_notes;
    beats[mel_name] = mel_beats;
    tempo[mel_name] = mel_tempo;
}

Repertoire::void init(void){
    Add("Melodie 0", mel_n_0, mel_b_0,mel_t_0);

    
}

Repertoire::int getsize(float * notes){
    return sizeof(notes);
}