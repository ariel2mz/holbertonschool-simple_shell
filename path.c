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
		if(environ[i][0] == 'P')
		{
			if(environ[i][1] == 'A')
			{
				if(environ[i][2] == 'T')
				{
					printf("%s", environ[i]);
				}
			}
		}
		i++;
	}
	return(environ[0]);
}
