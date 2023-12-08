#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// create a node 
 struct node {
	int data;
	struct node *next;
 };

struct node *head = NULL;
struct node *current = NULL;

void printList() {
	struct node *p  = head;
	printf("\n[");

	while ( p != NULL)
	{
		printf("%d", p->data);
		p = p->next;
	}
	printf("]");
}

void Insertatbegin(int data)
{
	struct node *lk = (struct node *) malloc(sizeof(struct node));
	lk->data = data;
	lk-> next = head;	
	head = lk;
}

void main()
{
	int k=0;

	Insertatbegin(90);
	Insertatbegin(90);
	Insertatbegin(90);
	Insertatbegin(90);
	Insertatbegin(90);
	Insertatbegin(90);

	printList();

}