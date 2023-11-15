#include "shell.h"

/**
 * error_msg - Printing custom error message to stderr
 * @fd: File descriptor
 * @num_cmd: Numbeer of commands written so far
 * @str1: First string - name of program
 * @c_name: Name of command
 * @err: custom message to be printed
 * Return: Void
 */

void error_msg(int fd, int num_cmd, char *str1, char *c_name, char *err)
{
	char num_stat;
	int tempo = num_cmd;

	while (*str1)
	{
		write(fd, &(*str1), 1);
		str1++;
	}
	write(fd, ": ", 2);

	if (num_cmd < 10)
	{
		num_stat = num_cmd + '0';
		write(fd, &(num_stat), 1);
	}
	else
	{
		num_stat = (num_cmd / 10) + '0';
		write(fd, &(num_stat), 1);
		num_stat = (tempo % 10) + '0';
		write(fd, &(num_stat), 1);
	}
	write(fd, ": ", 2);

	while (*c_name)
		write(fd, &(*c_name), 1);
	c_name++;

	write(2, ": ", 2);

	while (*err)
		write(fd, &(*err), 1);
	err++;

	write(fd, "\n", 1);
}
