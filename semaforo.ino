//Declaração de Variaveis
#define pinoLedVerdeUm 4
#define pinoLedAmareloUm 3
#define pinoLedVermelhoUm 2
#define pinoLedVerdeDois 10
#define pinoLedAmareloDois 9
#define pinoLedVermelhoDois 8


void setupSemaforo(){ 
  pinMode(pinoLedVerdeUm, OUTPUT);
  pinMode(pinoLedAmareloUm, OUTPUT);
  pinMode(pinoLedVermelhoUm, OUTPUT);
  pinMode(pinoLedVerdeDois, OUTPUT);
  pinMode(pinoLedAmareloDois, OUTPUT);
  pinMode(pinoLedVermelhoDois, OUTPUT);
}

void semaforo(){
  // VERMELHO 2 E VERDE 1
  digitalWrite(pinoLedAmareloDois, LOW); 
  digitalWrite(pinoLedVermelhoDois, HIGH); // Vermelho 2
  digitalWrite(pinoLedVermelhoUm, LOW);
  digitalWrite(pinoLedVerdeUm, HIGH); // Verde 1
  delay(3000);

  // AMARELO 1
  digitalWrite(pinoLedVerdeUm, LOW);
  digitalWrite(pinoLedAmareloUm, HIGH); // Amarelo 1
  delay(2000); // Soma com o tempo anterior para trocar o 2 (3s + 2s = 5s)
  
  // VERDE 2 E VERMELHO 1
  digitalWrite(pinoLedVermelhoDois, LOW); 
  digitalWrite(pinoLedVerdeDois, HIGH); // Verde 2
  digitalWrite(pinoLedAmareloUm, LOW); 
  digitalWrite(pinoLedVermelhoUm, HIGH); // Vermelho 1
  delay(3000);

  // AMARELO 2
  digitalWrite(pinoLedVerdeDois, LOW);
  digitalWrite(pinoLedAmareloDois, HIGH); // Amarelo 2
  delay(2000);// Soma com o tempo anterior para trocar o 1 (3s + 2s = 5s)
}