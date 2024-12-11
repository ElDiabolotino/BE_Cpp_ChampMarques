/*********************************************************************
 * @file  ActioBuzzerV2.cpp
 * @author Raphaël Marques
 * @brief Classe pour le driver ActioBuzzer
 *********************************************************************/

#include "ActioBuzzerV2.h"

ActioBuzzerV2::ActioBuzzerV2(uint8_t pin, uint8_t mode,int PinTouch):CapToucher(PinTouch){

    Pin = pin;
    Mode = mode;
}

ActioBuzzerV2::~ActioBuzzerV2(){}

void ActioBuzzerV2::init(){
    pinMode(Pin,Mode);
    digitalWrite(Pin,LOW);
    Repertoire::init();
    CapToucher::init();
}

void ActioBuzzerV2::run(String melody_name){
    PlayMelody(melody_name);
}
void ActioBuzzerV2::PlayMelody(int a){
  int i = 0;
  while (i<1000){
  updateMesCapt();
  if (getEtat()==HIGH){
    break;
  }
  if (a==1){
    digitalWrite(Pin, HIGH);
    delay(50);
    digitalWrite(Pin, LOW);
    delay(50);
  } else if (a == 2){
    digitalWrite(Pin, HIGH);
    delay(500);
    digitalWrite(Pin,LOW);
    delay(100);
  } else if (a == 3){
    digitalWrite(Pin,HIGH);
    delay(50);
    digitalWrite(Pin,LOW);
    delay(500);
  }
  i++;
  }
}
void ActioBuzzerV2::PlayMelody(String melody_name){
    int temp = tempo[melody_name];
    for(int i = 0; i < (getsize(melody[melody_name])); i++) {
      updateMesCapt();
        if (getEtat()==HIGH){
          break;
        }
        float note = melody[melody_name][i];
        int beat = beats[melody_name][i];
        if(note == ' ') {
            delay(beat * temp);
        } else {
            PlayNote(note, beat * temp);
        }
        delay(temp / 2);    // delay between notes 
    }
  /*int tuneSize = sizeof(melody[melody_name]) / sizeof(float);
  // iterate over the notes of the tune:
  for (int thisNote = 0; thisNote < tuneSize; thisNote++) {

    // For details on calculating the note duration using the tempo and the note type,
    // see
    // A quarter note at 60 BPM lasts exactly one second and at 120 BPM - half a second.
    
    int noteDuration = (int)((1000 * (60 * 4 / tempo[melody_name])) / beats[melody_name][thisNote] + 0.);
    tone(Pin, melody[melody_name][thisNote],noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 20% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.20;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(Pin);
  }*/
}

void ActioBuzzerV2::PlayNote(float note, int dur){
    int duration = 1000*dur;
    tone(Pin, note, duration);
    int Pause = dur*10;
    noTone(Pin);
    delay(Pause);
    //digitalWrite(buzzerPin, HIGH);
    //delayMicroseconds(tone);
    //digitalWrite(buzzerPin, LOW);
    //delayMicroseconds(tone);
}