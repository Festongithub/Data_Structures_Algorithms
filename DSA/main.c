#include <stdlib.h>
#include <stdio.h>

typedef struct list_s
{
	int data;
	struct list_s *next;
} list_s;
void printlist(struct list_s *head)
{
	struct list_s *tmp = head;

	while (tmp != NULL)
	{
		printf("%d", tmp->data);
	}
	printf("\n");
}
int main()
{
	struct list_s l1, l2, l3, l4;

	struct list_s *head;

	l1.data = 456;
	l2.data = 678;
	l3.data = 789;
	l4.data = 978;

	head = &l1;

	l2.next = &l3;
	l3.next = &l4;
	l4.next = NULL;
	printlist(head);
}

