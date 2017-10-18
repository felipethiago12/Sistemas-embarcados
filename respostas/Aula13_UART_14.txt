Cite as vantagens e desvantagens das comunicação serial:
(a) Assíncrona (UART).
vantagem: Protocolo Simplificado e é full-duplex.
desvantagem: pelo fato do clock não ser sincrono, a comunicação é lenta.
(b) SPI.
vantagem: ela é full-duplex envia e recebe ao mesmo tempo e se comunica com vários dispositivos. 
desvantagem: possui mais fios que a i2c.
        
Considere o caso em que a Raspberry Pi deve receber leituras analógico/digitais de um MSP430, e que a comunicação entre os dois é UART.
É tecnicamente possível que o MSP430 mande os resultados da conversão A/D a qualquer hora, ou ele deve aguardar a Raspberry Pi fazer um pedido ao MSP430? Por quê?

Considere o caso em que a Raspberry Pi deve receber leituras analógico/digitais de um MSP430, que a comunicação entre os dois seja SPI, e que o MSP430 seja o escravo. 
É tecnicamente possível que o MSP430 mande os resultados da conversão A/D a qualquer hora, ou ele deve aguardar a Raspberry Pi fazer um pedido ao MSP430? Por quê?

Se o Raspberry Pi tiver de se comunicar com dois dispositivos via UART, como executar a comunicação com o segundo dispositivo?

Se o Raspberry Pi tiver de se comunicar com dois dispositivos via SPI, como executar a comunicação com o segundo dispositivo?
