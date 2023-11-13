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
		getcwd(pwd, sizeof(pwd));
		shell_print("sshell$ ");
	else
	{
		/*perror("Not a terminal");*/
		FILE* script = fopen("STDIN", r);
		char line[256];

		while (fgets(line, sizeof(line), script) != NULL)
		{
			char** command = _strtok(line);
			execute(command);
		}
		fclose(script);
		getline(&buffer,&size,FILE);
	}
}
