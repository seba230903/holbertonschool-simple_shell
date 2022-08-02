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
	int i = 0, j = 0, k = 0, count = 1, l = 0;
	char **str_path;

	for (i = 0; str[i]; i++)
		if (str[i] == del[0])
			count++;
		
	str_path = malloc(sizeof(char *) * count + 1);

	if (!str_path)
		return (NULL);
	i = 0;
	j = 0;
	
	for (k = 0; k < count; k++)
	{
		for (; str[i] && str[i] != del[0]; i++)
			;

		str_path[k] = malloc (sizeof(char) * (i + 1));

		if (!(str_path[k]))
		{
			for (; k >= 0; k--)
			{
				free(str_path[k]);
			}
			free(str_path);
			return (NULL);
		}

		for (; j <= i; j++, l++)
		{
			str_path[k][l] = str[j];
		}
		str_path[k][l] = '\0';

		j++;
		i++;
		l = 0;

	}

	str_path[k] = NULL;

	return (str_path);
}

int main(void)
{
	char *del = ":";
	char *str = "hola:como:estas:hdp:xd";
	char **a_of_str;
	int i = 0;

	a_of_str = stok(str, del);
	
	for (; a_of_str[i]; i++)
	{
		printf("VALUE OF STR [%d]: %s \n", i, a_of_str[i]);
	}
	return (1);
}
