#include "main.h"
/**
 * free_array - free an array of string
 * @in: is the array of string
 * Return: void
 */
void free_array(char **in)
{
	int i = 0;

	if (in)
	{
		for (i = 0; in[i]; i++)
		{
			free(in[i]);
		}
		free(in);
	}
}
