void setup() {
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  randomSeed(A0);
}

void loop() {
  tone(6, 1);
  noTone(1000);
  delay(3000);
  tone(7, 4);
  noTone(1000);
}
