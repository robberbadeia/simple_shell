#include "shell.h"
/**
 * get_my_full_path - A c function that return the full path
 *
 * @command: the toknized command
 *
 * Return: the command path if exists
*/

char *get_my_full_path(char *command)
{
char *my_path;
char *dirctory;
char *my_full_path;
struct stat my_st;
int i;

for (i = 0; command[i]; i++)
{
if (command[i] == '/')
{
if ((stat(command, &my_st) == 0))
{
return (_strdup(command));
}
return (NULL);
}
}
my_path = get_envi_var("PATH");
if (!my_path)
{
return (NULL);
}
dirctory = strtok(my_path, ":");
while (dirctory)
{
my_full_path = malloc(_strlen(dirctory) + _strlen(command) + 2);
_strcpy(my_full_path, dirctory);
_strcat(my_full_path, "/");
_strcat(my_full_path, command);
if ((stat(my_full_path, &my_st) == 0))
{
free(my_path);
return (my_full_path);
}
free(my_full_path);
dirctory = strtok(NULL, ":");
}
free(my_path);
return (NULL);
}



