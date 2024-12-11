/*********************************************************************
 * @file  MyTime.cpp
 * @author Raphaël Marques
 * @brief Classe pour le driver MyTime
 *********************************************************************/
#include "MyTime.h"

//ATTENTION ce fichier n'est pas utilisé dans la version 1.0 de l'application !!!!
//Ce fichier a été récupéré d'un exmple Arduino

MyTime::MyTime(){
  packetBuffer = new byte[NTP_PACKET_SIZE];
  localPort = 2390;
}

MyTime::MyTime(int port, char* ssid, char* pass){
  packetBuffer = new byte[NTP_PACKET_SIZE];
  localPort = 2390;
  this->ssid = ssid;
  this->pass = pass;
}

MyTime::~MyTime(){;}

void MyTime::init(void){
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }
  udp.begin(localPort);
}


void MyTime::run(void){
// get a random server from the pool
  WiFi.hostByName(ntpServerName, timeServerIP);
  sendNTPpacket(timeServerIP);  // send an NTP packet to a time server
  // wait to see if a reply is available
  delay(1000);
  int cb = udp.parsePacket();
  if (cb) {
    // We've received a packet, read the data from it
    udp.read(packetBuffer, NTP_PACKET_SIZE);  // read the packet into the buffe
    unsigned long highWord = word(packetBuffer[40], packetBuffer[41]);
    unsigned long lowWord = word(packetBuffer[42], packetBuffer[43]);
    // combine the four bytes (two words) into a long integer
    // this is NTP time (seconds since Jan 1 1900):
    secsSince1900 = highWord << 16 | lowWord;
    // Unix time starts on Jan 1 1970. In seconds, that's 2208988800:
    // subtract seventy years:
    epoch = secsSince1900 - seventyYears;
  }
}

// send an NTP request to the time server at the given address
void MyTime::sendNTPpacket(IPAddress& address) {
  // set all bytes in the buffer to 0
  memset(packetBuffer, 0, NTP_PACKET_SIZE);
  // Initialize values needed to form NTP request
  // (see URL above for details on the packets)
  packetBuffer[0] = 0b11100011;  // LI, Version, Mode
  packetBuffer[1] = 0;           // Stratum, or type of clock
  packetBuffer[2] = 6;           // Polling Interval
  packetBuffer[3] = 0xEC;        // Peer Clock Precision
  // 8 bytes of zero for Root Delay & Root Dispersion
  packetBuffer[12] = 49;
  packetBuffer[13] = 0x4E;
  packetBuffer[14] = 49;
  packetBuffer[15] = 52;

  // all NTP fields have been given values, now
  // you can send a packet requesting a timestamp:
  udp.beginPacket(address, 123);  // NTP requests are to port 123
  udp.write(packetBuffer, NTP_PACKET_SIZE);
  udp.endPacket();
}

