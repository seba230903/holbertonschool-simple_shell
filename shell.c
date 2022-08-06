#include "main.h"

/**
 * main - Run the shell
 *
 * Return: 0 in success
 */
int main(void)
{
	int i = 0, path_access = 0, exit_status;
	size_t len = 0;
	char *buf = NULL, *path = NULL, *f_path = NULL;
	char **input = NULL, **path_list = NULL;

	while (1)
	{
		if(isatty(0))
			printf("cisfun$ ");
		if (getline(&buf, &len, stdin) == -1)
		{
			free(buf);
			exit(0);
		}

		buf = strtok(buf,"\n");
		printf("%s", buf);
		path = getpath("PATH");
		input = stok(buf, " ");
		path_list = stok(path, ":");
		path_access = checkpath(input[0]);
		if (path_access == 0)
		{
			for (i = 0; path_list[i]; i++)
			{
				f_path = concat_command(path_list[i], input[0]);
				if (checkaccess(f_path) == 1)
					break;
				free(f_path);
			}
		}

		exit_status = call_child(f_path, input, path_access);
		free_array(input), free_array(path_list);
		free(f_path), free(path);
	}
	return(exit_status);
}
