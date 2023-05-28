#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node *next;
};


void insert(struct Node **headRef, int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = (*headRef);
    (*headRef) = newNode;
}


void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


void bubbleSort(struct Node *head) {
    struct Node *i, *j;
    int swapped;
    for (i = head; i != NULL; i = i->next) {
        swapped = 0;
        for (j = head; j->next != NULL; j = j->next) {
            if (j->data > j->next->data) {
                int temp = j->data;
                j->data = j->next->data;
                j->next->data = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) {
            break;
        }
    }
}


int main() {
    struct Node *head = NULL;
    int n, val;


    printf("Enter n value: ");
    scanf("%d", &n);


    printf("Enter the elements :\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        insert(&head, val);
    }


    printf("Entered elements: ");
    printList(head);


    bubbleSort(head);


    printf("Sorted elements: ");
    printList(head);

    return 0;
}
