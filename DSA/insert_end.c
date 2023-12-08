#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;

void printList()
{
	struct node *p = head;
	printf("\n[");
	
	while(p != NULL)
	{
		printf("%d", p->data);
		p = p->next;
	}
	printf("]");
}

void insertAtbegin(int data)
{
	struct node *lk = (struct node*) malloc(sizeof(struct node));
	lk->data = data;
	lk->next = head;
	head = lk;
}

void insertatend(int data)
{
	struct node *lk = (struct node*) malloc(sizeof(struct node));
	lk->data = data;
	struct node *linkedlist = head;

	while (linkedlist->next != NULL)
	{
		linkedlist = linkedlist->next;
	}
	linkedlist->next = lk;
}
void main()
{
	int k=0;
	insertAtbegin(12);
	insertAtbegin(22);
	insertatend(30);
	insertatend(22);
	insertatend(80);
	printf("Linked list: ");
	printList();
}
