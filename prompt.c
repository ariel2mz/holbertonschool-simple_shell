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
	int builtinn;
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
		builtinn = builtin(token[0]);
		if (builtinn == 1)
		{
			free(token);
			free(line);
			exit(0);
		}
		else if (builtinn != 2)
		{
		comando(token, env);
		free(token);
		}
		}
	}
	return (0);
}
