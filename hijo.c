#include "main.h"

/**
 *
 *
 */
void comando(char **token, char **env)
{
	pid_t pid = fork();
	int status = 0;

	if (pid < 0)
	{
		printf("error");
	}
	else if (pid == 0)
	{
		execve(token[0], token, env);
	}
	else
	{
		wait(&status);
	}
}
