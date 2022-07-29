#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
char*** stok(char *str, const char *del)
{
	char ***array_of_str;
	char *str_cp = strdup(str);
	int i = 0, j = 0, k = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == del[0])
		{
			k++;
		}
	}

	array_of_str = malloc(sizeof(char *) * k);

	if(!array_of_str)
		return (NULL);

	str_cp = strtok(str_cp, del);
	i = 0;
	while (str_cp)
	{
		array_of_str[i] = malloc(sizeof(char *) * strlen(str_cp));
		if (!array_of_str[i])
		{
			for (;i != 0; i--)
			{
				free(array_of_str[i]);
				free(array_of_str);
				exit(0);
			}
		}
		for (j = 0; *array_of_str[i][j]; j ++)
		{
			*array_of_str[i][j] = str_cp[j];
		}
		str_cp = strtok(NULL, del);
		i++;
	}

	return (array_of_str);
}
/**
 *
 *
 *
 */
int main(void)
{
	char *str = "Hola:COMO:estas:xd";
	char *del = ":";
	char ***a_str;

	a_str = stok(str, del);

	printf("%s \n", *a_str[0]);
	printf("%s \n", *a_str[1]);
	printf("%s \n", *a_str[2]);
	printf("%s \n", *a_str[3]);

	return (0);
}
