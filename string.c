#include "shell.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string argument
 *
 * Return: The length of string @s
 */
int _strlen(char *s)
{
int length = 0;
int i;

for (i = 0; s[i] != '\0'; i++)
{
length += 1;
}

return (length);
}

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
char *dup;
unsigned int i, len;

i = 0;
len = 0;

if (str == NULL)
return (NULL);

while (str[len])
len++;

dup = malloc(sizeof(char) * (len + 1));

if (dup == NULL)
return (NULL);

while ((dup[i] = str[i]) != '\0')
i++;

return (dup);
}
