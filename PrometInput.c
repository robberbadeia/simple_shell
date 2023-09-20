#include "shell.h"
/**
 * PrometInput - a function that takes the user
 * input
 *
 * Return: a string
*/
char *PrometInput(void)
{
char *line = NULL;
int n;
size_t len;

if (isatty(STDIN_FILENO))
{
write(STDOUT_FILENO, "$ ", 2);
}
n = getline(&line, &len, stdin);
if (n == -1)
{
free(line);
return (NULL);
}
return (line);
}


