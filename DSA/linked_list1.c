#include <stdio.h>
#include <stdlib.h>
struct node 
{
	int data;
	struct node *next;
};
int main()
{
	int a[1];
	for (int i = 0 ; i < 1; i ++)
	{
		printf("%d\n",i);
	}
	printf("The size of a is : %d\n", sizeof(a));
	return (99);
}
