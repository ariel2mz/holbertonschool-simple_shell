#include "main.h"

/**
 * tokenizar - tokenizar
 * @linea: line tokenizar - tokenizar
 * @linea: linea
 * Return: token
 *
 *
 */

char **tokenizar(char *linea)
{
	char **token;
	int palabras = 0;
	int i = 0;

	palabras = contar(linea);

	token = malloc(sizeof(char *) * (palabras + 1));

	token[0] = strtok(linea, DELIMITATORS);

	for (i = 1; i < palabras; i++)
	{
		token[i] = strtok(NULL, DELIMITATORS);
	}
	token[palabras] = NULL;

	return (token);
}
