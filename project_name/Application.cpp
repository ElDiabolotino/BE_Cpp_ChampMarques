/*********************************************************************
 * @file  Application.cpp
 * @author "Raphaël Marques" Julie Champagne jfgkfd
 * @brief Fichier source de l'application
 *********************************************************************/

 #include "Application.h"
using namespace std;

Application::Application(int PinBuz,int PinTHu, int PinTou, int PinLum, int PinLed):Buzzer(PinBuz,OUTPUT,PinTou),TempHumid(PinTHu, 10),Toucher(PinTou),Lumiere(PinLum,20),Ecran(),led(PinLed),Horloge(){
  tempsMesure = 0;
  musics = 0;
}

void Application::init(){
  Ecran.init();

  Buzzer.init();

  TempHumid.init();

  Lumiere.init();

  Toucher.init();

  led.init();

  //Horloge.init();

}

void Application::run(){
  if (tempsMesure == 10){
    TempHumid.updateMesCapt();
    Toucher.updateMesCapt();
    tempsMesure = 0;
  }
  Lumiere.updateMesCapt();
  refreshScreen();
  Ecran.whereCur(0,1);
  if  ((TempHumid.seuilDetect(22.0,2))){
    Ecran.affMsg("Wake Up!");
    musics=1;
  }
  if (Lumiere.seuilDetect(50)){
    Ecran.affMsg("Noon!");
    musics=2;
  }
  else if  ((TempHumid.seuilDetect(50.0,1))){
    Ecran.affMsg("Raining");
    musics=3;
  }

  if (musics!=0){
    led.setLED();
    Buzzer.PlayMelody(musics); //User has to touch the sensor to stop the "Melody"

    led.resetLED();
    delay(20000);
    TempHumid.clear();
    Lumiere.clear();
    TempHumid.updateMesCapt();
    Lumiere.updateMesCapt();
    refreshScreen();
    musics = 0;
  }
  tempsMesure += 1;
  delay(200);
}

void Application::refreshScreen (void){
  Ecran.clear();
  Ecran.whereCur(0,0);
  Ecran.affMsg("Hum: ");
  Ecran.affMsg((to_string((int)TempHumid.getHumid()).c_str()));
  Ecran.affMsg("%,T: ");
  Ecran.affMsg((to_string((int)TempHumid.getTemp()).c_str()));
  Ecran.affMsg(" C");
}

