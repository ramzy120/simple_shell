#include "shell.h"

/**
  *split_input - function that splits strings to tokens
  *@user_input: string of user input
  *
  *This functions takes a string @user_input and splites it into tokens
  *based on the defined delimiters in the DELIM variable (" \"\n\t\r")
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
			token_num++, temp_token = strtok(NULL, DELIM);
	}
	token = malloc(sizeof(char *) * (token_num));
	if (token == NULL)
	{
		perror("error allocating memory");
		free(token_path);
		free(token);
		exit(EXIT_FAILURE);
	}
	free(token_path);
	token_path = _strdup(user_input);
	temp_token = strtok(token_path, DELIM);
	token[i] = _strdup(temp_token);

	while (temp_token != NULL)
	{
		i++;
		temp_token = strtok(NULL, DELIM);
		if (temp_token != NULL)
			token[i] = _strdup(temp_token);
	}
	token[i] = NULL;

	free(token_path);
	return (token);
}
