void setup() {
  // put your setup code here, to run once:

  // Markeer pin A4 als output. Zo kunnen we 'digitalWrite' gebruiken
  // om de pin aan te sturen.
  pinMode(A3, OUTPUT);
}

void loop() {

  // Opdracht A; Laat de LED knipperen
  // ------------------------------

  // Met digitalWrite() schrijven we een 1 naar pin A3. Hierdoor gaat het ledje aan.
  digitalWrite(A3, HIGH);

  // We willen wel even zien dat het LEDje brandt. Wacht hiervoor 1 seconden (1000 mili seconden)
  delay(1000);

  // En door LOW (=0) naar pin A3 te schrijven, gaat het LEDje weer uit.
  digitalWrite(A3, LOW);
  
  // Ook hier willen we weer even wachten voordat we opnieuw beginnen.
  delay(1000);
}
