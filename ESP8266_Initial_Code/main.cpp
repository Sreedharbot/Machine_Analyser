#include <Arduino.h>
#include <ArduinoJson.h>
#include <ESP8266HTTPClient.h>
#include <ESP8266WiFi.h>

#define SSID "hackerspace.sg"
#define PSD "0xta1l50up"

void setup() {

  Serial.begin(9600);
  WiFi.begin(SSID,PSD);

  while(WiFi.status() != WL_CONNECTED){
    delay(1000);
    Serial.println("Connecting to Wifi...");
  }
    Serial.println("Connected to Wifi");
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println(WiFi.localIP());
  const size_t capacity = JSON_OBJECT_SIZE(2) + 40;
  DynamicJsonDocument doc(capacity);

  doc["Message"] = "HelloWorld";
  doc["From"] = "ESP8266";

  String data;
  serializeJson(doc,data);

  WiFiClient client;
  HTTPClient http;
  http.begin(client,"http://10.13.37.128:3000/api");
  http.addHeader("Content-Type","application/json");
  int http_code = http.POST(data);

  if(http_code>0){
    Serial.println("Data_sent-successfully");
  }
  else{
    Serial.println("Error is Posting");
  }
  http.end();

  delay(2000);
   
}