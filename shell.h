#ifndef __SHELL_H_
#define __SHELL_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;
char *PrometInput(void);
char **TokArray(char *line);
char *_strdup(char *li);
void free_array(char **array);
int fork_and_excute(char **command, char **argv, int index);
int _strcmp(char *string1, char *string2);
char *_strcat(char *string1, char *string2);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
char *get_envi_var(char *var);
char *get_my_full_path(char *command);
char *num_to_string(int number);
void rev_string(char *s);
void print_the_sh_error(char *name, char *cmd, int index);
#endif
