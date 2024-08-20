
#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <sys/wait.h>

#define DELIMITATORS " \n\t\r"

int contar(char *linea);
char ** tokenizar(char *linea);
void comando(char **token, char **env);
char *pathfinder(char *command);
#endif
