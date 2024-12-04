/*********************************************************************
 * @file  ActioBuzzerV2.h
 * @author Raphaël Marques
 * @brief Classe pour le driver ActioBuzzer
 *********************************************************************/

#ifndef MYBUZZERV2_H_
#define MYBUZZERV2_H_
#include "Actionneur.h"
#include "Repertoire.h"


class ActioBuzzerV2:public Actionneur, public Repertoire {
    uint8_t Pin;
    uint8_t Mode;

    public:
    ActioBuzzerV2();
    ActioBuzzerV2(uint8_t p, uint8_t m);
    ~ActioBuzzerV2();
    void init(void);
    void run(String Mel_name);
    void PlayMelody(String melody_name);
    void PlayNote(float note, int duration);
};
#endif