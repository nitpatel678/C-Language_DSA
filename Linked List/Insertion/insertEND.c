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

// struct Node *insert_at_First(struct Node* head, int data)
// {
//     struct Node*ptr;
//     ptr = (struct Node*)malloc(sizeof(struct Node));

//     ptr->next = head;
//     ptr->data = data;
//     return ptr;

// };

struct Node *inset_END(struct Node *head, int data)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    ptr->data = data;

    while (p->next != NULL)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = NULL;
    return head;
}

int main()
{
    struct Node *first;
    struct Node *second;
    struct Node *third;

    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    first->data = 45;
    first->next = second;

    second->data = 56;
    second->next = third;

    third->data = 57;
    third->next = NULL;

    display_node(first);
    first = inset_END(first, 343);
    display_node(first);

    return 0;
}