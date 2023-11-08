#include <stdio.h>
#include <string.h>

/**
  *main - function that divides string and return an array
  *
  *Return: 0.
  */
int main(void)
{
	char string[] = "i am a fine girl";
	char *delimiter = " ";

	char *token = strtok(string, delimiter);

	while (token != NULL)
	{
		printf("%s\n", token);

		token = strtok(NULL, delimiter);
	}
	return (0);
}
