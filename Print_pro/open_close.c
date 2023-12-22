#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
int main()
{
	DIR *d;
	d = opendir("Print_pro" );

	if (d == NULL)
	{
		perror("Error opening directory");
	}
	exit(EXIT_FAILURE);

	closedir(d);
	return (0);
}
