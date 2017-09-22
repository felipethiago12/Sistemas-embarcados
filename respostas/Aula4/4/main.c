#include<stdio.h>
#include<stdlib.h>
#include "bib_arqs.h"

int main(int argc, const char *argv[]){
     int i=0;
     i = tam_arq_texto(argv[1]);
     printf("O tamanho do arquivo é: %d",i);	
}



