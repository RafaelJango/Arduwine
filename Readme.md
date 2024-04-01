![Logo da Minha Empresa](https://imgur.com/a/AfTWMkm)

# Arduwine 1.0

A ArduWine é uma empresa de soluções tecnológicas para vinícolas, liderada por Rafael Jango, Rafael Bocchi, Arthur Amaral, Caue Garaude e Luiz Henrique. Com uma equipe dedicada, buscamos otimizar processos e garantir a excelência na produção de vinhos.


## Controle de LEDs e Som com Sensor LDR

Este é um projeto para Arduino que controla três LEDs com base na intensidade de luz captada por um sensor LDR (Light Dependent Resistor). O objetivo é monitorar a luz em uma vinícola para preservar os vinhos.

## Funcionalidades

- O primeiro LED é ligado quando a intensidade de luz é baixa (abaixo de 850).
- O segundo LED é ligado quando a intensidade de luz está entre 850 e 937, e um som é emitido.
- O terceiro LED é ligado quando a intensidade de luz é alta (acima de 937).

## Hardware Necessário

- Placa Arduino
- Sensor LDR (Light Dependent Resistor)
- Três LEDs
- Resistor (se necessário)
- Buzzer (se desejar emitir som)

## Montagem do Circuito

1. Conecte o sensor LDR ao pino analógico A0.
2. Conecte os LEDs aos pinos LED, LED2 e LED3.
3. Conecte o buzzer (se utilizado) ao pino 10.

## Instalação e Uso

1. Faça o upload do código para a placa Arduino.
2. Monitore a saída no monitor serial para visualizar a intensidade de luz lida pelo sensor LDR.
3. Observe os LEDs e o buzzer (se utilizado) responderem de acordo com a intensidade de luz.

## Contribuições

Contribuições são bem-vindas! Sinta-se à vontade para propor melhorias no código ou na documentação.
