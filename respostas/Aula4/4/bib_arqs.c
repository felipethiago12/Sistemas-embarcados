#include<stdio.h>
#include<stdlib.h>
#include "bib_arqs.h"

int tam_arq_texto(char *nome_arquivo)
{
	
	int cont=0;
	char c='a';
	FILE *fp= fopen(nome_arquivo,"r");
	do{
		c = fgetc(fp);
		cont++;
 	}while(c!=EOF);
	fclose(fp);
	return cont;
}



