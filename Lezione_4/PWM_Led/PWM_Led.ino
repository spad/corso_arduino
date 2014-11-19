/*
  Dimm
 
Illumina progressivamente (fadein) un led collegato ad una porta PWM alla pressione di un pulsante.
Il livello di luminosità è scritto sulla serial per il debug

ESERCIZIO: visualizzare cosa accade con l'overflow della variabile brightness e rimediare. 
ESERCIZIO: usare il secondo pulsante per spegnere progressivamente il led (fadeout)

*/

// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin = 3;     // the number of the pushbutton pin
const int ledPin =  6;      // the number of the LED pin

// variables will change:
byte buttonState = 0;         // variable for reading the pushbutton status
byte brightness = 0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT); 
  // init Serial
  Serial.begin(115200); 
}

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState==HIGH){
    analogWrite(ledPin,brightness);
    brightness = brightness +10;
    Serial.println(brightness);
  }
  delay(30);
}
