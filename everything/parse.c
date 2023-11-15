#include "shell.h"

#define MAX_ARGS 64
#define MAX_ARG_LEN 64

/**
 * parse_command - Parse command line into command and arguments
 * @user_input: The command line input
 *
 * Returns: Array of strings containing command and arguments
 */
char **parse_command(char *user_input) {
    char **args = malloc(MAX_ARGS * sizeof(char *));
    if (args == NULL) {
        return NULL;
    }

    char *token;
    int arg_count = 0;

    token = strtok(user_input, " ");
    while (token != NULL && arg_count < MAX_ARGS - 1) {
        args[arg_count] = _strdup(token);
        if (args[arg_count] == NULL) {
		return NULL;
        }
        arg_count++;
        token = strtok(NULL, " ");
    }
    args[arg_count] = NULL;
    return args;
}
