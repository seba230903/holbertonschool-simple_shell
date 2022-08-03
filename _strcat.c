#include "main.h"
/**
 *
 *
 *
 */
char *_strcat(char *dest, char *src)
{
	int lenght;
	int lenght2;
	int lenght_t;
	int i = 0;

	for (lenght = 0; dest[lenght] != '\0'; lenght++)
		;
	for (lenght2 = 0; src[lenght2] != '\0'; lenght2++)
		;
	lenght_t = lenght + lenght2;
	for (i = 0; lenght_t > lenght; lenght++, i++)
	{
		dest[lenght] = src[i];
	}
	return (dest);
}
