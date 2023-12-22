#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char *av[] = {"bin/ls", "-l",  "/usr/", NULL};
	printf("Before execve\n");
	if (execve(av[0], av, NULL) == -1)
	{
		perror("Error:");
	}
	printf("After execve\n");
	return (0);
}
