/*
Lampeggio con controllo
 */
 

byte red = 2;
boolean on_off = true;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(red, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(red, on_off);  
  on_off = !on_off;
  delay(1000);
}
