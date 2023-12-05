#include <stdio.h>
#include <stdlib.h>

/**
 * create a node in c using the struct data type
 */

struct Node {
	int data;
	struct Node *link;
};
int main()
{
	/**
	 * typecasting
	 * head becomes pointer to a node
	 */
	struct Node *head =  malloc(sizeof(struct Node)); 
	head ->data = 45;
	head->link = NULL;

	struct Node *current = malloc(sizeof(struct Node));
	current -> data = 98;
	current -> link = NULL;
	head->link = current ;

	current = malloc(sizeof(struct Node));
	current -> data = 90;
	current->link = NULL;

	head->link -> link = current;

	printf("%d\n", current->data);
	return (0);
}
