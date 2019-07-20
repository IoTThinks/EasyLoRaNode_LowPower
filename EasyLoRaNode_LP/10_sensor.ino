void setupSensor() {
  // Do nothing
}

String getSensorInfo() {
  float tempC = sht1x.readTemperatureC();
  float humidity = sht1x.readHumidity();
 
  String sensorMessage = "T:" + String(tempC) + " | H:" + String(humidity);
  Serial.println("[Sensor] => " + sensorMessage);

  return sensorMessage;
}

