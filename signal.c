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
