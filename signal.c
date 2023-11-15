#include "shell.h"

/**
 * signal_handler - Handles the CTRL + C signal
 * @signum: Number returned from call to Signal
 * Return: Returns Void
 */

void signal_handler(int signum)
{
	(void)signum;
	write(1, "\n", 1);
	write(1, "$ ", 2);
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
