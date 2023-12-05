#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x = 5, *ptr = &x;
	*ptr = 789 *  x;
	int y = 890, *p = &y;

	printf("%d\n", *p + *ptr);
	if (*ptr == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", *p - *ptr);
	}
	printf("%d\n", *ptr);
	printf("%d, %d\n", *p , *ptr);

	int i = 890;
	int *r, *s;
	r = &i;
	s = r;
	printf("%d %d\n", *r, *s);
	int sum = *r + *s;
	printf("%d\n", sum, r);
	sum = x + y;
	printf("%d\n", sum);

	return (0);
}
