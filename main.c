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
	int shell_mode = 0;
	int command_count = 1;
	(void)argc;

	if (isatty(0) == 1)
		shell_mode = 1;
	errno = 0;

	while (1)
	{
		if (shell_mode == 1)
		{
			write(STDOUT_FILENO, "$", 2);
		}
		_interactive(argv, env, &command_count, &shell_mode);
		command_count++;
	}
	return (errno);
}
