/*********************************************************************
 * @file  ActioBuzzerV2.cpp
 * @author Raphaël Marques
 * @brief Classe pour le driver ActioBuzzer
 *********************************************************************/

#include "ActioBuzzerV2.h"
#include "Repertoire.h"

ActioBuzzerV2::ActioBuzzeV2(uint8_t pin, uint8_t mode){
    Pin = pin;
    Mode = mode;
}

ActioBuzzerV2::~ActioBuzzerV2(){}

void ActioBuzzerV2::init(){
    pinMode(Pin,Mode);
    digitalWrite(Pin,LOW);
}

void ActioBuzzerV2::run(String melody_name){
    PlayMelody(melody_name);
}

void ActioBuzzerV2::PlayMelody(String melody_name){
    int temp = tempo[melody];
    for(int i = 0; i < (getsize(melody[melody_name])); i++) {
        float note = melody[melody_name][i];
        int beat = beats[melody_name][i];
        if(note == ' ') {
            delay(beat * temp);
        } else {
            playNote(note, beat * temp);
        }
        delay(temp / 2);    /* delay between notes */
    }

}

void ActioBuzzerV2::PlayNote(float note, int duration){
    for (long i = 0; i < duration * 1000L; i += tone * 2) {
        tone(Pin, note, duration);
        //digitalWrite(buzzerPin, HIGH);
    //delayMicroseconds(tone);
    //digitalWrite(buzzerPin, LOW);
    //delayMicroseconds(tone);
  }
}

