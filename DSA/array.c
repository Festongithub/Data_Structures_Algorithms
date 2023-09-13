#include <stdio.h>

/**
 * main  - code runs in the main
 * Return : value 0
 */
int main()
{
	// create 2d array
	int arr2d[2] [2] = {23, 45, 67, 89};
	//  accessing the elements
	int ptr;
	ptr = arr2d[0];

	printf("The array value is : %d\n",ptr);
	
	// create a 3d array
	
	int pi[2][2][2] = {12, 23, 34, 56,67,78};

	printf("2D Array: ");

	for(int i = 0; i < 2; i++)
	{
		for(int j =0; j < 2;j++)
		{
			printf("%d", arr2d[i][j]);
		}
	}

	printf("\n3D Array: ");

	for(int i = 0; i < 2;i++)
	{
		for (int j = 0; j< 2;j++)
		{
			for(int k = 0; k < 2;k++)
			{
				printf("%d", pi[i][j][k]);
			}
		}
	}

	return(0);
}
