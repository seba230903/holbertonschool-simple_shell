#include "main.h"
/**
 * getpath - get a environment variable of the extern variable environ
 *
 * @str: the variable to search
 * Return: the environment variable found
 */
char *getpath(char *str)
{
	int i = 0;
	char *str_aux, *aux, *aux_cp;

	for (;environ[i]; i++)
	{
		str_aux = strdup(environ[i]);
		aux = strtok(str_aux, "=");
		if (strcmp(aux, str) == 0)
		{
			aux = strtok(NULL, "=");
			if (aux)
			{
				aux_cp = strdup(aux);
				free(str_aux);
				return (aux_cp);
			}
			free(str_aux);
			return (NULL);
		}
		free(str_aux);
	}
	return (NULL);
}
