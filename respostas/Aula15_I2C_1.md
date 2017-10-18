1. Cite as vantagens e desvantagens das comunicação serial I2C.
vantagens: não necessita de dois fios para o envio de dados, a comunicação é sincrona
desvantagem: é mais lenta que a comunicação SPI pois não envia e recebe dados ao mesmo tempo. não consegue enviar mensagem iguais ao mesmo tempo para vários dispositivos.

2. Considere o caso em que a Raspberry Pi deve receber leituras analógico/digitais de um MSP430, e que a comunicação entre os dois é I2C. É tecnicamente possível que o MSP430 mande os resultados da conversão A/D a qualquer hora, ou ele deve aguardar a Raspberry Pi fazer um pedido ao MSP430? Por quê?
o MSP430 deve aguardar para escrever na linha de dados(SDA) pois que inicia a cominucação é o mestre, com um bit em nivel lógico baixo, em seguida o mestre envia o endereço do escravo e apos a confirmação pelo escravo ele pode escrever na linha de comunicação.

3. Se o Raspberry Pi tiver de se comunicar com dois dispositivos via I2C, como executar a comunicação com o segundo dispositivo?
para conversar com o segundo dispositivo ela tem que iniciar a comunicação com o endereco do segundo escravo e após confirmação do escravo mandar a mesma mesma mensagem enviada anteriormente.










