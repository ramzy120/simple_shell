#include "shell.h"

/**
  *split_input - function that splits strings to tokens
  *@user_input: string of user input delimited by DELIM
  *
  *Return: split token or error
  */
char **split_input(char *user_input)
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

	for(i = 0; i < token_num; i++)
	{
		token[i] = _strdup(temp_token);
		temp_token = strtok(NULL, DELIM);
	}
	token[token_num] = NULL;

	free(token_path);
	return (token);
}
