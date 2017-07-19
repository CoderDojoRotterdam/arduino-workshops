void setup() {
  // put your setup code here, to run once:

  // Markeer pin A4 als output. Zo kunnen we 'digitalWrite' gebruiken
  // om de pin aan te sturen.
  pinMode(A3, OUTPUT);
}

void loop() {

  // Opdracht B; Laat de LED jouw naam in MORSE knipperen
  // http://2.bp.blogspot.com/-slNaPgHmnns/UvZ0SksXIeI/AAAAAAAAABc/c3umJF0d7jE/s1600/morsecodeletters.jpg
  // ------------------------------

  // In bovenstaand schema is - (een streepje) gelijk aan lang.
  // een . (puntje) is gelijk aan kort. Door deze te combineren kun je het morse alfabet maken.
  // tussen elke letter wel even een seconde wachten, anders gaat het natuurlijk veel te snel achter elkaar ;)

  // T
  lang();
  delay(1000);

  // I
  kort();
  kort();
  delay(1000);

  // E
  kort();
  delay(1000);
  
  // M
  lang();
  lang();
  delay(1000);
  
  // E
  kort();
  delay(1000);
  
  // N
  lang();
  kort();

  // En nu een wat langere pauze om te kunnen zien wanneer Marvin weer opnieuw begint.
  delay(5000);
}

// Om het eenvoudiger te maken, delen we het op in losse functies.
void lang() {
  // De functie lang() laat het ledje branden, wacht 1 seconde en zet 'm weer uit.
  digitalWrite(A3, HIGH);
  delay(1200);
  digitalWrite(A3, LOW);

  // vervolgens nog een halve seconde wachten voordat we verder gaan
  delay(500);
}

void kort() {
  // De functie kort() laat het ledje branden, wacht een halve seconde en zet 'm weer uit.
  digitalWrite(A3, HIGH);
  delay(300);
  digitalWrite(A3, LOW);

  // vervolgens nog een halve seconde wachten voordat we verder gaan
  delay(500);
}

