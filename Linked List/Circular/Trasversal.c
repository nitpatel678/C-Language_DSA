#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void display_node(struct Node * head){
    struct Node * ptr = head;

    do
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    
}


int main () {
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
    third->next = first;

    display_node(first);

    

return 0;
}