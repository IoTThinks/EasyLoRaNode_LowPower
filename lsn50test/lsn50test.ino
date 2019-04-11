void setup() {
  Serial.begin(9600);
  pinMode(PA10, OUTPUT);
}

void loop() {
  Serial.println("Hello LSN50");
  digitalWrite(PA10, HIGH);
  Serial.println("On");
  delay(2000);
  digitalWrite(PA10, LOW);
  Serial.println("Off");
  delay(2000);
}
