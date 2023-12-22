#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <time.h>
#include <sys/types.h>

int main()
{
	char fl[] = "t.c", sln[] = "t.link";
	struct stat inf;
	int fd;

	if ((fd = creat(fl, S_IWUSR)) < 0 )
	{
		perror("create() error");
	}
	else
	{
		close(fd);
		if(link(fl, sln) != 0)
		{
			perror("link() error");
		}
		else
		{
			if(lstat(sln, &inf) !=0)
			{
				perror("lstat() error");
			}
			else
			{
				puts("We are getting below information from lstat() for a file");
				printf("File links : %d\n", (int) inf.st_nlink);
				printf("file uid :%d\n", (int) inf.st_uid);
				printf("File inode : %d\n", (int) inf.st_ino);
				printf("File gid : %d\n", (int) inf.st_gid);
				printf("File dev id : %d\n", (int) inf.st_dev);
				printf("File mode : %08x\n", inf.st_mode);
			}
			unlink(sln);
		}
		unlink(fl);
	}
	return (0);
}
