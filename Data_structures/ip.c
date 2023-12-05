#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 3, j = 7;
	const  int * const ip = &i;
	ip = &j;
	printf("Address of j is : %p\n", ip);
}
