#include "main.h"
/**
 * main - Run the shell
 *
 * Return: 0 in success
 */
int main(void)
{
	int i = 0, path_access = 0;
	size_t len = 0;
	char *buf = NULL;
	char *path = NULL;
	char **path_list = NULL;
	char **input = NULL;
	char *f_path = NULL;

	while (1)
	{
		printf("cisfun$ ");

		if (getline(&buf, &len, stdin) == -1)
			return (1);
		/* REMOVE THE BLANCK-LINE */
		buf = strtok(buf, "\n");
		/* GETTING THE PATH */
		path = getpath("PATH");

		/* DIVIDE THE BUF IN A ARRAY OF STRING */
		input = stok(buf, " ");

		/* DIVIDE THE PATH VAIABLE BY DIRECTORIES */
		path_list = stok(path, ":");

		path_access = checkpath(input[0]);

		if (path_access == 0)
		{
			for (i = 0; path_list[i]; i++)
			{
				f_path = concat_command(path_list[i], input[0]);
				if (checkaccess(f_path) == 1)
					break;
			}
		}
		call_child(f_path, input, path_access);
	}
}
