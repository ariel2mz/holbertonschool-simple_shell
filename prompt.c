#include "main.h"

/**
 *
 *
 *
 */
int main(int ac, char **av, char **env)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;
	char **token;

	while(1)
	{
		printf("$ ");
		nread = getline(&line, &len, stdin);

		if (nread != -1)
		{
			line[len - 1] = '\0';
			token = tokenizar(line);
			comando (token, env);
		}
	}
}
