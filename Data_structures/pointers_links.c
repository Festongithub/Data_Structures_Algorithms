#include <stdio.h>

void minMax(int arr[], int len, int *min, int *max)
{
	*min = *max = arr[0];
	int i;
	for(i = 1; i < len; i++)
	{
		if(arr[i] > *max)
			*max = arr[i];
		if(arr[i] < *min)
			*min = arr[i];
	}
}

void findArea(int rectangle, int length, int width)
{
	if(rectangle < length)
	{
		printf("%d\n", width + rectangle);
	}
	else
	{
		printf("Area is : %d\n", width + length);
	}
}

int checksum(int a, int b)
{
	printf("%d\n", a*b);
}
int chscksub(int *a, int *b)
{
	if(*a < 0)
	{
		printf("error\n");
	}
	else
	{
		printf("%d\n", *a + *b);
	}
}

int main()
{
	int a[] = {23, 45, 6, 88, 98, 1000, 6, 32, 12,890};
	int min, max;
	int len = sizeof(a)/sizeof(a[0]);
	minMax(a, len, &min, &max);
	printf("Minimum value is: %d and maximum value is %d\n", min, max);
	findArea(456, 78, 890);
	checksum(678, 890);

	int *a = 789;
	int *b = 890;

	chscksub(*a, *b);
	return (0);
}
