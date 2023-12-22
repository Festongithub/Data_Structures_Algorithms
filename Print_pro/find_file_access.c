#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

extern int errno;

int  main(int argc, const char *argv[])
{
	int fd = access("test.sh", (R_OK | W_OK) & X_OK);

	if (fd == -1 )
	{
		printf("Error Number: %d\n", errno);
		perror("Error Descriptiion: ");
	}
	else
	{
		printf("No error\n");
	}
	return (0);
}
