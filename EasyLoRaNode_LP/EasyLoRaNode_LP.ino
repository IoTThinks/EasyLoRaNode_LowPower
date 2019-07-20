#include "EasyLoRaNode_LP.h"
#include "STM32LowPower.h"
  
void setup() {  
  Serial.begin(9600);
  Serial.println("Hello LSN50");    
  
  // Setup sensor
  setupSensor();

  // Setup LoRa
  setupLoRa();

  // Configure low power
  LowPower.begin();
}

void loop() {
  // Get sensor information 
  String sensorMessage = getSensorInfo();

  // Slow down a bit to let everything warm up?
  delay(1000);
  
  // Send to gateway
  sendLoRaMessage(sensorMessage);

  // Deep sleep   
  LowPower.deepSleep(10000);  
}
