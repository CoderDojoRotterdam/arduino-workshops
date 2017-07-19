void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);
  
  // Markeer pin A4 als input.
  pinMode(A3, INPUT);
}


void loop() {

  // lees de waarde van de temperatuur sensor
  int temp = analogRead(A3);

  // de waarde van temp is ertens tussen 0 en 1024, om dit globaal om te rekenen
  // naar celcius kun je delen door 21. Wil je preciezer zijn: 
  // http://wiki.seeed.cc/Grove-Temperature_Sensor_V1.2/
  float celcius = temp / 21.0;

  // print de temperatuur op het scherm
  Serial.println("temperature = " + String(celcius));

  // en wacht eventjes
  delay(100);
}
