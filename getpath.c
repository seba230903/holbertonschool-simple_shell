#include "main.h"
/**
 * getpath - get a environment variable of the extern variable environ
 *
 * @str: the variable to search
 * Return: the environment variable found
 */
char *getpath(char *str)
{
	int i, j, k = 0, count = 0;
	char *str_aux;
	int len;

	for (i = 0; environ[i]; i++)
	{
		for (j = 0; str[j]; j++)
		{
			if (str[j] == environ[i][j])
			{
				count++;
			}
		}
		if (count == _strlen(str))
		{
			len = _strlen(environ[i]);
			str_aux = malloc((len - count + 1));

			for (j = (count + 1); environ[i][j]; j++, k++)
			{
				str_aux[k] = environ[i][j];
			}
			str_aux[k] = '\0';
			return (str_aux);
		}
		count = 0;
	}

	return (NULL);
}
