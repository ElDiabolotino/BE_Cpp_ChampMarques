/*********************************************************************
 * @file  ActioBuzzerV2.h
 * @author Raphaël Marques
 * @brief Classe pour le driver ActioBuzzer
 *********************************************************************/

#ifndef MYBUZZERV2_H_
#define MYBUZZERV2_H_
#include "Actionneur.h"
#include "Repertoire.h"
#include "CapToucher.h"


class ActioBuzzerV2:public Actionneur, public Repertoire,public CapToucher {
    uint8_t Pin;
    uint8_t Mode;

    public:
    //Constructeur par défaut
    ActioBuzzerV2();
    //Constructeur incluant la broche du buzzer, son mode (OUTPUT) et la broche du capteur tactile
    ActioBuzzerV2(uint8_t pin, uint8_t mode, int PinTouch);

    ~ActioBuzzerV2();
    //éteint le buzzer et initialise le capteur tactile (associé pour arrêter les boucles d'alarme)
    void init(void);
    //Pas utilisé car utilise la fonction dépréciée PlayMélodie(String melody_name)
    void run(String Mel_name);
    //Fonction utilisée pour jouer les 3 alarmes disponibles.
    //Des essais non concluants ont été effectués pour changer la sonorité des alarmes
    void PlayMelody(int a);
    //Pas utilisée puisque non fonctionnelle
    void PlayMelody(String melody_name);
    //Pas utilisée puisque non fonctionnelle
    void PlayNote(float note, int duration);
};
#endif