#include <stdio.h>
#include <string.h>

/**
  *main - function that prints command line without ac
  *
  *Return: string entered until it encounters a null byte
  */
int main(int ac, char **av)
{
	int i;

	for (i = 0; av[i] != NULL; i++)
		printf("%s\n", av[i]);
	return 0;
}
