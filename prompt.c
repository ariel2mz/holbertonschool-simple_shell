#include "main.h"

/**
 * main - main
 * @ac: ac
 * @av: av
 * @env: env
 * Return: 0
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
		if (isatty(STDIN_FILENO)) {
		printf("$ ");
		}
		nread = getline(&line, &len, stdin);

		if (nread == -1)
		{
			free(line);
			break;
		}
		
		if (esvacio(line) == 1)
		{
		token = tokenizar(line);
		comando(token, env);
		free(token);
		}
	}
	return (0);
}
