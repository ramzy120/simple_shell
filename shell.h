#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <sys/wait.h>

/* Printing functins */
void shell_print (const char *string);
void prompt(void);
void line(char *command, size_t size);
void execute_command(char *command);

/* String functions */
int _strlen(char *s);
char *_strdup(char *str);

/* Parser functions */
char **_split(char *user_input);
#endif
