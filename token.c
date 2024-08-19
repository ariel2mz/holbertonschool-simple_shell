#include "main.h"

/**
 *
 *
 *
 */

char ** tokenizar(char *linea)
{
	char **token;
	int palabras = 0;
	int i = 0;

	palabras = contar(linea);
	
	token = malloc(sizeof(char*)*(palabras + 1));
	
	token[0] = strtok(linea, " \n");

	for (i = 1; i < palabras; i++)
	{
		token[i] = strtok(NULL, " \n");
	}
	token[palabras] = NULL;

	return (token);
}
