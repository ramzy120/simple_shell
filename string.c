#include "shell.h"

int _strlen(char *s);
char *_strdup(char *str);
char *_strstr(char *haystack, char *needle);
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
unsigned int i;
size_t len = strlen(str);
i = 0;

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

/**
 *_strstr - locates a substring
 *@haystack: string to search in
 *@needle: substring to look for
 *
 *Return: pointer to the beginning of the located substring
 *or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}

/**
 *_strcat - concatenates two strings
 *@dest: string to append to
 *@src: string to add
 *
 *Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

/**
 *_strcpy - Returns the number of elements in a string
 *@dest: Destination
 *@src: Source
 *Return: dest (Success)
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (start);
}
