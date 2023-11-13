#include "shell.h"

int main(void){
	char command[150];

	while (1)
	{
	prompt();
	line(command, sizeof(command));
	}
	return (0);
}
