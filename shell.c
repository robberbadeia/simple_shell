#include "shell.h"
/**
 * main - entry point
 * @argc: Input string
 * @argv: array of commands inputs
 * Return: status
 */
int main(int argc, char **argv)
{
int index = 0;
char *line = NULL;
char **command = NULL;
int status = 0;
(void) argc;


while (1)
{
line = PrometInput();
if (line == NULL)
{
if (isatty(STDIN_FILENO))
{
write(STDOUT_FILENO, "\n", 1);
}
free(line);
return (status);
}
index++;

command = TokArray(line);
if (!command)
{
continue;
}

status = fork_and_excute(command, argv, index);




}
return (0);
}


