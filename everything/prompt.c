#include "shell.h"

void shell_print(const char *message)
{
	printf("%", message);
}
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
		shell_print("No prompt displayed\n");
	}
}
