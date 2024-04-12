
# Sistema de Monitoramento de Luminosidade

Sistema de monitoramento de luminosidade de vinhos para a Vinheria Agnello, que opera como loja física e que está demandando o desenvolvimento de um portal de e-commerce, para começar a vender também na internet, mas com uma exigência básica: que a loja virtual consiga criar uma experiência do usuário similar à do atendimento presencial em sua loja física. Projeto realizado para monitorar o ambiente em que os vinhos ficam armazenados, realizado como Checkpoint 1 para a matéria de Edge Computing, lecionada pelo professor Lucas Demetrius.

## Link do projeto no tinkercad
https://www.tinkercad.com/things/8wEWBZN2uqL-sensor-de-luz

## Como reproduzir

Após clicar em "Iniciar simulação", clique no fotorresistor (LDR) para alterar a exposição a luz. Caso o nível de luminosidade seja considerado alarmante para a integridade dos vinhos, o led amarelo acende e o buzzer toca durante 3 segundos, caso o nível luminosidade esteja muito elevado, o led veremelho acende e o buzzer toca até que a condição ideal seja atendida.

Observação: Alterando o nível da luz, o buzzer provavelmente será ativado em um volume elevado, então cuidado. 

## Autores

- [Gabriel Matiolli](https://www.github.com/m4tiolli)
- [Gustavo Berlanga](https://www.github.com/berla1)
- [Leonardo Taschin](https://www.github.com/LeoTaschin)
- [Vinicius Gardim](https://www.github.com/gardim1)
- [Camila Feitosa](https://github.com/camfeitosa)

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

Os vinhos agradecem lugares com penumbra, especialmente os brancos e espumantes, que sofrem mais com o contato com a luz. Em função disso, o sistema monitora a luminosidade do ambiente com LED’s da seguinte maneira:

Led verde: caso a luminosidade esteja baixa, em condição ideial, acende.
Led amarelo:  Em caso de alerta, onde a luminosidade não está ideal, acende e um buzzer soa durante 3 segundos, se a luminosidade permanecer em níveis de alerta o buzzer continuará soando. 
O led vermelho: se acende quando a luminosidade está excessivamente alta e o buzzer é ativo, que toca até que as condições ideias sejam reestabelecidas.

| LED | Valor lido pelo LDR | Buzzer ligado? |
|:----| :-----------------: | :------------: |
|Led verde| Maior que 700 | Não |
|Led amarelo|Menor que 700 e maior que 400| Sim |
|Led vermelho| Menor que 400 | Sim |
