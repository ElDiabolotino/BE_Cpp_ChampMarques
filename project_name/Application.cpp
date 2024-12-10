/*********************************************************************
 * @file  Application.cpp
 * @author "Raphaël Marques" Julie Champagne jfgkfd
 * @brief Fichier source de l'application
 *********************************************************************/

 #include "Application.h"
using namespace std;

Application::Application(int PinBuz,int PinTHu, int PinTou, int PinLum, int PinLed):Buzzer(PinBuz,OUTPUT),TempHumid(PinTHu, 10),Toucher(PinTou),Lumiere(PinLum,20),Ecran(),led(PinLed),Horloge(){
  tempsMesure = 0;
  seuilMesTH[2]=(35.0,25.0);
  musics = 0;
}

void Application::init(){
  Buzzer.init();
  TempHumid.init();
  Lumiere.init();
  Toucher.init();
  Ecran.init();
  led.init();
  Horloge.init();
}

void Application::run(){
  
  
  if (tempsMesure == 5){
    TempHumid.updateMesCapt();
    Lumiere.updateMesCapt();
    Toucher.updateMesCapt();
    tempsMesure = 0;
  } else {
    Toucher.updateMesCapt();
    if (Toucher.getEtat()){
      Ecran.affMsg("Mel 0 playing");
      Buzzer.run("Melodie 0");
      Ecran.clear();
    }
    Lumiere.updateMesCapt();
    Ecran.clear();
    Ecran.whereCur(0,0);
    Ecran.affMsg("Hum: ");
    Ecran.affMsg((to_string((int)TempHumid.getHumid()).c_str()));
    Ecran.affMsg(",T: ");
    Ecran.affMsg((to_string((int)TempHumid.getTemp()).c_str()));
    Ecran.whereCur(0,1);
    if  ((TempHumid.seuilDetect(seuilMesTH))[0]){
      Ecran.affMsg("H Hum,");
      musics+=1;
    }
    if  ((TempHumid.seuilDetect(seuilMesTH))[1]){
      Ecran.affMsg("H T°,");
      musics+=1;
    }
    if (Lumiere.seuilDetect(300)){
      Ecran.affMsg("H Lum");
      musics+=1;
    }
    if  (musics==1){
      Buzzer.run("Melodie 1");
    } else if (musics==2){
      Buzzer.run("Melodie 1");
    } else if (musics==3){
      Buzzer.run("Melodie 1");
    }
    musics = 0;
    tempsMesure += 1;
  }
}



