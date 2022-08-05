#include "main.h"
/**
 * call_child - execute fork, execve and wait
 * @path: the full path to execute the command
 * @input: all the geted inputs
 * @path_access: if the input[0] is a full path or not
 * Return: void
 */
void call_child(char *path, char **input, int path_access)
{
	int status;
	pid_t pid;

	if (path != NULL && input != NULL)
	{
		pid = fork();

		if (pid == -1) /* ERROR IN FORK */
		{
			perror("ERROR IN FORK");
		}
		if (pid == 0) /* CHILD CODE */
		{
			/* EXECVE - EXECUTING THE SCRIPT*/
			if (path_access == 0)
			{
				if (execve(path, input, environ) == -1)
					perror("ERROR IN EXECVE");
			}
			if (path_access == 1)
			{
				if (execve(input[0], input, environ) == -1)
					perror("ERROR IN EXECVE");
			}
		}
		else /* WAITS UNTIL THE CHILD PROCCESS HAS FINISHED */
		{
			wait(&status);
		}
	}
	else
	{
		perror("FUNCTION CALL_CHILD FAIL IN ARGUMENTS");
	}
}
