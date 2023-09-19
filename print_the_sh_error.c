#include "shell.h"
/**
 * print_the_sh_error - Function
 * @name: input
 * @cmd: input
 * @index: input
 * Return: None
*/
void print_the_sh_error(char *name, char *cmd, int index)
{
	char *n;
	char mss[] = ": not found\n";

	n = num_to_string(index);
	write(STDERR_FILENO, name, _strlen(name));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, n, _strlen(n));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, cmd, _strlen(cmd));
	write(STDERR_FILENO, mss, _strlen(mss));
	free(n);
}
