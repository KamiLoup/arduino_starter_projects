// initialisation
void setup() {
  // definition des variables
  #define LED_R 10
  #define LED_J 7
  #define LED_V 4

  // initialisation des led
  pinMode(LED_R, OUTPUT);
  pinMode(LED_J, OUTPUT);
  pinMode(LED_V, OUTPUT);

}

// boucle principale
void loop() { 
  // allumer led
  digitalWrite(LED_R, HIGH);
  // attendre 1 seconds (soit 1000 milisecondes)
  delay(1000);
  digitalWrite(LED_R, LOW);
  delay(1000);
  
  digitalWrite(LED_J, HIGH);
  delay(1000);
  digitalWrite(LED_J, LOW);
  delay(1000);
  
  digitalWrite(LED_V, HIGH);
  delay(1000);
  digitalWrite(LED_V, LOW);
  delay(1000);
}
