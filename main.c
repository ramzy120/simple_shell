#include "shell.h"

/**
<<<<<<< HEAD
  *main - call a simple shell
  *@argc: argument counter
  *@argv: argument vector
  *@env: environmental variable
  *
  *Return: returns 0 on sucess
  */

int main(int argc, char **argv, char **env)
{
	int shell_mode = 0;
	command_count = 1;
	(void)argc;

	if (isatty(0) == 1)
		shell_mode = 1;
	errno = 0
=======
 * main - Entry point for the simple shell.
 *
 * Description: Implements a basic shell that continuously prompts
 *              the user for input commands.
 *
 * Return: Always returns 0 to signify successful completion.
 */

int main(void)
{
	char command[150];
>>>>>>> origin

	while (1)
	{
		if (shell_mode == 1)
		{
			write(STDOUT_FILENO, "$", 2);
		}
		prompt(argv, env, &command_count, &shell_mode);
		command_count++;
	}
	return (errno);
}
