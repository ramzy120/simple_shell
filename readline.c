#include "shell.h"

/**
 * line - Reads a line of input from stdin
 * @command: Buffer to store the input
 * @size: Size of the buffer
 *
 * This functions reads a line of input from stdin using fgets.
 * it handles potential erros and removes the newline character.
 */

void line(char *command, size_t size)
{
	if (fgets(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			shell_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			shell_print("Error\n");
			exit(EXIT_FAILURE);
		}
	}
	command[strcspn(command, "\n")] = '\0';
}
