#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>

/**
  *main - PID
  *
  *Return: Always 0.
  */
int main(void)
{
	pid_t my_pid;

	my_pid = syscall(SYS_getppid);
	/*my_ppid = getppid();*/
	printf("%u\n", my_pid);
	/*printf("%u\n", my_ppid);*/
	return (0);
}
