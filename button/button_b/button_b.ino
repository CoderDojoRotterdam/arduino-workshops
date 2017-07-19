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

  // Opdracht B; Laat de Marvin het aantal keer dat er op de knop is gedrukt, op het scherm printen.
  // ------------------------------

  // Eerst hebben we een variable nodig om het aantal in te bewaren
  
  // Met digitalRead lezen we een 1 (HIGH) of een 0 (LOW) van pin A3
  int val = digitalRead(A3);

  // Wanner de pin HIGH (1) is..
  if(val == HIGH) {

    // Als het knopje is ingedrukt, verhogen we aantal met 1
    aantal++;

    // Dan printen we het aantal naar de Serial Monitor
    Serial.println("Er is " + String(aantal) + " keer op de knop gedrukt");
  }

  // Zonder deze delay print de Marvin heel vaak. Probeer het maar :)
  delay(100);
}
