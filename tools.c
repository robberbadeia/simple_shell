#include "shell.h"
/**
 * _strdup - function that duplicate a string
 *
 * @li: string to be duplicated
 *
 * Return: the duplicated string
*/

char *_strdup(char *li)
{
char *new_ptr;
int i;
int len = 0;

if (li == NULL)
{
return (NULL);
}
while (*li != '\0')
{
len++;
li++;
}
li = li - len;
new_ptr = malloc(sizeof(char) * (len + 1));
if (new_ptr == NULL)
{
return (NULL);
}
for (i = 0; i <= len; i++)
{
new_ptr[i] = li[i];
}

return (new_ptr);
}

/**
 * _strcmp - compare string values
 * @string1: input value
 * @string2: input value
 *
 * Return: string1[i] - string2[i]
 */
int _strcmp(char *string1, char *string2)
{
	int i;

	i = 0;
	while (string1[i] != '\0' && string2[i] != '\0')
	{
		if (string1[i] != string2[i])
		{
			return (string1[i] - string2[i]);
		}
		i++;
	}
	return (0);
}

/**
 * _strcat - concatenates two strings
 * @string1: input value
 * @string2: input value
 *
 * Return: void
 */
char *_strcat(char *string1, char *string2)
{
	int i;
	int j;

	i = 0;
	while (string1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (string2[j] != '\0')
	{
		string1[i] = string2[j];
		i++;
		j++;
	}

	string1[i] = '\0';
	return (string1);
}
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}


/**
 * _strlen - a function that get string leng
 *
 * @s: string
 *
 * Return: the legnth of a string
*/


int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
	{
		len++;
	}

	return (len);
}
