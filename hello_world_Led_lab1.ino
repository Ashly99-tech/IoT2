
void setup() {
  pinMode(2, OUTPUT); // Configure pin 2 as an output
}

void loop() {
  digitalWrite(2, HIGH); // Turn LED ON
  delay(1000);           // Wait 1 second

  digitalWrite(2, LOW);  // Turn LED OFF
  delay(1000);           // Wait 1 second
}

