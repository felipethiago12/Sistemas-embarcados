**Cite as vantagens e desvantagens das comunicação serial:
(a) Assíncrona (UART).**
vantagem: Protocolo Simplificado e é full-duplex.
desvantagem: pelo fato do clock não ser sincrono, a comunicação é lenta.
**(b) SPI.**
vantagem: ela é full-duplex envia e recebe, é possivel envia a mesma mensagem para todos os escravos ao mesmo tempo. 
desvantagem: um fio adicional para cada escravo, ou se usarmos a configuração Daisy chain a comunicação fica mais lenta, pois a mensagem tem que passar por escravos intermediários até chegar ao escravo destino.
        
**Considere o caso em que a Raspberry Pi deve receber leituras analógico/digitais de um MSP430, e que a comunicação entre os dois é UART.É tecnicamente possível que o MSP430 mande os resultados da conversão A/D a qualquer hora, ou ele deve aguardar a Raspberry Pi fazer um pedido ao MSP430? Por quê?**
O MSP430 pode enviar a qualquer momento as informações bastando apenas iniciar a comunicação com o bit de stat, após este bit o raspberry recebe os dados da transmissão.

**Considere o caso em que a Raspberry Pi deve receber leituras analógico/digitais de um MSP430, que a comunicação entre os dois seja SPI, e que o MSP430 seja o escravo. É tecnicamente possível que o MSP430 mande os resultados da conversão A/D a qualquer hora, ou ele deve aguardar a Raspberry Pi fazer um pedido ao MSP430? Por quê?**
Não é possivel, pois quem controla o fluxo de informações é o mestre apartir do clock.

**Se o Raspberry Pi tiver de se comunicar com dois dispositivos via UART, como executar a comunicação com o segundo dispositivo?**
apos o envio dos oito bits de informação existe outro bit chamado Ad que serve para o mestre informar para os escravos se aqueles bits enviados são endereço ou informação, nesse caso a sequencia seria:
endereco do dispositivo 1 mensagem endereço do dispositivo 2 e mensagem.
**Se o Raspberry Pi tiver de se comunicar com dois dispositivos via SPI, como executar a comunicação com o segundo dispositivo?**
Na comunicação SPI para que o mestre se comunique com mais de um dispositivo existe um quarto fio que envia o endereço do escravo. todos os dispositivos se conectam ao fio de endereço e apenas recebe a mensagem o dispositivo referente ao endereço da linha.
