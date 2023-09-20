#include "shell.h"
/**
 * get_envi_var - A c function that get the E variable
 *
 * @var:variable input
 *
 * Return: toknaized variable
*/


char *get_envi_var(char *var)
{
int i;
char *token = NULL;
char *tmp = NULL;
char *value = NULL;
char *evar = NULL;

for (i = 0; environ[i]; i++)
{
tmp = _strdup(environ[i]);
token = strtok(tmp, "=");
if ((_strcmp(token, var) == 0))
{
value = strtok(NULL, "\n");
evar = _strdup(value);
free(tmp);
return (evar);
}
free(tmp);
}
return (NULL);
}




