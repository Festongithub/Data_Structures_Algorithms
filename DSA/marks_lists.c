#include <stdio.h>
#include <stdlib.h>

struct node {
	int marks;
	struct node *next;
};

void insertAfter(struct node *prev_node, int new_marks)
{
	if (prev_node == NULL)
	{
		printf("Given node cannot be NULL");
		return;
	}

	struct node * new_node = (struct node*)malloc(sizeof(struct node));
	new_node->marks =new_marks;
	new_node->next = prev_node->next;
	prev_node->next = new_node;
}

void AddAtFront(struct node **head_ref, int new_marks)
{
	struct node *new_node = (struct node*)malloc(sizeof(struct node));

	new_node->marks = new_marks;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

void printMarks(struct  node *p)
{
	while (p  != NULL)
	{
		printf("%d\n", p->marks);
		p = p ->next;
	}
}

int main()
{
	struct  node *head = NULL;

	AddAtFront(&head, 88);
	AddAtFront(&head, 98);
	AddAtFront(&head, 87);
	printf("New marks: ");

	insertAfter(&head, 99);
	insertAfter(&head, 100);
	printf("New marks after insertng: ");

	printMarks(head);
	return (0);
}
