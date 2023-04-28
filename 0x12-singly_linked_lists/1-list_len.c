#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int list_len(struct node *head) {
    int len = 0;
    struct node *current = head;

    while (current != NULL) {
        len++;
        current = current->next;
    }

    return len;
}

int main() {
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printf("Length of the linked list is %d\n", list_len(head));

    return 0;
}
