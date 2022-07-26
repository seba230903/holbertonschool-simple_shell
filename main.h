#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

extern char **environ;

int _strlen(char *s);
char *_strcat(char *dest, char *src);

char **stok(char *str, const char *del);
char *getpath(char *str);
int checkpath(char *first_input);
char *concat_command(char *path, char *command);
int checkaccess(char *f_path);
int call_child(char *path, char **intput, int path_access);
void free_array(char **in);
#endif
