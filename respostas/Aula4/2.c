#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
  
  FILE *fp;
  char str1[100]="nome: ";
  char str2[100]="idade: ";
  char nome[100];
  char idade[100];
  char str3[100]=" anos";

  int i;
  printf("Digite seu nome:");
  gets(nome);
  printf("Digite sua idade:");
  gets(idade);
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
  for(i=0; idade[i]; i++) {
	putc(idade[i], fp); /* Grava a string, caractere acaractere */
  }  
  for(i=0; str3[i]; i++) {
	putc(str3[i], fp); /* Grava a string, caractere acaractere */
  }                                       
  putc('\n', fp);
  fclose(fp);
  return 0;
}
