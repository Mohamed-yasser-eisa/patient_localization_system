
#include "cccode.h"
#include <ESP8266WiFi.h>
#include <FirebaseESP8266.h>
#include <FirebaseESP8266HTTPClient.h>
#include <FirebaseFS.h>
#include <FirebaseJson.h>


#define FIREBASE_HOST "espp-46ff7.firebaseio.com"
#define FIREBASE_AUTH "xQB8zgWnL4uaO8Dkt85PpyUexDOzY1laSRMRRlCY"
#define WIFI_SSID "SSS"
#define WIFI_PASSWORD "12345678"
FirebaseData firebaseData;
String RequiredNetworks[4]={"Note_FE","STUDBME2","CMP_LAB2","adel"};
double value[4] = {-90 , -90 ,-90 , -90};
Eloquent:: ML :: Port :: SVM model ;
void setup() {
  // Debug console
    Serial.begin(115200);
  
    // connect to wifi.
    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
    Serial.print("connecting");
  
    while (WiFi.status() != WL_CONNECTED)
    {
        Serial.print(".");
        delay(500);
    }
    Serial.println();
    Serial.print("connected: ");
    Serial.println(WiFi.localIP());
    
    Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
        
    // Enable auto reconnect the WiFi when connection lost
    Firebase.reconnectWiFi(true);

}

void loop() {
  // WiFi.scanNetworks will return the number of networks found
  int n = WiFi.scanNetworks();
  //Serial.println("Wifi scan ended");
  if (n == 0) {
    Serial.println("no networks found");
    Serial.println("-90");
  } 
  else {
   
      for(int i = 0; i < n; ++i)
      {
        if (WiFi.SSID(i)==RequiredNetworks[0])
        {
          //Serial.print(WiFi.SSID(i));// SSID
          Serial.print(WiFi.RSSI(i));
          value[0] = WiFi.RSSI(i);
        }
        if (WiFi.SSID(i)==RequiredNetworks[1])
        {
          //Serial.print(WiFi.SSID(i));// SSID
          Serial.print(WiFi.RSSI(i));
          value[1] = WiFi.RSSI(i);
        }
        if (WiFi.SSID(i)==RequiredNetworks[2])
        {
          //Serial.print(WiFi.SSID(i));// SSID
          Serial.print(WiFi.RSSI(i));
          value[2] = WiFi.RSSI(i);
        }
        if (WiFi.SSID(i)==RequiredNetworks[3])
        {
          //Serial.print(WiFi.SSID(i));// SSID
          Serial.print(WiFi.RSSI(i));
          value[3] = WiFi.RSSI(i);
        }
      }
      Serial.print(",");

      delay(500);
  if (Firebase.setInt(firebaseData, "/espp-46ff7", model.predict(value))) {
        // Success
        Serial.println("Set int data success");
        Serial.println(model.predict(value));
    } else {
        // Failed?, get the error reason from firebaseDate
        Serial.print("Error in setInt, ");
        Serial.println(firebaseData.errorReason());
    }   
  
    
  }
}
  //float x = model.predict(value);
/*
void classify() {
   Serial.println(model.predict(value));
    Firebase.setInt(firebaseData,"/X", model.predict(value));
}  */


/*
#include <ESP8266WiFi.h>
#include <FirebaseESP8266.h>
#include <FirebaseESP8266HTTPClient.h>
#include <FirebaseFS.h>
#include <FirebaseJson.h>

// Configure Firebase Variables
#define WIFI_SSID "SSS"
#define WIFI_PASSWORD "12345678"
#define FIREBASE_HOST "espp-46ff7.firebaseio.com"
#define FIREBASE_AUTH "xQB8zgWnL4uaO8Dkt85PpyUexDOzY1laSRMRRlCY"

// Declare the Firebase Data object in the global scope
FirebaseData firebaseData;
  
void setup()
{
    // Debug console
    Serial.begin(115200);
  
    // connect to wifi.
    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
    Serial.print("connecting");
  
    while (WiFi.status() != WL_CONNECTED)
    {
        Serial.print(".");
        delay(500);
    }
    Serial.println();
    Serial.print("connected: ");
    Serial.println(WiFi.localIP());
    
    Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
        
    // Enable auto reconnect the WiFi when connection lost
    Firebase.reconnectWiFi(true);
}


void loop()

{
 
    double Vout, Rth, temp, adc_value; 

  adc_value = analogRead(12);
  Vout = ((adc_value)/1024)*5;
    Serial.println();
    
    if (Firebase.setFloat(firebaseData, "/espp-46ff7", 6.5)) {
        // Success
        Serial.println("Set int data success");
        Serial.println(Vout);
    } else {
        // Failed?, get the error reason from firebaseDate
        Serial.print("Error in setInt, ");
        Serial.println(firebaseData.errorReason());
    }
  
    delay(200);
}*/
/*
int predict=model.predict(Values);
  Serial.println(Location[predict]) ;
Serial.println(X[predict]) ;
Serial.println(Y[predict]) ;

  
    
    if (Firebase.setFloat(firebaseData, "/Predict/X", X[predict])) {
        // Success
    } else {
        // Failed?, get the error reason from firebaseDate
        Serial.print("Error in setFloat, ");
        Serial.println(firebaseData.errorReason());
    }
    if (Firebase.setFloat(firebaseData, "/Predict/Y", Y[predict])) {
        // Success
    } else {
        // Failed?, get the error reason from firebaseDate
        Serial.print("Error in setFloat, ");
        Serial.println(firebaseData.errorReason());
    }*/
