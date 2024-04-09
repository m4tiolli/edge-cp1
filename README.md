
# Sistema de Monitoramento de Luminosidade

Sistema de monitoramento de luminosidade de vinhos para a Vinheria Agnello, que opera como loja física e que está demandando o desenvolvimento de um portal de e-commerce, para começar a vender também na internet, mas com uma exigência básica: que a loja virtual consiga criar uma experiência do usuário similar à do atendimento presencial em sua loja física. Projeto realizado para monitorar o ambiente em que os vinhos ficam armazenados, realizado como Checkpoint 1 para a matéria de Edge Computing, lecionada pelo professor Lucas Demetrius.

## Link do projeto no tinkercad
https://www.tinkercad.com/things/8wEWBZN2uqL-sensor-de-luz

## Como reproduzir

Com o projeto do tinkercad aberto, inicie a simulação, clique no fotorresistor (LDR) para alterar a exposição a luminosidade, aumentando a barra de controle de luz o buzzer começará a tocar, e os leds ligarão. Alterando o nível da luz, o buzzer provavelmente será ativo em um volume elevado, então cuidado. 

## Autores

- [Gabriel Matiolli](https://www.github.com/m4tiolli)
- [Gustavo Berlanga](https://www.github.com/berla1)
- [Leonardo Taschin](https://www.github.com/LeoTaschin)
- [Vinicius Gardim](https://www.github.com/gardim1)

## Dependências

Componentes utilizados no circuito:

- Arduino Uno R3
- Placa de Ensaio
- Leds vermelho, amarelo e verde
- 4 Resistores de 1000 ohm
- Fotorresistor
- Buzzer Piezo
- Jumper Cables
    
![Logo](https://gcdnb.pbrd.co/images/zIZlq7SC5Rjw.png?o=1)

## Lógica

Os vinhos agradecem lugares com penumbra, especialmente os brancos e espumantes, que sofrem mais com o contato a luz. O sistema monitora a luminosidade do ambiente, caso a luminosidade esteja baixa, um led verde se acende. Em caso de alerta, onde a luminosidade não está ideal, um led amarelo acende e um buzzer soa durante 3 segundos, se a luminosidade permanecer em níveis de alerta o buzzer continuará soando. O led vermelho se acende quando a luminosidade está excessivamente alta e o buzzer é ativo, que toca até que as condições ideias sejam reestabelecidas.

| LED | Valor lido pelo LDR | Buzzer ligado? |
|:----| :-----------------: | :------------: |
|Led verde| Maior que 700 | Não |
|Led amarelo|Menor que 700 e maior que 400| Sim |
|Led vermelho| Menor que 400 | Sim |
