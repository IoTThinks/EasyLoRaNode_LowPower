#include "EasyLoRaNode_LP.h"
#include "STM32LowPower.h"
  
void setup() {  
  Serial.begin(9600);
  Serial.println("Hello LSN50");    

  // Configure low power
  LowPower.begin();
  
  // Setup sensor
  setupSensor();

  // Setup LoRa
  setupLoRa();  
}

void loop() { 
  // After sleep, doing some work
  Serial.println("Doing some work...");
  
  // Get sensor information 
  String sensorMessage = getSensorInfo();
 
  // Send to gateway
  sendLoRaMessage(sensorMessage);
 
  // Deep sleep       
  Serial.println("Going to sleep...");  
  //LoRa.sleep();
  //LowPower.sleep(10000);
  LowPower.deepSleep(10000);
  //LowPower.shutdown(10000);  
  //LoRa.idle();
}
