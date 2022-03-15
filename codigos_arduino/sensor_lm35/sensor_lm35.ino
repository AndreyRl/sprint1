#include "DHT.h"
#define dht_type DHT11 //define qual o tipo de sensor DHTxx que se está utilizando
 

/**
 * Configuração inicial sobre o sensore
 *  LM35
 */
 
  leitura_lm35 = analogRead(lm35_pin);
  temperatura = leitura_lm35 * (5.0/1023) * 100;
  Serial.print(temperatura);
  Serial.print(";");
