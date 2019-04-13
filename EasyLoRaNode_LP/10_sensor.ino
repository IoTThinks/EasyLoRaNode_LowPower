void setupSensor() {
  // Do nothing
}

String getSensorInfo() {
  float tempC = sht1x.readTemperatureC();
  float humidity = sht1x.readHumidity();
 
  String sensorMessage = "TempC=" + String(tempC) + " | Humidity=" + String(humidity);
  Serial.println("[Sensor] => " + sensorMessage);

  return sensorMessage;
}

