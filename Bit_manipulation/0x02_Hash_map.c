#include <stdio.h>

void shift_left(int a , int b)
{
	printf("Res is %d\n", a << b);
}

void right_shift(int a, int b)
{
	if (a > 0)
	{
		printf("Res is %d\n", a>> b);
	}
	else 
	{
		printf("Not operable");
	}
}
int main()
{
	int a = -1;
	int b =  1;
	shift_left(a, b);
	right_shift(a, b);
	return (0);
}
