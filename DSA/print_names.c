#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
	char data[100];
	struct Node* next;
}

struct Node* createNode(char* data) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	if (newNode != NULL) {
		strcpy(newNode->data, data);
		newNode->next = NULL;
	}
	return newNode;
}

void insertAtBeginning(struct Node** headref, char* data)
{
	struct Node* newNode = createNode(data);
	if (newNode != NULL)
	{
		newNode->next = *headref;
		*headref = newNode;
	}
}

void printList(struct Node* head) {
	struct Node * current = head;
	while (current != NULL)
	{
		printf("%s\n", current->data);
	}
}

