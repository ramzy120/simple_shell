#include <unistd.h>

/* execute_command - Execute a command using execve
* @command: The command to execute
*
* This function forks a child process to execute a command
* using execve while the parent process (shell) waits for the child to complete.
*/
void execute_command(char *command) {
	pid_t pid = fork();

	if (pid < 0) {
		perror("fork");
		exit(EXIT_FAILURE);
	} else if (pid == 0) {
		char *args[] = { "/bin/sh", "-c", command, NULL };
		if (execve(args[0], args, NULL) == -1) {
			perror("execve");
			exit(EXIT_FAILURE);
		}
	} else{
		int status;
		waitpid(pid, &status, 0);
	}
}

