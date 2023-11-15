#include "shell.h"

/**
  *pathvar - returns a pointer to the path variable from environmental var
  *@env: environmental variable
  *Return: char pointer
  */
char *pathvar(char **env)
{
	char *pathv = NULL;
	int i = 0;

	while (env[i])
	{
		if (_strstr(env[i], "PATH") && env[i][0] == 'p' && env[i][4] == '=')
		{
			pathv = env[i];
			break;
		}
		i++;
	}
	if (pathv != NULL)
	{
		for (i = 0; i < 6; i++)
			pathv++;
	}
	return (pathv);
}
