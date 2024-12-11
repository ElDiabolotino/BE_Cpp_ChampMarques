/*********************************************************************
 * @file  ActioBuzzer.cpp
 * @author Raphaël Marques
 * @brief Classe pour le driver ActioBuzzer
 *********************************************************************/
#include "ActioBuzzer.h"

//ATTENTION ce fichier n'est pas utilisé dans la version 1.0 de l'application !!!!

ActioBuzzer::ActioBuzzer()
{
  buzzerPin = 0; 
  melody = "ccggaagffeeddc ";  
  tempo = 300;
  Biping = 0;
  //change beats values in the .h
}

ActioBuzzer::ActioBuzzer(int Pin)
{
  buzzerPin = Pin; 
  melody = "ccggaagffeeddc ";  
  tempo = 300;
  Biping = 0;
  //change beats values in the .h
}

ActioBuzzer::~ActioBuzzer()
{
  ;
}  

void ActioBuzzer::init(void)
{
  pinMode(buzzerPin, OUTPUT);
  digitalWrite(buzzerPin, LOW);
}


void ActioBuzzer::run(void)
{
  playMelody (melody, beats, tempo);
}

void ActioBuzzer::toggleBip (void){
  digitalWrite(buzzerPin,(Biping)? LOW:HIGH);
}

void ActioBuzzer::playMelody (String melody, int *beats, int tempo){
  for(int i = 0; i < (melody.length()); i++) {
        if(melody[i] == ' ') {
            delay(beats[i] * tempo);
        } else {
            playNote(melody[i], beats[i] * tempo);
        }
        delay(tempo / 2);    /* delay between notes */
    }
}

void ActioBuzzer::playTone(int tone, int duration){
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(buzzerPin, HIGH);
    delayMicroseconds(tone);
    digitalWrite(buzzerPin, LOW);
    delayMicroseconds(tone);
  }
}

void ActioBuzzer::playNote(char note, int duration){
  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
  int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956 };
  
  // play the tone corresponding to the note name
  for (int i = 0; i < 8; i++) {
    if (names[i] == note) {
      playTone(tones[i], duration);
    }
  }
}