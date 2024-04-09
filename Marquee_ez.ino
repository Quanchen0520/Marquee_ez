void setup() {
  for (int i = 22; i <= 37; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
}
void loop() {
  int k = 0;
  for (int i = 22; i <= 37; i++) {
    if (i >= 38) {
      digitalWrite(22 + k, HIGH);
      k++;
    }
    for (int j = 0; j < 1; j++) {
      digitalWrite(i + j, HIGH);
    }
    delay(100);
    digitalWrite(i, LOW);
  }
}