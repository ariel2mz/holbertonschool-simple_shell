#include "main.h"

/**
 *
 *
 *
 */

int contar_path(char *linea)
{
	int i = 0;
	int contador = 0;

	while (linea[i] != '\0')
	{
		if (linea[i] == ':')
		{
			contador++;
		}
		i++;
	}
	contador++;
	return (contador);
}
