**1. Como se utiliza o comando `ps` para:**

**(a) Mostrar todos os processos rodando na máquina?** 
$ps -e

**(b) Mostrar os processos de um usuário?**
$ps -U "usuario"

**(c) Ordenar todos os processos de acordo com o uso da CPU?**
$ps aux --sort=-pcpu

**(d) Mostrar a quanto tempo cada processo está rodando?**
 $ps -e -o time
 
**2. De onde vem o nome `fork()`?**
Origina da palavra Fork que em português significa forquilha, ou bifurcação.

**3. Quais são as vantagens e desvantagens em utilizar:**

**(a) `system()`?**
é um comando muito prático, pois executa um comando direto no terminal. podendo assim usarmos diversos comandos ja conhecidos para trabalhar. O problema que ele inicia um novo processo e dependendo do que estiver rodando na maquina ela pode ficar lenta.

**(b) `fork()` e `exec()`?**
a fork cria uma copia identica do processo em execução, processo filho, os dois processos continuam a execução em sincronia. vantagem é que vários processos podem trabalhar em conjunto, e a desvantagem é que se faz necessario uma lógica de execução, para que os processos não acessem o mesmo local da mémoria ao mesmo tempo.
Quando um programa chama a função exec, o processo cessa imediatamente a execução do programa corrente e passa a
executar um novo programa do início.

**4. É possível utilizar o `exec()` sem executar o `fork()` antes?**
sim, basta criar um processo antes, com a função create_process("nome"); 

**5. Quais são as características básicas das seguintes funções:**

**(a) `execp()`?**
Está função irá buscar a nova imagem do processo nos diretórios contidos na variável PATH.
**(b) `execv()`?**
 Os argumentos que serão recebidos em argv são passados em um vetor do tipo char* que já contém todas as strings previamente carregadas.
**(c) `exece()`?**
O último parâmetro destas funções é um vetor para strings (char *) que será recebido pelo novo programa no argumento envp contendo variáveis de ambiente pertinentes para sua execução.
**(d) `execvp()`?**
bPara as versões sem a letra “p“, deverá ser passada uma string contendo o caminho completo para o arquivo executável. A letra “p“, representa que o pedido ser passado uma string contendo o caminho completo para o arquivo executável.
**(e) `execve()`?**
Os argumentos que serão recebidos em argv são passados em um vetor do tipo char* que já contém todas as strings previamente carregadas. e representa variável externa. 
**(f) `execle()`?**
Os argumentos que serão recebidos em argv são listados um a um como parâmetros da função em forma de string. Para as versões sem a letra “e“, o ambiente é adquirido a partir de uma variável externa (extern char **environ) já declarada na biblioteca unistd.h.
