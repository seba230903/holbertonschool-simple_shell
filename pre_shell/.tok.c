/**
 *
 *
 *
 */
**char stok(char *str, char del)
{
	int i = 0, j = 0, k = 0;
	char **str_array;
	char *str_aux;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == del)
		{
			j++;
		}
	}

	str_array = malloc(sizeof(char *) * j + 1);

	if (!str_array)
		return (-1);

	for (i = 0; str[i]; i++)
	{
		for (str[i])
		{
		}
	}

	0123;45678;9
	0123;01234;0


}
