/*
  Button
 
Accende e spenge un led e scrive sulla serial di debug lo stato del pulsante / led 
 
ESERCIZIO: fare in modo che il pulsante resti acceso dopo la prima pressione e si 
spenga alla seconda (e cosi' via).

*/

// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin = 5;     // the number of the pushbutton pin
const int ledPin =  2;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);     
}

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {     
    // turn LED on:    
    digitalWrite(ledPin, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
  }
}
