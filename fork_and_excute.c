#include "shell.h"
/**
 * fork_and_excute - A c function that excude the commands
 *
 * @command: toknized array
 * @argv: command line passed while excuting
 *@index: used to get the num
 * Return: status
*/

int fork_and_excute(char **command, char **argv, int index)
{
pid_t child;
int statues;
char *the_full_command;

the_full_command = get_my_full_path(command[0]);
if (!the_full_command)
{
print_the_sh_error(argv[0], command[0], index);
free_array(command);
return (127);
}

child = fork();

if (child == 0)
{
if (execve(the_full_command, command, environ) == -1)
{
free_array(command);
free(the_full_command);
}
}
else
{
waitpid(child, &statues, 0);
free_array(command);
free(the_full_command);
}
return (WEXITSTATUS(statues));
}


