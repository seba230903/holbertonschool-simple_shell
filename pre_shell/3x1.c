#include <stdio.h>
#include <unistd.h> // include pid_t struct and fork, perror
#include <sys/wait.h> // include wait
#include <stdlib.h> //include exit
/**
 *
 *
 *
 */
int main(void)
{
	pid_t pid;
	int status;
	char *path = "/bin/ls";
	char *op[] = {"ls", "-l", "/tmp", NULL};
	char *env[] = {"", NULL};

	printf("Before fork\n");
	pid = fork(); // create a child processof the actual process

	if (pid == -1)
	{
		perror("ops! could not create the child process XD\n");
		return(1);
	}
	if (pid == 0) // child code
	{
		printf("This is the code of the child\n");
		
		printf("\nexecuting execve\n\n");
		printf("==============================================\n\n");
		if (execve(path, op, env) == -1)
		{
			printf("execve fail\n");
		}
		else
		{
		}
		return(status);
	}

//if you dont have a wait in the parent, the processes run at the sme time

	else // father code;
	{
		wait(&status); //WAIT WAIT WAIT WAIT WAIT WAIT WAIT WAIT

		printf("\n===========================================\n\n");

		printf("Any Other ID than -1 o or 0 is the parent\n");
		printf("\nWith the wait, first executes the child\n");

	}

}
