/*
Accende i led in modo consecutivo
 */
 

byte red = 2;
byte yellow = 3;
byte green = 4;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(red, OUTPUT);     
  pinMode(yellow, OUTPUT);     
  pinMode(green, OUTPUT);     
}

// the loop routine runs over and over again forever:
// trova il bug!!! il led verde non si spegne
void loop() {
  digitalWrite(red, HIGH);   
  delay(1000);               
  digitalWrite(red, LOW);    
  digitalWrite(yellow, HIGH);  
  delay(1000);               
  digitalWrite(yellow, LOW);    
  digitalWrite(green, HIGH);   
  delay(1000);               
  digitalWrite(green, LOW);   
}
