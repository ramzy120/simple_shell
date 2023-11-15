#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <errno.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/types.h>

/**
 * struct Built_in - Structure of command and function
 * @cmd: Command to be compared and function called
 * @fnc_cmd: Function to be called when command matches
 */

typedef struct Built_in
{
	char *cmd;
	void (*fnc_cmd)(char **argv, char **env, char **token_array);
} Built_in;

/*builtin function*/
int handle_builtins(char **argv, char **env, char **token_array);
int _atoi(char *s);
void cd_func(char **argv, char **env, char **token_array);
void env_func(char **argv, char **env, char **token_array);
void exit_func(char **argv, char **env, char **token_array);

/*global variable*/
int status;
int cmd_count;
int *mode;

/*void function*/
void shell_print(const char *string);
char **read_input(char **argv, int *sh_mode);
void signal_handler(int signum);
void free_array(char **array_tokens);
void error_msg(int fd, int num_cmd, char *str1, char *c_name, char *err);
#include <sys/wait.h>

/* Printing functins */
void shell_print (const char *string);
void prompt(void);
void line(char *command, size_t size);
void execute_command(char *command);


/* String functions */
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
char *_strdup(char *str);
char *_strstr(char *haystack, char *needle);
char *find_strpath(char *cmd, char *path);
int _strcmp(char *s1, char *s2);

/*parser and path function*/
char **split_input(char *user_input);
char **split_path(char *path_var);
char *pathvar(char **env);

/*path hanlders*/
 void handle_Fpath(char **token_array, char **env, char **argv, int mode);
 void _interactive(char **argv, char **env,
		 int *cmd_count, int *shellmode);
 int handle_missingpath(char *in_path, char **token_array,
		  char **env, int *mode, int *cmd_count, char **argv);
int handle_path(char **argv, char **env, char **token_array,
		int *cmd_count);

/* Parser functions */
char **_split(char *user_input);

#endif
