// Omdat we dit getal willen onthouden moeten we een variabele maken
// die buiten de setup() en loop() functies vallen.
int aantal_stemmen_a = 0;
int aantal_stemmen_b = 0;

// We bepalen nu ook welke poorten we gebruiken voor welke knoppen.
// A3 en A5 zijn de twee connectoren het dichtsbij de USB poort.
int knop_a = A3;
int knop_b = A5;
  
void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);

  // Vertel de Marvin dat we willen lezen (=INPUT / (invoer)) van deze pins
  pinMode(knop_a, INPUT);
  pinMode(knop_b, INPUT);
}

void loop() {

  // Opdracht D; Een stemmachine met twee knoppen maken
  // ------------------------------
  
  // We lezen eerst de staat uit van beiden knoppen
  int knop_a_ingedrukt = digitalRead(knop_a);
  int knop_b_ingedrukt = digitalRead(knop_b);

  // Als knop A is ingedrukt, dan tellen we een stem op voor A
  if(knop_a_ingedrukt == HIGH) {
    aantal_stemmen_a++;
  }

  // Als knop B is ingedrukt, dan tellen we een stem op voor B
  if(knop_b_ingedrukt == HIGH) {
    aantal_stemmen_b++;
  }

  // En we printen alleen als een van beide knoppen is ingedrukt.
  if(knop_a_ingedrukt == HIGH || knop_b_ingedrukt == HIGH) {
    Serial.println("Aantal stemmen voor A: " + String(aantal_stemmen_a));
    Serial.println("Aantal stemmen voor B: " + String(aantal_stemmen_b));
    Serial.println("--------------------------------------");
  }

  // Nu een seconde wachten
  delay(100);
}
