#include <stdio.h>

int Add(int a, int b)
{
	return a + b;
}
void A()
{
	printf("Hello");
}

void B( void (*ptr)())
{
	ptr();
}

int main()
{
	// pointer to function should take 
	// (int, int) as arguments/parameters
	// return it
	int  c;
	int (*p) (int , int);
	p = &Add; // Address of Add
	c = (*p)(34, 56);
	printf("%d\n", c);
	printf("Address is %p\n", p);
	B(A);
}
