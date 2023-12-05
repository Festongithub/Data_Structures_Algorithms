#include <stdio.h>

const int MAX = 3;
int main()
{
	int num[]  = {34, 56, 78, 90, 98};
	printf("%d\n", num[2]);
	printf("Address of num is : %x\n", &num[2]);
	printf("Address num[3] is :%x\n", &num[3]);

	int var = 300;
	int *ptr; 
	ptr = &var;

	int sum [] = {13, 45, 67};
	int i;

	for (i = 0; i <  MAX; i++)
	{
		printf("Value of sum[%d] = %d\n", i,  sum[i]);
	}

	printf("%d\n", var);
	printf("%p\n", ptr);
	printf("%d\n", *ptr);
	return (99);
}
