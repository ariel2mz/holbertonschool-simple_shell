#include "main.h"

/**
 * comando - comando
 * @token: env
 * @env: env
 */
int comando(char **token, char **env)
{
	pid_t pid;
	int status = 0;
	struct stat fileStat;

	if (stat(token[0], &fileStat) == 0){
		pid = fork();

	if (pid < 0)
		printf("error");
	else if (pid == 0)
		execve(token[0], token, env);
	else
		wait(&status);
}
else {
	printf("Comando no encontrado\n");
	return (2);
}
return (0);
}
