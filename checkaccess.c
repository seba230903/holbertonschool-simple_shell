#include "main.h"
/**
 *
 *
 *
 */
char *checkaccess(char **path_list)
{
	int i = 0;

	for (i = 0; path_list[i]; i++)
	{
		if (access(path_list[i], F_OK) == 0)
		{
			return (path_list[i]);
		}
	}
	return (NULL);
}
