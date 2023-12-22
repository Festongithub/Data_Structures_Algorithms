#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

void insertAtFront(struct node **head_ref, int new_data)
{
	struct node *new_node = (struct node *)malloc(sizeof(struct node));
	new_node->data = new_data;
	new_node->next =(*head_ref);
	(*head_ref) = new_node;
}

void printList(struct node *p)
{
	while (p != NULL)
	{
		printf("%d", p->data);
		p = p->next;
	}
	printf("\n");
}

int main()
{
	struct node *head = NULL;

	insertAtFront(&head, 1);
	insertAtFront(&head, 3);

	printf("After inserting nodes at their front:");
	printList(head);
	return (0);
}
