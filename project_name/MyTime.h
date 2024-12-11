/*********************************************************************
 * @file  MyTime.h
 * @author Raphaël Marques
 * @brief Fichier header de la classe MyTime
 *********************************************************************/
#ifndef MYTIME_H_
#define MYTIME_H_

//ATTENTION ce fichier n'est pas utilisé dans la version 1.0 de l'application !!!!
//Ce fichier a été récupéré d'un exmple Arduino


#include <ESP8266WiFi.h>
#include <WiFiUdp.h>

#ifndef STASSID
#define STASSID "your-ssid"
#define STAPSK "your-password"
#endif

class MyTime {
  char* ssid ;  // your network SSID (name)
  char* pass ;   // your network password
  unsigned int localPort;  // local port to listen for UDP packets
  /* Don't hardwire the IP address or we won't get the benefits of the pool.
      Lookup the IP address for the host name instead */
  // IPAddress timeServer(129, 6, 15, 28); // time.nist.gov NTP server
  IPAddress timeServerIP;  // time.nist.gov NTP server address
  const char* ntpServerName = "time.nist.gov";
  const int NTP_PACKET_SIZE = 48;  // NTP time stamp is in the first 48 bytes of the message

  byte *packetBuffer;  // buffer to hold incoming and outgoing packets

  // A UDP instance to let us send and receive packets over UDP
  WiFiUDP udp;
  protected :
  const unsigned long seventyYears = 2208988800UL;
  unsigned long epoch,secsSince1900;
  
  public : 
  MyTime();
  MyTime(int port, char* ssid, char* pass);
  ~MyTime();
  void init(void);
  void run(void);
  void sendNTPpacket(IPAddress& address);

};

#endif