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
       	size_t len = 0;
	char *buf = NULL;
	char *path = "/bin/ls";
	char *op[] = {"ls", "-l", "/tmp", NULL};
	char *env[] = {"", NULL};

	

	while(1)
	{

		printf("$ :");
		getline(&buf, &len, stdin);

		pid = fork(); // create a child processof the actual process
	
		if (pid == -1)
		{
			perror("ops! could not create the child process XD\n");
			return(1);
		}
		if (pid == 0) // child code
		{
			printf("\nexecuting execve\n\n");
			printf("==============================================\n\n");
			if (execve(path, op, env) == -1)
			{
				printf("execve fail\n");
			}
			return(status);
		}

		else // father code;
		{
			wait(&status); //WAIT WAIT WAIT WAIT WAIT WAIT WAIT WAIT
	
			printf("\n===========================================\n\n");
	
			printf("$ :");
		}
	}

}
