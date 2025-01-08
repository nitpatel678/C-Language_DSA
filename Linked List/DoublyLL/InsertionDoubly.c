#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

void display_node(struct Node *node)
{
    while (node != NULL)
    {
        printf("Element : %d\n", node->data);
        node = node->next;
    }
}

struct Node *at_empty(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    ptr->prev = NULL;
    ptr->data = data;
    ptr->next = NULL;

    return head;
}

int main()
{
    struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));

    struct Node *third = (struct Node *)malloc(sizeof(struct Node));

    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    first->prev = NULL;
    first->data = 34;
    first->next = second;

    second->prev = first;
    second->next = third;
    second->data = 35;

    third->prev = second;
    third->next = fourth;
    third->data = 36;

    fourth->prev = third;
    fourth->data = 37;
    fourth->next = NULL;

    display_node(first);

    return 0;
}