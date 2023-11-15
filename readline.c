#include "shell.h"

char **read_input(char **argv, int *sh_mode)
{
	char *user_str = NULL;
	char **token_array = NULL;
	ssize_t str_read;
	size_t str_buffsize;
	int i = 0;

	signal(SIGINT, signal_handler);
	str_read = getline(&user_str, str_buffsize, stdin);
	if(str_read < 0)
	{
		free(user_str);
		if (sh_mode == 1)
			write(STDOUT_FILENO, "\n", 1);
		exit(EXIT_SUCCESS);
	}
	while (user_str[i])
	{
		if (user_str[0] != '#' && user_str[i] ==
				'#' && user_str[i - 1] != ' ')
			break;
		if (user_str[i] == '#')
			user_str[i] = '\0';
	}
	token_array = split_input(user_str);
	/*modify split_input func to free token when array fails*/
	if (token-array == NULL)
	{
		free(user_str), free_tokenarr(token_array);
		perror(argv[0]);
		exit(EXIT_FAILURE);
	}
	free(user_str);
	return (token_array);
}
