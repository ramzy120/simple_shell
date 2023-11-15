#include "shell.h"

/**
 * shell_print - Prints a string to stdout
 * @string: The String to be printed
 *
 * Function to print the provided string @string to stdout.
 */
void shell_print(const char *string)
{
	write(STDOUT_FILENO, string, strlen(string));
}
