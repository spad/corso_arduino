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
  if (on_off==true) {
    on_off = false;
  } else {
    on_off = true;
  }
  delay(1000);
}
