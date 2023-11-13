#include "shell.h"
void prompt(void);

/**
  *prompt - function that checks if shell is interactive or not
  *
  *Return: shell prompt or error message
  */
void prompt(void)
{
	char pwd[1024];
	if (isatty(STDOUT_FILENO))
	{
		getcwd(pwd, sizeof(pwd));
		shell_print("sshell$ ");
	}
	else
	{
		while (!=line)
		{
			char* command = _split(line);
			execle(command);
		}
	}
}
