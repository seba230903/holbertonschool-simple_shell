#include "main.h"
/**
 *
 *
 *
 */
void call_child(char *path, char **input)
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
			if (execve(path, input, environ) == -1)
			{
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
