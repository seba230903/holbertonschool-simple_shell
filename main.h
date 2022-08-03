#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h> // include pid_t struct and fork, perror
#include <sys/wait.h> // include wait
#include <stdlib.h> //include exit

extern char **environ;

int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_realloc(char *dest, int size);

char **stok(char *str, const char *del);
char *getpath(char *str);
int checkpath (char *first_input);
int concat_command(char **path_list, char *command);
char *checkaccess(char **path_list);
void call_child (char *path, char **intput);

#endif
