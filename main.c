#include <stdio.h>
#include "morse.h"

int main(int argc, char *argv[])
{
	int tam;
	string cadena;

	if(argc != 3){
		fprintf(stderr,"< error: numero de argumentos incorrecto> \nUso: %s \"texto\" opcion\n",argv[0]);
		return -1;
	}

	tam = strlen(argv[1]);

	if(NULL == (cadena = malloc(sizeof(char) * tam * 6))){
		fprintf(stderr,"<error: %s -> error en la creacion de memoria dinamica >");
		return -1;
	}

	stringToMorse(argv[1],cadena);
	printf("\nfrase original: %s \nfrase morse: %s\n",argv[1],cadena);
	//printf("/a");
	printf("\a");
	
	return 0;
}