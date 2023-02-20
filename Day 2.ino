int Light = 12; // The HERO Board Pin that the LED is wired to
 
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(Light, OUTPUT);
  digitalWrite(Light, HIGH);
}


// the loop function runs over and over again forever
void loop() {
  //pinMode(Light, OUTPUT);
  delay(1000);
  digitalWrite(Light, LOW);
  delay(1000);
  digitalWrite(Light, HIGH);
 
}