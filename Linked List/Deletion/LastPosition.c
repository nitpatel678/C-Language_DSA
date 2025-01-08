#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void display_node(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *delete_last(struct Node *head)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr = head;
    while (ptr->next->next != NULL){
        ptr = ptr->next;
    }
    struct Node * q = (struct Node *)malloc(sizeof(struct Node));
    q = ptr->next;
    ptr->next = NULL;
    
    free(q);

    return head; 
}

int main()
{
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    first->data = 45;
    first->next = second;

    second->data = 56;
    second->next = third;

    third->data = 57;
    third->next = fourth;

    fourth->data = 58;
    fourth->next = NULL;

    printf("Linked list before deletion : \n");
    display_node(first);

    first = delete_last(first);

    printf("Linked list after deletion : \n");
    display_node(first);

    return 0;
}