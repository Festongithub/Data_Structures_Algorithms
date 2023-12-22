#include <stdio.h>
#include <string.h>

int shift_left(int a, int b)
{
	printf("%d\n", a << b);
}
int main()
{
	shift_left(98, 67);
}
