#include <stdio.h>

struct node
{
	int data;
	struct node *next;
}

// Bulid two pointers for the queue

struct node *front = 0;
struct node *rear = 0;
 
void enqueue(int x)
{
	struct node  *newnode;

	newnode =(struct node) malloc(sizeof(struct node));
	newnode ->data = x;
	newnode->next = 0;

	if (front == 0 && rear == 0)
	{
		front = rear = newnode;
	}
	else 
	{
		rear->next = newnode;
		rear = newnode;
	}
}

void display()
{
	struct node *tmp;
	if(front == 0 && rear == 0)
	{
		printf("Empty");
	}
	else
	{
		tmp = front;
		while(tmp != NULL)
		{
			printf("%d", tmp->data);
			tmp = tmp->next;
		}
	}
}

void dequeue()
{
	struct node *tmp;

	if(front == 0 && rear == 0)
	{
		printf("Undeflow");
	}
	else 
	{
		printf("%d", tmp->data);
		front = front->next;
		free(tmp);
	}
}

void peak()
{
	if (front == 0 && rear == 0)
	{
		printf("===> Buddy is too empty");
	}
	else 
	{
		printf("===>%d\n", front->data);
	}
}
		tem
