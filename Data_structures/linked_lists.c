#include <stdio.h> 
#include <stdlib.h>

struct node {
	int value;
	struct node* next;
};
typedef struct node node_t;

void printList(node_t *head)
{
	node_t  *tmp = head;

	while (tmp != NULL)
	{
		printf("%d ->", tmp->value);
		tmp = tmp->next;

	}
	printf("\n");
}

int main()
{
	node_t n1, n2, n3;
	node_t *head;

	n1.value = 67;
	n2.value = 68;
	n3.value = 69;

	// link them to a list
	head = &n3;
	n3.next = &n2;
	n2.next = &n1;
	n1.next = NULL; // so we stop the list
	printList(head);
	return (0);

}
