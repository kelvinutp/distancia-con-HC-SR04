void setup() {
  Serial.begin(9600);
  pinMode(38, OUTPUT);
  pinMode(40, INPUT);
}

void loop() {
  digitalWrite(38, HIGH);
  delayMicroseconds(10);
  digitalWrite(38, LOW);
  Serial.println(pulseIn(40, HIGH) * 0.034 / 2);
  delay(100);
}
