
#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <sys/wait.h>
#include <sys/stat.h>

#define DELIMITATORS " \n\t\r:"
extern char **environ;
int contar(char *linea);
char **tokenizar(char *linea);
void comando(char **token, char **env);
char *pathfinder(char *command);
char **tokenizar_path(char *linea);
int contar_path(char *linea);
int esvacio(char *linea);
int builtin(char *linea);
#endif
