#include "shell.h"

/**
  *main - Entry for  a simple shell
  *@argc: argument counter
  *@argv: argument vector
  *@env: environmental variable
  *
  *Return: returns 0 to signify  sucess
  */

int main(int argc, char **argv, char **env)
{
	int sh_mode = 0;

	cmd_count = 1;
	(void)argc;

	if (isatty(0) == 1)
		sh_mode = 1;
	errno = 0;

	while (1)
	{
		if (sh_mode == 1)
		{
			write(1, "$", 2);
		}
		_interactive(argv, env, &cmd_count, &sh_mode);
		cmd_count++;
	}
	return (errno);
}

/**
 * free_array - frees an array of strings
 * @array_tokens: Argument pointer to grid to be freed
 * Return: Always Void;
 */

void free_array(char **array_tokens)
{
	int i = 0;

	while (array_tokens[i] != NULL)
	{
		free(array_tokens[i]);
		i++;
	}

	free(array_tokens);
}

