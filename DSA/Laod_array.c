#include <stdio.h>

int main()
{
	int nums[3] = {};
	int i;

	for ( i = 0; i < 3; i++)
	{
		printf("nums[%d] = %d\n", i, nums[i]);
	}
	printf("Inserting elements..\n");
	printf("The array elemets after insertion: \n");
	for (i = 0; i < 3; i++)
	{
		nums[i] = i +2;
		printf("nums[%d] = %d\n", i, nums[i]);
	}


	int marks[100] = {}, j;
	for (j = 0 ; j < 100; j++)
	{
		printf("marks[%d] = %d\n", j , marks[j]);
	}
	printf("Inserting marks..\n");
	printf("Marks inserted : \n");
	for ( j = 0 ; j < 100; j++)
	{
		marks[j] = j + 20;
		printf("marks[%d] = %d\n", j, marks[j]);
	}
	return (0);
}
