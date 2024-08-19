#include "main.h"

/**
 *
 *
 *
 */
int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;
	int palabras;

	while(1)
	{
		printf("$ ");
		nread = getline(&line, &len, stdin);

		if (nread != -1)
		{
			palabras = contar(line);
			printf("%d",palabras);
		}
	}
}
