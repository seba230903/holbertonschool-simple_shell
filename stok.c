#include "main.h"
/**
 *
 *
 *
 *
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
 *
 *
 *
 */
char **stok(char *str, const char *del)
{
	char **array = NULL;
	int i = 0, count;
	char *str_dup;
	char *actual_str = NULL;

	count = count_argument(str, del);
	array = malloc(count + 1);

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
	return (array);
}
