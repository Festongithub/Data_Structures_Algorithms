#include <stdio.h>
#include <stdlib.h>


void segf(void)
{
	char  str[] =  "Holberton";
	str[0] = 's';

	printf("%s\n",str);
}

int main()
{
	int n;
	char c;
	double d;
	float f;
	unsigned int i;
	int ten = 10;
	malloc(ten);
	segf();
	printf("i is : %d bytes\n", sizeof(i));
	printf("n is :%d bytes\n", sizeof(n));
	printf("c is : %d bytes\n", sizeof(c));
	printf("d is : %d bytes\n", sizeof(d));
	printf("f is : %d bytes\n", sizeof(f));
	return (0);
}
