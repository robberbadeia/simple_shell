#include "shell.h"
/**
 * free_array - A function used to free the array
 *
 * @array: the target allocated array to be freed
 *
 *
*/
void free_array(char **array)
{
int i;
if (!array)
{
return;
}
for (i = 0; array[i] != NULL; i++)
{
free(array[i]);
}

free(array);
}

