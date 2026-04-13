//=========================================
// TESTE 3: Botão + Buzzer + LED
// Objetivo: Tocar nota ao pressionar botão
//=========================================

#define pinBotao 4
#define pinBuzzer 2
#define pinLED 3

void setupTeste3(){
  pinMode(pinBotao, INPUT);
  pinMode(pinBuzzer, OUTPUT);
  pinMode(pinLED, OUTPUT);

  delay(1000);
}

void loopTeste3(){
  byte estadoBotao = digitalRead(pinBotao);

  //se o botão pressionado
  if(estadoBotao == 1){
    tone(pinBuzzer, 523); // Toca DÓ
    digitalWrite(pinLED, HIGH); // LED acende
  }else{
    noTone(pinBuzzer);
    digitalWrite(pinLED, LOW); // LED apaga   
  }
}