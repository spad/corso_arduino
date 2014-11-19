/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 2 has an LED connected on most Arduino boards.
// give it a name:
byte red = 2;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(red, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(red, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(red, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}
