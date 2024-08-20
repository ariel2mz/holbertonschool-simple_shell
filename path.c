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
	char **token;

	while(environ[i])
	{
		if(environ[i][0] == 'P')
		{
			if(environ[i][1] == 'A')
			{
				if(environ[i][2] == 'T')
				{
					token = tokenizar_path(environ[i]);
				}
			}
		}
		i++;
	}
	i = 0;
	while(token[i])
	{
	printf("%s", token[i]);
	i++;
	}
	return(environ[0]);
}
