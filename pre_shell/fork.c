#include <stdio.h>
#include <unistd.h> // include pid_t struct and fork, perror
/**
 *
 *
 *
 */
int main(void)
{
	pid_t pid;

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
	}

//if you dont have a wait in the parent, the processes run at the sme time

	else // father code;
	{
		printf("Any Other ID than -1 o or 0 is the parent\n");
	}

}
