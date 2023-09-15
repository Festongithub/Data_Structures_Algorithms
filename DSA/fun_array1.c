#include <stdio.h>

void printArray(int arr[])
{
	printf(" Array size : %d\n", sizeof(arr));
	printf("Array elements:");
	for(int i = 0 ; i < 10; i++)
	{
		printf("%d", arr[i]);
	}
}

int main()
{
	int arr[10] = { 45, 67, 89, 54, 32, 21, 78, 98, 32, 12};
	printf("Size of array in main(): %d\n", sizeof(arr));
	printArray(arr);
	return (0);
}
