//Mon nouveau projet (blink 1)

#define LED_R 10
#define LED_B 15
void setup() {
  pinMode(LED_R, OUTPUT);
}

void loop() {
  digitalWrite(LED_R, HIGH);
  delay(1000);
  digitalWrite(LED_R, LOW);
  delay(1000);
}
