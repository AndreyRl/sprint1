const int lm35 = A0;
float temperatura;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int leitura = analogRead(lm35);
  temperatura = (5.0 / 1023) * leitura * 100;
  Serial.print ("Temperatura: ");
  Serial.println (temperatura);
  delay (2000);
}
