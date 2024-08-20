#include "main.h"

/**
 *
 *
 *
 */

char ** tokenizar_path(char *linea)
{
	char **token;
	int palabras = 0;
	int i = 0;

	palabras = contar_path(linea);

	token = malloc(sizeof(char*)*(palabras + 1));

	token[0] = strtok(linea,":");

	for (i = 1; i < palabras; i++)
	{
		token[i] = strtok(NULL, ":");
	}
	token[palabras] = NULL;

	return (token);
}
