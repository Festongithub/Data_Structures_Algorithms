#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main( int argc, char* argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] : %s\n", i, argv[i]);
	}
	int res = 1;
	for ( i = 1 ; i < argc; i++)
	{
		int x  = strtol(argv[i], NULL,  10);
		res = res  * x;
	}
	printf("Multiplication result is %d\n", res);

	return (0);
}
