#include "main.h"

/**
 * contar - contar contar
 * @linea: linea
 * Return: contador
 */

int contar(char *linea)
{
	int i = 0;
	int contador = 0;

	while (linea[i] != '\0')
	{
		if (linea[i] == ' ' || linea[i] == ':')
		{
			contador++;
		}
		i++;
	}
	contador++;
	return (contador);
}
