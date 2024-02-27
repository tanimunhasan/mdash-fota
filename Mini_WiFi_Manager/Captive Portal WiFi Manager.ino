#include <FS.h>          
#include <WiFiManager.h>
#include <mDash.h> 
#define DEVICE_PASSWORD "iNVuZvv35bTD3hhuTspQ6A" //Copy device token ID from the dashboard and paste it here 
void setup() {
   
    Serial.begin(115200);
    WiFiManager wifiManager;
    wifiManager.autoConnect("ESPCONFIGAP");//wifiManager.autoConnect("Access point name","password")
    Serial.println("Connected to the configured WiFi");
}

void loop() {
    // put your main code here, to run repeatedly:
    
}
