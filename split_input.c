#include "shell.h"

/**
  *split_input - function that splits strings to tokens
  *@user_input: string of user input
  *
  *Return: An array of tokens or NULL on error.
  */
char **split_input(char *user_input)
{
	char **token = NULL;
	int token_num = 0, i = 0;
	char *token_path = _strdup(user_input), *temp_token;
	char *DELIM = " \"\n\t\r";

	if (token_path != NULL)
	{
		temp_token = strtok(token_path, DELIM);
		while (temp_token != NULL)
		{
			token_num++, temp_token = strtok(NULL, DELIM);
		}
	}
	token = malloc(sizeof(char *) * (token_num));
	if (token == NULL)
	{
		perror("error allocating memory");
		free(token), free(token_path), exit(EXIT_FAILURE);
	}
	token_path = _strdup(user_input), token[i] = _strdup(temp_token);

	if (temp_token == NULL)
	{
		free(token_path);
		return (NULL);
	}
	while (temp_token != NULL)
	{
		temp_token = strtok(NULL, DELIM);
		if (token[i] == NULL)
		{
			perror("error allocating mem"), exit(EXIT_FAILURE);
		}
		i++;
		token[i] = _strdup(temp_token);
	}
	token[token_num] = NULL;

	free(token_path);
	return (token);
}
