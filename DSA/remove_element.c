#include <stdio.h>

void main()
{
	int LA[] = {34, 56, 78, 90};
	int n = 4;
	int i ;

	printf("The original array elements are: \n");
	for (i = 0; i < n; i++)
	{
		printf("LA[%d] = %d\n", i, LA[i]);
	}

	for ( i = 2; i < n; i++)
	{
		LA[i] = LA[i+1];
		n = n -1 ;
	}
	printf("Array after deltion: \n");
	for (i = 0; i < n; i++)
	{
		printf("LA[%d] = %d\n", i , LA[i]);
	}


	int marks[50] = {}, j;
	j = 49;
	int k;

	printf("The original marks are:\n");

	for (k = 0; k < j; k++)
	{
		printf("Marks[%d] = %d\n", k, marks[k]);
	}
	for( k = 45; k < j; k++)
	{
		marks[k] = marks[k + 1];
		k = k -1;
	}
	printf("marks after deletion:\n");
	for (k = 0; k < j; k++)
	{
		printf("Marks[%d] = %d\n", k, marks[k]);
	}

}
