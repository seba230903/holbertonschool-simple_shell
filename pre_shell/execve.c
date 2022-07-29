#include <stdio.h>
#include <unistd.h>
/**
 *
 *    int execve(const char *pathname, char *const argv[], char *const envp[]);
 *
 *    pathname - the full path of the script
 *    
 *    argv - the arguments passed to the script
 *
 *    envp - the environment variables passed to the script
 *
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};
	char *op_null[] = {"", NULL};

	printf("Before execve \n");
	if (execve(argv[0], argv, NULL) == -1) 
	{
		perror("Error");
	}
	printf("After execve\n");
	return (0);
}
