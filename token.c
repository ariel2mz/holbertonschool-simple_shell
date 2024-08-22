#include "main.h"

int esvacio(char *linea)
{

	int i = 0;
	int letras = 0;
	while (linea[i] != '\0')
	{
		if (linea[i] <= 122 && linea[i] >= 97)
		{
			letras++;
		}
		i++;
	}
	if (letras > 0)
	return (1);
	else
	return (-1);
}
/*
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
