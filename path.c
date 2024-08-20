#include "main.h"

extern char **environ;
/**
 *
 *
 *
 */

char *pathfinder(char *command)
{
	int i = 0;

	while(environ[i])
	{
		printf("%s\n",environ[i]);
		i++;
	}
	return(environ[0]);
}
