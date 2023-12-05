#include <stdio.h>
#include <stdlib.h>

/**
 * node creation  in linked lists
 */

struct Node {
	int data;
	struct Node *link;
};

int main()
{
	struct Node * head = malloc(sizeof(struct Node));
	head -> data = 45;
	head->link = current;

	struct Node *current = malloc(sizeof(struct Node));
	current->data = 98;
	current->link = head;
	printf("%d\n", current->link);


	return (0);
}
