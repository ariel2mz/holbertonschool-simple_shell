#include "main.h"

/**
 * comando - comando
 * @token: env
 * @env: env
 */
void comando(char **token, char **env)
{
	pid_t pid = fork();
	int status = 0;
	struct stat fileStat;

	if (pid < 0)
		printf("error");
	else if (pid == 0)
	{
		if (stat(token[0], &fileStat) == 0)
			execve(token[0], token, env);
		else
			printf("Comando no encontrado");
	}
	else
		wait(&status);
}
