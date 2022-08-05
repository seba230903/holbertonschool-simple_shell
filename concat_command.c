#include "main.h"
/**
 *
 *
 */
char *concat_command(char *path, char *command)
{
	int i = 0, j = 0, len_path, len_command;
	char *full_path;

	if (!path || !command)
		return (NULL);
	len_path = strlen(path);
	len_command = strlen(command);

	full_path = malloc(len_path + len_command + 2);
	if (!full_path)
		return (NULL);
	for (i = 0; path[i]; i++, j++)
		full_path[j] = path[i];

	full_path[j] = '/';
	j++;

	for (i = 0; command[i]; i++, j++)
		full_path[j] = command[i];

	full_path[j] = '\0';

	return (full_path);
}
