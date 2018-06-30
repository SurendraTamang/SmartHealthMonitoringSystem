//It will help to connect the WiFi

#include <ESP8266WiFi.h>
void setup()
{
  String network-name="rajubhai";
  String password="12346789"
  Serial.begin(115200);
  Serial.println();

  WiFi.begin(network-name, password);

  Serial.print("Connecting");
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println();

  Serial.print("Connected, IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {}