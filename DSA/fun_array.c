#include <stdio.h>

int main()
{
	int arr[5] = { 10, 20, 30, 40, 50};

	arr[2] = 100 + 200;

	printf("Elements in Array: ");
	{
		int i = i + 3;
		for ( i = 0; i < 5; i++)
		{
			printf("%d\n", arr[i+ 3]);
		}
	}

	char name[7]  = { 'F' , 'e', 's', 't', 'u', 's', '\0'};

	printf("The name is : ");
	int i = 0;
	while (name[i]) 
	{
		printf("%c\n", name[i++]);
	}

	char *ptr = name;

	printf("%p\n", ptr);

	return (0);
}
