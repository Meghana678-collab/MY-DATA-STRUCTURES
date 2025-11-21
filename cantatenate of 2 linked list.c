// C program to concat two singly
// linked lists

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

// Function to concatenate two linked lists
struct Node *concat(struct Node *head1, 
                    struct Node *head2) {

    if (head1 == NULL)
        return head2;

    // Find the last node of the first list
    struct Node *curr = head1;
    while (curr->next != NULL){
        curr = curr->next;
    }

    // Link the last node of the first list
    // to the head of the second list
    curr->next = head2;

    // Return the head of the concatenated list
    return head1;
}

void display(struct Node *head) {
    struct Node *curr = head;
    while (curr != NULL){
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}

struct Node *createNode(int x) {
    struct Node *newNode =
      (struct Node *)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

int main() {
  
    // Create the first linked list: 1 -> 2 -> 3
    struct Node *head1 = createNode(1);
    head1->next = createNode(2);
    head1->next->next = createNode(3);

    // Create the second linked list: 4 -> 5
    struct Node *head2 = createNode(4);
    head2->next = createNode(5);

    struct Node *concatHead = concat(head1, head2);
    display(concatHead);

    return 0;
}
