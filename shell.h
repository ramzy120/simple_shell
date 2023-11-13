#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>


void shell_print (const char *string);
void prompt(void);
void line(char *command, size_t size);

/*string function*/
int _strlen(char *s);
char *_strdup(char *str);

#endif
