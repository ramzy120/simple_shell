#include "shell.h"

/**
  *execute - function replaces curent process image with a new processimage
  *@argv: argument name of file to be executed
  *
  *Return: -1 and errno is set to indicate error
  */
void exevcmd(char *path, char *argv[])
{
	char *command = NULL;

	(void)path;

	if (argv)
	{
		command = argv[0];

		if (execve(command, argv, NULL) == -1)
		{
			perror("Error process does not exist");
		}
	}
}
