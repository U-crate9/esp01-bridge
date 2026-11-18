#include <ESP8266WiFi.h>

void setup() {
  Serial.begin(115200);
  delay(10);
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);
  WiFi.softAP("JAM-CTL", NULL, 1, 0, 4);
}

void loop() {
  delay(1000);
}
