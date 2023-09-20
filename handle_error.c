#include "shell.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
char rev = s[0];
int counter = 0;
int i;

while (s[counter] != '\0')
{
counter++;
}

for (i = 0; i < counter; i++)
{
counter--;
rev = s[i];
s[i] = s[counter];
s[counter] = rev;
}
}
/**
* num_to_string - converts numbers to strings
* @number: Input string
* Return: String
*/

char *num_to_string(int number)
{
char buffer[30];
int i = 0;

if (number == 0)
{
buffer[i++] = '0';
}
else
{
while (number > 0)
{
buffer[i++] = (number % 10) + '0';
number = number / 10;
}
}

buffer[i] = '\0';
rev_string(buffer);
return (_strdup(buffer));
}



