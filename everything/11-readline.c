#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
  *main - function that getline from stdin
  */
int main(void)
{
	char *buffer = NULL;
	size_t len = 0;
	size_t read;

	while (1)
	{
		printf("$");

		buffer = malloc(sizeof(char) * len + 1);
		if (buffer == NULL)
			exit(1);
		read = getline(&buffer, &len, stdin);

		if (read == -1)
		{
			printf("error\n");
			break;
		}
		else
		printf("%s",buffer);

		free(buffer);
	}
	return (0);
}
