#include "main.h"
/**
 * count_argument - count amount of argument in str
 *
 * @str: is str to tokenize
 * @del: the delimiter of the tokens
 * Return: a count of arguments
 */
int count_argument(char *str, const char *del)
{
	int i = 0, j = 0, count = 1;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; del[j]; j++)
		{
			if ((i > 0) && (str[i] == del[j]) && (str[i - 1] != del[j]))
				count++;
		}
	}
	return (count);
}
/**
 * stok - tokenize str for the delimiter del and save the tokens in an array
 *
 * @str: is a str to tokenize
 * @del: delimiter
 * Return: an array of tokens(strings)
 */
char **stok(char *str, const char *del)
{
	char **array = NULL;
	int i = 0;
	char *str_dup = NULL;
	char *actual_str = NULL;

	array = malloc(1024);

	if (!array)
		return (NULL);

	str_dup = strdup(str);
	if (!str_dup)
	{
		free(array);
		return (NULL);
	}

	actual_str = strtok(str_dup, del);

	for (i = 0; actual_str; i++)
	{
		array[i] = strdup(actual_str);
		actual_str = strtok(NULL, del);
	}
	array[i] = NULL;
	free(str_dup);
	return (array);
}
