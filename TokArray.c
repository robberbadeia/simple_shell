#include "shell.h"
/**
 * TokArray - function that tokanize user input
 *
 * @line: user input
 *
 * Return: array of string
*/

char **TokArray(char *line)
{
char *token = NULL;
char *tmp = NULL;
char **command_array = NULL; /*array to store the command in in run time*/
int n = 0; /*counter to get the size needed for the array*/
int i = 0; /*counter*/

if (!line)
{
return (NULL);
}
tmp = _strdup(line);
token = strtok(tmp, " \n\t");
if (token == NULL)
{
free(line);
free(tmp);
return (NULL);
}
while (token != NULL)
{
n++;
token = strtok(NULL, " \n\t");
}
free(tmp);
command_array = malloc(sizeof(char *) * (n + 1));
if (!command_array)
{
free(line);
return (NULL);
}
token = strtok(line, " \n\t");
while (token != NULL)
{
command_array[i] = _strdup(token);
token = strtok(NULL, " \n\t");
i++;
}
free(line);
command_array[i] = NULL;
return (command_array);
}


