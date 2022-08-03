#include <stdio.h>
/**
 * _strlen - return the size of an string
 * Return: The size
 * @s: is a string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
