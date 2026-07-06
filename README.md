# 🔌 Projetos Arduino

Coleção de sketches Arduino usados em aula para demonstrar conceitos básicos de entrada/saída digital: LEDs, botões, buzzer e semáforo.

## 📂 Sketches

| Arquivo | O que demonstra | Pinos |
|---|---|---|
| `projetosarduino.ino` | Sketch principal (`setup`/`loop`); chama as funções dos testes abaixo | - |
| `teste1.ino` | Buzzer básico com `tone()`/`noTone()` | Buzzer: 2 |
| `teste2.ino` | Leitura de botão controlando um LED | Botão: 4, LED: 3 |
| `teste3.ino` | Botão acionando LED + buzzer juntos | Botão: 4, Buzzer: 2, LED: 3 |
| `interruptor.ino` | Três variações de um interruptor (liga/desliga, toggle, com controle de estado) | Botão: 9, LED: 8 |
| `semaforo.ino` | Semáforo com dois conjuntos de LEDs (verde/amarelo/vermelho) sincronizados | Semáforo 1: 2, 3, 4 · Semáforo 2: 8, 9, 10 |

## ▶️ Como usar

Os arquivos `teste*.ino`, `interruptor.ino` e `semaforo.ino` definem funções (`setupX()`/`loopX()` ou nomeadas), não sketches completos por si só. Para rodar um deles:

1. Abra `projetosarduino.ino` na Arduino IDE.
2. Coloque o `.ino` do exercício desejado na mesma pasta do sketch (a IDE carrega todos os arquivos `.ino` da pasta juntos).
3. Ajuste o `setup()`/`loop()` de `projetosarduino.ino` para chamar as funções do exercício escolhido.
4. Faça a montagem física conforme os pinos indicados na tabela acima e faça o upload.

## 👨‍🏫 Autor

Prof. Me. Alexandre Gomes da Silva
