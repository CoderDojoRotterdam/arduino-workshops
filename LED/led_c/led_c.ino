// We willen buiten setup() en loop() de status van de LED bewaren.
// hier maken we dus een variabele voor aan :)
int led = LOW;

void setup() {
  // put your setup code here, to run once:

  // Markeer pin A4 als output. Zo kunnen we 'digitalWrite' gebruiken
  // om de pin aan te sturen.
  pinMode(A3, OUTPUT);

  // En markeer pin A5 als input, zo kunnen we luisteren naar het knopje.
  pinMode(A5, INPUT);
}

void loop() {

  // Opdracht C; Zet LED aan en uit door op een knop te drukken
  // ------------------------------

  // Als het knopje wordt ingedrukt..
  if(digitalRead(A5) == HIGH) {

    // En de LED staat op dit moment aan..
    if(led == LOW) {
      
      // Dan zetten we 'm uit.
      led = HIGH;
      
    } else {

      // Anders stond hij dus aan, en zetten we 'm nu uit
      led = LOW;
    }
  }

  // Hierboven hebben we bepaald wat het ledje zou moeten doen.
  // hier schrijven we dan ook daadwerkelijk deze status naar pin A3
  digitalWrite(A3, led);

  // En om het niet te snel te laten gaan, wachten we even 200 ms.
  delay(200);

}
