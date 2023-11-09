#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>


void shell_print (const char *string);
void prompt(void);
void line(char *command, size_t size);

#endif
