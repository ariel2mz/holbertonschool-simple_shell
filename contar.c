#include "main.h"
int builtin(char *linea)
{
	int i = 0;
	
	if (linea[0] == 'e')
		if (linea[1] == 'x')
			if (linea[2] == 'i')
				if (linea[3] == 't')
					{
					free(linea);
				 	exit(0);
					}
	if (linea[0] == 'e')
		if (linea[1] == 'n')
			if(linea[2] == 'v')
			{
				while (environ[i])
				{
					printf("%s\n", environ[i]);
					i++;
				}
				free(linea);
			}
}
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
