//Constantes para os pinos dos componentes
#define pinoPushButton 9
#define pinoLed 8

//Varivael para apoiar o estado do led
bool estadoLed = false;

void setupInterruptor(){
  pinMode(pinoPushButton, INPUT);
  pinMode(pinoLed, OUTPUT);
}

void interruptor(){
  //Se a leitura do botão for on, liga o led
  if (digitalRead(pinoPushButton)){
    digitalWrite(pinoLed, 1); // HIGH == 1, LOW == 0
    delay(500); //Efeito bouncing
  }
  //Se a leitura não for 1, só pode ser 0
  else{
    digitalWrite(pinoLed, 0); // HIGH == 1, LOW == 0
    delay(500); //Efeito bouncing
  }
}

// Segunda opção de interruptor
void interruptor2(){
  digitalWrite(pinoLed, digitalRead(pinoPushButton));
  delay(500);
}


void interruptorEstado(){
  //Mesmo efeito do == 1
  if (digitalRead(pinoPushButton)){
    if (estadoLed == false){
      //É necessario ligar o led
      digitalWrite(pinoLed, 1);
      estadoLed = true;
    }
    else{
      //É necessario desligar o led
      digitalWrite(pinoLed, 0);
      estadoLed = false;
    }
  delay(500);
  }
}