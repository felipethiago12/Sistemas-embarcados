#include <stdio.h>
#include <stdlib.h>

int main()
{   char nome[50];
 
    printf("Digite seu nome: ");
    gets(nome);
 
    printf("O nome armazenado foi: %s", nome);

    return 0;
}      
