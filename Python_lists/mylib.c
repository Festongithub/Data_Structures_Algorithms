#include <stdio.h>
#include  "Python.h"

void hello(void)
{
	printf("Hello world\n");
}

void printsum(int a, int b)
{
	int c = a * b;
	printf("Product is  %d\n", c);
}

void multiply(int arr[0])
{
	int *ptr; 
	ptr = &arr[0];
	printf("The value of the array is %d\n", ptr);
	printf("The address of the array is %p\n", *ptr);
}

void print_list(PyObject *list)
{
	printf("Hello List!\n");
}
