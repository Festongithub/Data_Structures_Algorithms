#include <stdio.h>

/**
 * define the size of the array 
 */

# define N 5

int queue[N];
int front = - 1;
int rear = -1;

void enqueue (int x)
{
	if (rear == N -1)
	{
		printf("Overflow");
	}
	else if (front == -1 && rear == - 1)
	{
		front = rear = 0;
		queue[rear] = x;
	}
	else 
	{
		rear++;
		queue[rear] = x;
	}
}


void dequeu()
{
	if (front == -1 && rear == - 1)
	{
		printf("======> Underflow Condition");
	}
	else if ( front == rear)
	{
		front = rear = -1;
	}
	else 
	{
		printf("====> %d\n", queue[front]);
		front++;
	}
}

void display()
{
	if (front == -1 && rear == -1)
	{
		printf("===> Queue is empty");
	}
	else 
	{
		for (int i = front; i < rear + 1; i++)
		{
			printf("%d", queue[i]);
		}
	}
}


void peak()
{
	if (front == - 1 && rear == -1)
	{
		printf("Queue is empty");
	}
	else
	{
		printf("%d\n", queue[front]);
	}
}
