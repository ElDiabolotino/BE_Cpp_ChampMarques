/*********************************************************************
 * @file  Repertoire.cpp
 * @author Julie Champagne
 * @brief Classe Repertoire de mélodies
 *********************************************************************/
#include "Repertoire.h"

//ATTENTION ce fichier n'est pas utilisé dans la version 1.0 de l'application !!!!


Repertoire::Repertoire(){
    melody["vide"] = {0} ;
    beats["vide"] = {0} ;
    tempo["vide"] = 0 ;
    //Melodie 0
    Mel_n_0[11] = (C_3, C_3, C_3, D_3, E_3, D_3, C_3, E_3,D_3, D_3,C_3);
    Mel_b_0[11] = (1,1,1,1,2,2,1,1,1,1,0);
    Mel_t_0 = 10;
    //Melodie 1   
    Mel_n_1[14] = (C_3, C_3, G_3, G_3, A_3, A_3, G_3, F_3, F_3, E_3, E_3, D_3, D_3, C_3);
    Mel_b_1[14] = (1,1,1,1,1,1,2,1,1,1,1,1,0);
    Mel_t_1 = 10;
}
void Repertoire::Add(String mel_name, float mel_notes[], int mel_beats[], int mel_tempo){
    melody[mel_name] = mel_notes;
    beats[mel_name] = mel_beats;
    tempo[mel_name] = mel_tempo;
}

void Repertoire::init(void){
    Add("Melodie 0", Mel_n_0, Mel_b_0, Mel_t_0);
    Add("Melodie 1", Mel_n_1, Mel_b_1, Mel_t_1);    
}

int Repertoire::getsize(float *notes)
{
    return sizeof(notes);
}
