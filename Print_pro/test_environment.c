#include <stdio.h>
#include <stdlib.h>
int main()
{
	const char *s  = getenv("HOME");
	printf("HOME : %s\n", s);
	setenv("HOME" , "now", 1);
	printf("New Home=%s\n", s);
	return (0);
}
