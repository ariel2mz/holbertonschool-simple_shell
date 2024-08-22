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
	(void)ac;
	(void)av;

	while (1)
	{
		printf("$ ");
		nread = getline(&line, &len, stdin);

		if (nread == -1)
		{
			free(line);
			break;
		}
		token = tokenizar(line);
		comando(token, env);
		free(token);
	}
	return (0);
}
