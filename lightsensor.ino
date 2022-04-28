int led = D7;  // The on-board LED

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  
  digitalWrite(led, HIGH);
  
  //Read value from analog pin A1
  int val = analogRead(A1);
  
  //convert int to string value.
  String data = String(val);
  
  //Publishes the data to thingspeak channel
  Particle.publish("luminosity", data, PRIVATE);
  delay(30000);               // Wait for 30 seconds

  digitalWrite(led, LOW);    // Turn OFF the LED
  delay(10000);               // Wait for 10 seconds
}