#include "main.h"
/**
 * checkpath - return if the path is a full path or a relative path
 *
 * @first_input: is the path to check
 * Return: 1 if is a full path or 0 if not
 */
int checkpath(char *first_input)
{
	if (first_input[0] == '/')
		return (1);
	else
		return (0);
}
