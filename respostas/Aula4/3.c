#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
  
  char nome[100]=argv[1];
  FILE *fp;
  char str1[100]="nome: ";
  char str2[100]="idade: ";
  char str3[100]=" anos";

  if(argc<2)
	{
		printf(" --------------------------------\n");
		printf("| Insira um argumento de entrada |\n");
		printf("| na chamada deste programa.     |\n");
		printf("| Por exemplo:                   |\n");
		printf("|    $ ./a.out Felipe 50         |\n");
		printf(" --------------------------------\n");
		return -1;
	}
  int i;
  fp = fopen(nome,"w");
  if(!fp)
  {
    printf( "Erro na abertura do arquivo");
    exit(0);
  }
  for(i=0; str1[i]; i++) {
	putc(str1[i], fp); /* Grava a string, caractere acaractere */
  }
  for(i=0; nome[i]; i++) {
	putc(nome[i], fp); /* Grava a string, caractere acaractere */
  }
  putc('\n', fp);

  for(i=0; str2[i]; i++) {
	putc(str2[i], fp); /* Grava a string, caractere acaractere */
  }
//idade
  
  for(i=0; str3[i]; i++) {
	putc(str3[i], fp); /* Grava a string, caractere acaractere */
  }                                       
  putc('\n', fp);
  fclose(fp);
  return 0;
}
