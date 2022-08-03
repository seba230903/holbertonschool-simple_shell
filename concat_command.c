#include "main.h"
/**
 *
 *
 */
char **concat_command (char **path_list, char *command)
{
	int i = 0, len = 0;
	int len2 = _strlen(command);
	int t_len = 0;

	for (i = 0; path_list[i] != NULL; i++)
	{
		len = _strlen(path_list[i])
		t_len = len + len2 + 2;
		path_list[i] = _realloc(path[i], t_len);
		_strcat(path_list[i], "/");
		_strcat(path_list[i], command);
	}

	return (path_list);

}
