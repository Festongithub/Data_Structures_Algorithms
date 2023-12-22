#include <stdio.h>
#include <time.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <sys/types.h>

int main (int argc , char *argv[])
{
	struct stat a;

	if (argc != 2)
	{
		fprintf(stderr, "Please enter filename as 1st argument: %s\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if (lstat(argv[1], &a) == 1)
	{
		perror("some error for lstat");
		exit(EXIT_FAILURE);
	}

	printf("so the input file type is ==> ");

	if ((a.st_mode & S_IFMT) == S_IFDIR)
	{
		printf("Directory\n");
	}
	else if ((a.st_mode  & S_IFMT) == S_IFCHR)
	{
		printf("FIFO/PIPE\n");
	}
	else if ((a.st_mode & S_IFMT) == S_IFBLK)
	{
		printf("Block device\n");
	}
	else if ((a.st_mode & S_IFMT)== S_IFREG)
	{
		printf("Regular\n");
	}
	else if ((a.st_mode  & S_IFMT) == S_IFSOCK)
	{
		printf("Socket\n");
	}
	else if ((a.st_mode & S_IFMT) == S_IFLNK)
	{
		printf("symbolic link\n");
	}
	else
	{
		printf("Unknown\n");
	}

	printf("No. of link list: %d\n", (long) a.st_nlink);
	printf("Ownership: UID=%ld GID=%ld\n" , (long) a.st_uid, (long) a.st_gid);
	printf("inode no %ld\n", (long) a.st_ino);
	printf("Mode: %lo (octal)\n", (unsigned long) a.st_mode);
	printf("Last change time is : %s", ctime(&a.st_ctime));
	printf("Last access time is: %s", ctime(&a.st_ctime));
	printf("Last changing the content of the file time is: %s", ctime(&a.st_mtime));
	printf("Preferd length of blocks of giving I/O: %ld bytes\n", (long) a.st_blksize);
	printf("The length of the file is %ld bytes\n", (long long) a.st_size);
	printf("Counting the no.of used blocks %lld\n", (long long) a.st_blocks);

	exit(EXIT_SUCCESS);
}
