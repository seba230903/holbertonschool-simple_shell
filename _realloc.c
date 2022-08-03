#include "main.h"
/**
 *
 *
 *
 */
char *_realloc (char *dest, int size)
{
	int len = _strlen(dest);
	int i = 0;
	char * reallocated_str;

	reallocated_str = malloc(sizeof(char) * size);
	if (!reallocated_str)
		return (NULL);
	for (i = 0; reallocated[i] != '\0'; i++)
	{
		reallocated_str[i] = dest[i];
	}
	return (reallocated_str);
}
