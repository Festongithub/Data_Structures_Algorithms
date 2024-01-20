#include <stdlib.h>
#include <stdio.h>

typedef struct node {
    int value;
    struct node *next;
} node;

void printlist(struct node *head)
{
    struct node *temp  = head;

    while (temp != NULL)
    {
        printf("%d->", temp->value);
        temp = temp->next;
    }
    printf("\n");
}

int main ()
{
    struct node n1, n2, n3;
    struct node *head;

    n1.value = 45;
    n2.value = 35;
    n3.value = 25;

    head = &n3;
    n3.next = &n2;
    n2.next = &n1;
    n1.next = NULL;

    printlist(head);
}