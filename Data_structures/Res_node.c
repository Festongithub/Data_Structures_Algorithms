#include <stdio.h>

int factorial(int n)
{
	int res;
	int i;
	res = 1;
	i = 1;
	while( i <= n)
	{
		res = res * i;
		i++;
	}
	return (res);
}

int main(void)
{
	int f;
	f = factorial(98);
	printf("98! = %d\n", f);
	return (0);
}
