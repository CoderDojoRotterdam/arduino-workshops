// Omdat we dit getal willen onthouden moeten we een variabele maken
// die buiten de setup() en loop() functies vallen.
int aantal;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);
  pinMode(A3, INPUT);

  // Hier zeggen we dat het aantal eerst 0 moet zijn.
  aantal = 0;
}

void loop() {

  // Opdracht C; Laat de Marvin nu het aantal seconden tellen dat de knop is ingedrukt.
  // ------------------------------

  // Eerst hebben we een variable nodig om het aantal in te bewaren
  
  // Met digitalRead lezen we een 1 (HIGH) of een 0 (LOW) van pin A3
  int val = digitalRead(A3);

  // Wanner de pin HIGH (1) is..
  if(val == HIGH) {

    // Als het knopje is ingedrukt, verhogen we aantal met 1
    aantal++;

    // Dan printen we het aantal seconden naar de Serial Monitor
    Serial.println("De knop is " + String(aantal) + " seconden ingedrukt.");
  } else {
    // Als de pin LOW is (knopje NIET ingedrukt), dan resetten we het aantal naar 0
    aantal = 0;
  }

  // EXTRA: Als we het knopje 5 seconden hebben ingedrukt..
  if(aantal >= 5) {
    // Reset dan het aantal weer naar 0
    aantal = 0;

    // En print de geheime message
    Serial.println("Yay! 5 seconden ingedrukt!");
  }

  // Nu een seconde wachten
  delay(1000);
}
