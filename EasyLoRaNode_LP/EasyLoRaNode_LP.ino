#include "EasyLoRaNode_LP.h"
  
void setup() {  
  Serial.begin(9600);
  Serial.println("Hello LSN50");  

  // Setup sensor
  setupSensor();

  // Setup LoRa
  setupLoRa();
}

void loop() {
  // Get sensor information 
  String sensorMessage = getSensorInfo();

  // Send to gateway
  sendLoRaMessage(sensorMessage);
  
  delay(1000);
}
