#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void display_node(struct Node * ptr){
    while (ptr!=NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
    
}

struct Node * delete_mid(struct Node * head, int n){

    struct Node * ptr = head;
    struct Node * q;

    // Traverse to the node just before the one to delete
    int a = 0;
    while (a < n - 1 && ptr->next != NULL) { // Go up to the node before the nth node
        ptr = ptr->next;
        a++;
    }

    if (ptr->next == NULL) return head; // Check if 'n' was out of bounds

    q = ptr->next;       // q now points to the node to be deleted
    ptr->next = q->next; // Link the previous node to the node after the deleted node
    free(q);  
    return head;
}


int main () {
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node * fourth;

    int n;
    printf("Enter the index postion from 0 to 3 : ");
    scanf("%d", &n);

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

    first = delete_mid(first, n);

    printf("Linked list after deletion : \n");

    display_node(first);

return 0;
}