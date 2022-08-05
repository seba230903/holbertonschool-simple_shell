#include "main.h"
/**
 * checkaccess - check if the path is a valid path
 * @path: the full path to check the access
 * Return: 0 if you can not access or 1 if you can access
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
