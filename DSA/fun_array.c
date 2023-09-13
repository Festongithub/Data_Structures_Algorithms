#include <stdio.h>

void array_decay(int * arr)
{
	printf("size of value in function: %d", sizeof(arr));
}

int main()
{
	int  arr[3];
	printf("Value in main: %d\n", sizeof(arr));

	array_decay(arr);
	return (0);
}
