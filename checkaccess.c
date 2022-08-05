#include "main.h"
/**
 *
 *
 *
 */
int checkaccess(char *path)
{
	if (!path)
		return (0);
	if (access(path, F_OK) == 0)
	{
		return (1);
	}
	return (0);
}
