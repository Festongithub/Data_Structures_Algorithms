#include <stdio.h>
#include <stdlib.h>


# define  SIZE  5

int top = - 1, inp_array[SIZE];

void push()
{
	int x;

	if(top == SIZE - 1)
	{
		printf("Overflow");
	}
	else
	{
		top = top +1;
		inp_array[top] = x;
	}
}

void pop()
{
	if(top == -1)
	{
		printf("Stack underflow");
	}
	else
	{
		top = top -1;
	}
}

void show()
{
	if (top == -1)
	{
		printf("Undeflow");
	}
	else 
	{
		for(int i = top i >= 0; --i)
		{
			printf("%d\n", inp_array[i]);
		}
	}
}

