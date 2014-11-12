/*
  Button
 
Accende e spenge un led e scrive sulla serial di debug lo stato del pulsante / led.
Scrive sulla seriale lo stato del pulsante.
 
VEDERE reference di Serial.print sul sito di arduino

NOTA: usare la funzione F() in println: Serial.println(F("Hello World!"));

http://arduino.cc/en/Reference/Serial

*/

// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin = 5;     // the number of the pushbutton pin
const int ledPin =  2;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // open the serial port at 9600 bps:
  Serial.begin(9600);
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
    Serial.println("Accendo il led");
  } 
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
    Serial.println("Spengo il led");
  }
}
