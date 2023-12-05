#include <stdio.h>

/**
 * main - checks the code
 * @ptr: pointer 
 * @pptr: pointer to address
 *
 * Return:  Always  0
 */

int main(void)
{
	int var;
	int *ptr;
	int **pptr;

	var = 3000;
	ptr = &var;
	pptr = &ptr;
	printf("Value of var = %d\n", var);
	printf("Value at *ptr = %d\n", *ptr);
	printf("value  at **pptr = %d\n", **pptr);
	printf("Addres at *ptr = %p\n", *ptr);
	printf("Address at **pptr =  %p\n", **pptr);
	return (0);
}
