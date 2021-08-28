// Linked list implementation in c

#include <stdio.h>
#include <stdlib.h>

// Create node
struct node {
    int value;
    struct node *next;
};

// Print Linked list value
void printLinkedlist(struct node *p) {

    printf("Linked List: ");
    while (p != NULL) {
        printf("%d ", p -> value);
        p = p -> next;
    }
    printf("\n");
}

int main() {

    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    // Allocate memory
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    one -> value = 1;
    two -> value = 2;
    three -> value = 3;

    // Connect nodes
    one -> next = two;
    two -> next = three;
    three -> next = NULL;

    head = one;
    printLinkedlist(head);

}
