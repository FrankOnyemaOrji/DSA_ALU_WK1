#include <stdio.h>
#include <stdlib.h>

/*
 * Author - Frank Onyema Orji
 * Write a program that will add a new element to the beginning
 * of the a linked list (after testing it with 10 elements generalize it with the input as n)
 */

struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void printList(struct Node* node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
	printf("\n");
}

int main() {
    struct Node* head = NULL;
    push(&head, 5);

    printf("New element added to linked list:\n");
    printList(head);
    return 0;
}

