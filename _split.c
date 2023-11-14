#include "shell.h"

/**
 * _split - Splits a string into tokens
 * @user_input: The String to be split
 *
 * This functions takes a string @user_input and splites it into tokens
 * based on the defined delimiters in the DELIM variable (" \"\n\t\r").
 *
 * Return: An array of tokens or NULL on error.
 */
char **_split(char *user_input)
{
	char **token = NULL;
	int token_num = 0, i = 0;
	char *token_path = _strdup(user_input), *temp_token;
	char *DELIM = " \"\n\t\r";

	if (token_path != NULL)
	{
		token_num++;
		temp_token = strtok(NULL, DELIM);
	}
	token = malloc(sizeof(char *) * (token_num + 1));
	if (token == NULL)
	{
		perror("error allocating memory");
		free(token_path),
		exit(EXIT_FAILURE);
	}
	token_path = _strdup(user_input);
	temp_token = strtok(token_path, DELIM);

	for (i = 0; i < token_num; i++)
	{
		token[i] = _strdup(temp_token);
		temp_token = strtok(NULL, DELIM);
	}
	token[token_num] = NULL;

	free(token_path);
	return (token);
}
