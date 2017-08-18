#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i;
	if(argc<2)
	{
		printf(" --------------------------------\n");
		printf("| Insira um argumento de entrada |\n");
		printf("| na chamada deste programa.     |\n");
		printf("| Por exemplo:                   |\n");
		printf("|    $ ./argumento Felipe             |\n");
		printf("|        Olá Felipe              |\n");
		printf("|    $                           |\n");
		printf(" --------------------------------\n");
		return -1;
	}
	printf("Argumentos: ");

	for(i=1;i<argc;i++){
		printf("%s ", argv[i]);
	}
        printf("\n");
	return 0;
}
