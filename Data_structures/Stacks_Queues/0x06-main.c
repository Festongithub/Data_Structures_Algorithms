#include <stdio.h>
#include <stdlib.h>

#define NUM 5

int main()
{
	int sets[NUM];
	int front = -1;
	int rear = -1;

	printf("%d\n", sizeof(sets));

	for (front = 1 ; front < sizeof(sets) - 1; front++)
	{
		printf("%d\n", front);
	}

	for (rear = 1; rear < sizeof(sets); rear--)
	{
		printf("%d\n", rear);
	}
	return (0);
}
