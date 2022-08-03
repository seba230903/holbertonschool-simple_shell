#include "main.h"
/**
 *
 *
 *
 */
int main(void)
{
	int i = 0, j = 0;
       	size_t len = 0;
	char *buf = NULL;
	char *path;
	char **path_list;
	char **input;

	while(1)
	{
		printf("$ :");

		if (getline(&buf, &len, stdin) == -1)
		{
			return(1);
			/* EOF */
		}
		/* REMOVE THE BLACK-LINE */
		buf = strtok(buf, "\n");

		/* GETTING THE PATH */
		path = getpath("PATH");


		/* DIVIDE THE BUF IN A ARRAY OF STRING */
		input = stok(buf, " ");

		/* DIVIDE THE PATH VAIABLE BY DIRECTORIES */
		path_list = stok(path, ":");

		/* CHECK IF THE PATH IS A FULL PATH OR NOTH*/
		if (checkpath(input[0]) == 0)
		{ /* IF NOT IS A FULL PATH*/

			/* CONCAT THE ( PATH + '/' + COMMAND) */
			path_list = concat_command(path_list, input[0]);
		}

		/** CHECK IF THE COMMAND EXIST **/
		path = checkaccess(path_list);

		/**  FORK AND EXECVE **/
		call_child(path, input);
	}
}
