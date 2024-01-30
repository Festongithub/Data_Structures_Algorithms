#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "0x01_print_names"
int main()
{
	struct Node* head = NULL;

	insertAtBeginning(&head, "Hello");
	insertAtBeginning(&head, "World");
	insertAtBeginning(&head, "Linked");
	insertAtBeginning(&head, "List");

	printf("Message is :\n");
	printList(head);
}
