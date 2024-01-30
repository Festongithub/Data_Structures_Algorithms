#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct list {
	char value;
	struct list* next;
};

typedef  struct list list_t;

void printList(list_t *head)
{
	list_t *tmp = head;

	while (tmp != NULL)
	{
		printf("%c->", tmp->value);
		tmp = tmp->next;
	}

	printf("\n");
}

int main()
{
	list_t l1, l2, l3, l4;
	list_t *head;

	l1.value = 'A';
	l2.value = 'B';
	l3.value = 'C';
	l4.value = 'D';


	head = &l4;
	l4.next = &l3;
	l3.next = &l2;
	l2.next = &l1;
	l1.next = NULL;
	printList(head);

	return (0);
}
