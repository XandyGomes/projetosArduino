//========================================
// TESTE 2: Botão + LED
// Objetivo: Ler entrada e controlar saída
//========================================

#define pinBotao 4
#define pinLED 3

void setupTeste2(){
  pinMode(pinBotao, INPUT);
  pinMode(pinLED, OUTPUT);

  delay(1000);
}

void loopTeste2(){
  //Ler o estado do botão
  byte estadoBotao = digitalRead(pinBotao);

  //Se botão pressionado (HIGH = 1)
  if(estadoBotao == 1){
    digitalWrite(pinLED, HIGH); // LED acende 
  } else{
    digitalWrite(pinLED, LOW); // LED apaga
  }
}