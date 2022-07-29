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
		return(status);
	}

//if you dont have a wait in the parent, the processes run at the sme time

	else // father code;
	{
		wait(&status); //WAIT WAIT WAIT WAIT WAIT WAIT WAIT WAIT
		printf("Any Other ID than -1 o or 0 is the parent\n");
		printf("\n With the wait, first executes the child\n");

	}

}
