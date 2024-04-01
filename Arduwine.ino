// Este código é um programa para Arduino que controla três LEDs com base na intensidade de luz captada por um sensor LDR (Light Dependent Resistor).
// O projeto visa monitorar a luz em uma vinícola para preservar os vinhos.

// Definição das variáveis para os pinos dos LEDs.
int LED = 13; 
int LED2 = 12; 
int LED3 = 8;

// Declaração do protótipo da função tom.
void tom(char pino, int frequencia, int duracao, bool on);

void setup () {
  // Inicialização da comunicação serial.
  Serial.begin(9600); 
  // Configuração dos pinos dos LEDs como saídas.
  pinMode(LED, OUTPUT);
  pinMode(10, OUTPUT); // O segundo LED é controlado pelo pino 10.
}

void loop(){
  int tempo = 600;
  // Leitura do valor do sensor LDR.
  int LDR = analogRead(A0);
  // Impressão do valor lido no monitor serial.
  Serial.println(LDR);

  // Condições são verificadas com base no valor lido do sensor LDR para controlar os LEDs:
  // Se a leitura estiver abaixo de 850, o primeiro LED é aceso.
  if (LDR <= 850) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }

  // Se a leitura estiver entre 850 e 937, o segundo LED é aceso e um som é emitido usando a função tom.
  if (LDR > 850 && LDR <= 937) {
    digitalWrite(LED2, HIGH);
    tom(10, 262, 3000, true); // Emitir som com frequência de 262Hz por 3000ms.
  } else {
    // Caso contrário, o som é desligado.
    tom(10, 262, 0, false);
    digitalWrite(LED2, LOW);
  }

  // Se a leitura estiver acima de 937, o terceiro LED é aceso.
  if (LDR > 937) {
    digitalWrite(LED3, HIGH);
  } else {
    digitalWrite(LED3, LOW);
  }

  // Aguarda 500 milissegundos antes de continuar.
  delay(500);
}

// Função para gerar um som em um determinado pino com uma certa frequência e duração, se a variável on for verdadeira.
void tom(char pino, int frequencia, int duracao, bool on){
  if (!on) {
    // Desliga o pino se a variável on for falsa.
    digitalWrite(pino, LOW);
  } else {
    // Calcula o período com base na frequência.
    float periodo = 1000.0 / frequencia;
    // Gera o som por meio da modulação de largura de pulso (PWM).
    for (int i = 0; i < duracao / periodo; i++){ 
      digitalWrite(pino, HIGH);
      delayMicroseconds(periodo * 500);
      digitalWrite(pino, LOW);
      delayMicroseconds(periodo * 500);
    }
  }
}
