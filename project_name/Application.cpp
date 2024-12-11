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
  led.toggleLED();
  if (tempsMesure == 10){
    TempHumid.updateMesCapt();
    Toucher.updateMesCapt();
    Ecran.clear();
    tempsMesure = 0;
  }
  Lumiere.updateMesCapt();
  Ecran.whereCur(0,0);
  Ecran.affMsg("Hum: ");
  Ecran.affMsg((to_string((int)TempHumid.getHumid()).c_str()));
  Ecran.affMsg("%,T: ");
  Ecran.affMsg((to_string((int)TempHumid.getTemp()).c_str()));
  Ecran.affMsg(" C");
  Ecran.whereCur(0,1);
  if  ((TempHumid.seuilDetect(40.0,1))){
    Ecran.affMsg("H Hum,");
    led.setLED();
    musics+=1;
  }

  if  ((TempHumid.seuilDetect(20.0,2))){
    Ecran.affMsg("H T°,");
    led.setLED();
    musics+=1;
  }

  if (Lumiere.seuilDetect(300)){
    Ecran.affMsg("H Lum");
    ECran.affMsg((to_string((int)TempHumid.getTemp()).c_str()));
    led.setLED();
    musics+=1;
  }
  if (musics!=0){
    if  (musics==1){
      Buzzer.PlayMelody();
    } else if (musics==2){
      Buzzer.PlayMelody();
    } else if (musics==3){
      Buzzer.PlayMelody();
    }
    delay(20000);
    led.resetLED();
    Toucher.updateMesCapt();
    if ((Toucher.getEtat()==HIGH) && musics){
      TempHumid.clear();
      Lumiere.clear();
    }
    musics = 0;
  }
  tempsMesure += 1;
  delay(100);
}



