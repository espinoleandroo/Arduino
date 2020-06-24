#include "WiFi.h" // ESP32 WiFi include
 
void ConnectToWiFi()
{
 
  WiFi.mode(WIFI_STA);
  WiFi.begin("UbeeD22A", "DA0C88D22A");
  Serial.print("Connecting to "); Serial.println("UbeeD22A");
 
  uint8_t i = 0;
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print('.');
    delay(500);
 
    if ((++i % 16) == 0)
    {
      Serial.println(F(" still trying to connect"));
    }
  }
 
  Serial.print(F("Connected. My IP address is: "));
  Serial.println(WiFi.localIP());
}

void setup() 
{
  Serial.begin(9600);
 
  ConnectToWiFi();
}

void loop() {
  // put your main code here, to run repeatedly:

}
