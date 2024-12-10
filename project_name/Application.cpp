/*********************************************************************
 * @file  Application.cpp
 * @author "Raphaël Marques" Julie Champagne jfgkfd
 * @brief Fichier source de l'application
 *********************************************************************/

 #include "Application.h"

Application::Application(int PinBuz,int PinTHu, int PinTou, int PinLum, int PinLed):Buzzer(PinBuz,OUTPUT),TempHumid(PinTHu, 10),Toucher(PinTou),Lumiere(PinLum,20),Ecran(),led(PinLed){

  
}

void Application::init(){
  Buzzer.init();

}

void Application::run(){
  Buzzer.run("Melodie 0");


}