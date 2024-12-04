/*********************************************************************
 * @file  Repertoire.cpp
 * @author Julie Champagne
 * @brief Classe Repertoire de mélodies
 *********************************************************************/
#include "Repertoire.h"



Repertoire::Repertoire(){
    melody["vide"] = {0} ;
    beats["vide"] = {0} ;
    tempo["vide"] = 0 ;
}
void Repertoire::Add(String mel_name, float* mel_notes, int *mel_beats, int mel_tempo){
    melody[mel_name] = mel_notes;
    beats[mel_name] = mel_beats;
    tempo[mel_name] = mel_tempo;
}

void Repertoire::init(void){
    Add("Melodie 0", Mel_n_0, Mel_b_0, Mel_t_0);
    Add("Melodie 1", Mel_n_1, Mel_b_1, Mel_t_0);    
}

int Repertoire::getsize(float *notes)
{
    return sizeof(notes);
}
