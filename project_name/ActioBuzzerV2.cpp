/*********************************************************************
 * @file  ActioBuzzerV2.cpp
 * @author Raphaël Marques
 * @brief Classe pour le driver ActioBuzzer
 *********************************************************************/

#include "ActioBuzzerV2.h"


ActioBuzzerV2::ActioBuzzerV2(uint8_t pin, uint8_t mode){
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
    int temp = tempo.at(melody_name);
    for(int i = 0; i < (getsize(melody.at(melody_name))); i++) {
        float note = melody.at(melody_name)[i];
        int beat = beats.at(melody_name)[i];
        if(note == ' ') {
            delay(beat * temp);
        } else {
            PlayNote(note, beat * temp);
        }
        delay(temp / 2);    /* delay between notes */
    }

}

void ActioBuzzerV2::PlayNote(float note, int dur){
    int duration = 1000*dur;
    tone(Pin, note, duration);
    int Pause = dur*10;
    delay(Pause);
        //digitalWrite(buzzerPin, HIGH);
    //delayMicroseconds(tone);
    //digitalWrite(buzzerPin, LOW);
    //delayMicroseconds(tone);
  }
}

