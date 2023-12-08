#include <stdio.h>
#include <stdlib.h>
#include "insert_list"

void main()
{
	int k = 0;
	InsertAtbegin(12);
	InsertAtbegin(34);
	InsertAtbegin(89);
	InsertAtbegin(8900);
	printf("Linked list: ");

	printList();
}
