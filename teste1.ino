//====================================
// TESTE 1: Buzzer Básico
// Objetivo: Entender a função tone()
//====================================

#define pinBuzzer 2 //Pino onde o buzzer está conectado

void setupTeste1() {
  // Configurar o pino do buzzer como saída
  pinMode(pinBuzzer, OUTPUT);

  // Aguardar 1 segundo antes de começar 
  delay(1000);
}

void loopTeste1() {
  // Tocar a nota DÓ (523 Hz) por 500ms
  tone(pinBuzzer, 523);
  delay(500);

  //Parar o som por 500ms
  noTone(pinBuzzer);
  delay(500);
}