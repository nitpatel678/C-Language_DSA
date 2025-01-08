// #include<stdio.h>
// #include<stdlib.h>

// struct Node {
//     int data;
//     struct Node * next;
// };

// void display_node(struct Node * ptr){
//     while (ptr != NULL)
//     {
//         printf("Element : %d\n", ptr->data);
//         ptr = ptr->next;
//     }

// }

// struct Node * delete_first(struct Node * head){
//     struct Node * ptr = (struct Node * )malloc(sizeof(struct Node));
//     ptr = head;
//     head = head->next;
//     free(ptr);

//     return head;
// }

// int main () {
//     struct Node * first = (struct Node *)malloc(sizeof(struct Node));
//     struct Node * second = (struct Node *)malloc(sizeof(struct Node));
//     struct Node * third = (struct Node *)malloc(sizeof(struct Node));
//     struct Node * fourth = (struct Node *)malloc(sizeof(struct Node));

//     first->data = 45;
//     first->next = second;

//     second->data = 46;
//     second->next = third;

//     third->data = 47;
//     third->next = fourth;

//     fourth->data = 48;
//     fourth->next = NULL;

//     printf("Before deletion:\n ");
//     display_node(first);

//     first = delete_first(first);

//     printf("After deletion:\n");
//     display_node(first);

// return 0;
// }

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

// struct Node *delete_pos(struct Node *head, int n)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *q = (struct Node *)malloc(sizeof(struct Node));

//     ptr = head;

//     int a = 0;
//     while (a < n - 1)
//     {
//         ptr = head->next;
//         a++;
//     }

//     q = ptr->next;
//     ptr->next = q->next;

//     free(q);

//     return head;
// }

void forming_list(struct Node * head, int n){
    printf("The size of the list is : %d", n);

    int i,j,k;
    printf("First element :\n");
    scanf("%d", &k);

    head->data = k;
    head->next = NULL;

    struct Node * ptr = head;
    for ( i = 1; i < n; i++)
    {
        struct Node * new = (struct Node *) malloc(sizeof(struct Node));

        printf("\nNext element : ");
        scanf("%d", &j);
        new->data = j;
        new->next = NULL;

        ptr->next = new;
        ptr = ptr->next;

    }
    
}

int main()
{
     struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    // struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    // struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    // struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    int n;
    printf("Enter the size of the list:");
    scanf("%d", &n);

    // first->data = 45;
    // first->next = second;

    // second->data = 46;
    // second->next = third;

    // third->data = 47;
    // third->next = fourth;

    // fourth->data = 48;
    // fourth->next = NULL;

    // printf("Before deletion:\n ");
    // display_node(first);

    // first = delete_pos(first, n);

    // printf("After deletion:\n");
    // display_node(first);
    forming_list(first,n);

    printf("The following list is : \n");
    display_node(first);

    return 0;
}
