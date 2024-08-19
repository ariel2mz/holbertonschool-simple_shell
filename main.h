#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <sys/wait.h>

int contar(char *linea);
char ** tokenizar(char *linea);
void comando(char **token, char **env);
