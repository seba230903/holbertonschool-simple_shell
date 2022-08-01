#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
char** stok(char *str, const char *del)
{
	int i = 0, j = 0, k = 0, count = 1;
	char **str_path;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; del[j]; j++)
		{
			if (str[i] == del[j])
			{
				count++;
			}
		}
	}

	str_path = malloc(sizeof(char *) * count);

	if (!str_path)
		return (NULL);

	for (k = 0; k <= count; k++)
	{
		j = 0;
		i = 0;
		for (; str[i] && str[i] != del[0]; i++)
			;

		str_path[k] = malloc (sizeof(char *) * (i + 1));

		if (!(str_path[k]))
		{
			for (; k >= 0; k--)
			{
				free(str_path[k]);
			}
			free(str_path);
			return (NULL);
		}
		for (; str[j] && str[j] != del[0]; j++)
		{
			str_path[k][j] = str[j];
		}
		str_path[k][j] = '\0';
	}

	str_path[k] = NULL;

	return (str_path);
}

int main(void)
{
	char *del = ":";
	char *str = "hola:sebita:estas:sebadito:por:q:si:a:na:ze";
	char **a_of_str;
	int i = 0;

	a_of_str = stok(str, del);
	
	for (; a_of_str[i]; i++)
	{
		printf("VALUE OF STR [%d]: %s \n", i, a_of_str[i]);
	}
	return (1);
}
