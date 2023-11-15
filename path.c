#include "shell.h"

/**
 * pathvar - returns a pointer to the path variable from environmental var
 * @env: environmental variable
 * Return: char pointer
 */
char *pathvar(char **env)
{
char *pathv = NULL;
int i = 0;

while (env[i])
{
if (_strstr(env[i], "PATH") && env[i][0] == 'P' && env[i][4] == '=')
{
pathv = env[i] + 5; // Set pathv to point after the '='
break;
}
i++;
}

return pathv;
}
