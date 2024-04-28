
<div align="center">
<img src="https://github.com/RafaelJango/Arduwine/assets/122299872/ccd34a4d-199f-46aa-8819-8281ada2c19f" width="700px"/>
</div>


# Arduwine 2.0

A ArduWine é uma empresa de soluções tecnológicas para vinícolas, liderada por Rafael Jango, Rafael Bocchi, Arthur Amaral, Caue Garaude e Luiz Henrique. Com uma equipe dedicada, buscamos otimizar processos e garantir a excelência na produção de vinhos.


## Controle de LEDs e Som com Sensor LDR

Este é um projeto para Arduino que controla três LEDs com base na intensidade de luz captada por um sensor LDR (Light Dependent Resistor). O objetivo é monitorar a luz em uma vinícola para preservar os vinhos.

## Controle de Temperatura e Umidade

- Agora é possível monitorar a temperatura e umidade do local, fornecendo dados adicionais para o controle de qualidade dos vinhos.

## Funcionalidades

- O primeiro LED é ligado quando a intensidade de luz é baixa (abaixo de 850).
- O segundo LED é ligado quando a intensidade de luz está entre 850 e 937, e um som é emitido.
- O terceiro LED é ligado quando a intensidade de luz é alta (acima de 937).

## Hardware Necessário

- **Placa Arduino:** Utilizada como plataforma para o desenvolvimento e execução do código.
- **Display LCD com interface I2C:** Utilizado para exibir informações como temperatura, umidade e mensagens de alerta.
- **Sensor de Temperatura e Umidade (DHT22):** Conectado ao pino digital 2, este sensor é responsável por medir a temperatura e a umidade do ambiente.
- **Buzzer:** Conectado ao pino digital 13, é utilizado para emitir um alarme sonoro em caso de condições críticas de temperatura ou umidade.
- **LEDs:** Três LEDs estão sendo utilizados para indicar diferentes estados:
  - LED verde (pino 5): Indica condições normais.
  - LED amarelo (pino 4): Indica alerta moderado.
  - LED vermelho (pino 3): Indica condições críticas.
- **Sensor de Luminosidade (LDR):** Conectado ao pino analógico A0, é utilizado para monitorar a luminosidade do ambiente.

## Montagem do Circuito

1. Conecte o sensor LDR ao pino analógico A0.
2. Conecte o sensor de temperatura e umidade ao pino digital 2.
3. Conecte os LEDs aos pinos 3, 4 e 5.
4. Conecte o buzzer ao pino digital 13.
5. Conecte o display LCD à interface I2C.

## Instalação e Uso

1. Faça o upload do código para a placa Arduino.
2. Monitore a saída no monitor serial para visualizar a intensidade de luz lida pelo sensor LDR.
3. Observe os LEDs e o buzzer (se utilizado) responderem de acordo com a intensidade de luz.

## Foto do circuito (WOKWI)

<div align="center">
<img src="https://github.com/RafaelJango/Arduwine/assets/122299872/b80be050-6f59-42ae-81ec-6bef9b5a5793" width="700px"/>
</div>

## Contribuições

Contribuições são bem-vindas! Sinta-se à vontade para propor melhorias no código ou na documentação.
