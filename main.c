#include "shell.h"

/**
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

	while (1)
	{
	prompt();
	line(command, sizeof(command));
	}
	return (0);
}
