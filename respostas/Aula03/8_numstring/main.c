#include <stdio.h>
#include <stdlib.h>
#include "num_caracs.h"

int main(int argc, char **argv)
{
	int i,j;
	int num=0;
	if(argc<2)
	{
		printf(" --------------------------------\n");
		printf("| Insira um argumento de entrada |\n");
		printf("| na chamada deste programa.     |\n");
		printf("| Por exemplo:                   |\n");
		printf("|    $ ./num Felipe              |\n");
		printf("|   nuemro de caracteres = 6     |\n");
		printf("|    $                           |\n");
		printf(" --------------------------------\n");
		return -1;
	}
	//for (j=1;j<i;j++){
	//	num = num + num_caracs(argv[j]);
	//}
	printf("Numero de caracteres = %d ", num_caracs(argv[1]));
	return 0;
}
