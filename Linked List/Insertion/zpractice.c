// #include<stdio.h>
// #include<stdlib.h>
// struct Node
// {
//     int data;
//     struct Node *next;
// };

// void display_node(struct Node*ptr){
//     while (ptr != NULL)
//     {
//         printf("Element : %d\n", ptr->data);
//         ptr = ptr->next;
//     }

// }
// int main () {
//     int i,j,k;
//     struct Node * first;
//     struct Node * second;
//     struct Node * third;
//     struct Node * fourth;

//     first = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));

//     first->data = 33;
//     first->next = second;

//     second->data = 44;
//     second->next = third;

//     third->data = 45;
//     third->next = fourth;

//     fourth->data = 46;
//     fourth->next = NULL;

//     display_node(first);

// return 0;
// }



//

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void display_node (struct Node * ptr){
    while(ptr!= NULL){
        printf("Element : %d", ptr->data);
        ptr = ptr->next;
    }
}


struct Node * insert_at_first(struct Node*head, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr ->data = data;
    ptr ->next = head;

    return ptr;
}

int main () {

    struct Node * first = (struct Node *)malloc(sizeof(struct Node));
    struct Node * second = (struct Node *)malloc(sizeof(struct Node));
    struct Node * third = (struct Node *)malloc(sizeof(struct Node));

    first ->data = 45;
    first ->next = second;

    second ->data = 42;
    second->next = third;
    
    third ->data = 34;
    third ->next = NULL;

    display_node(first);
    insert_at_first(first, 334);
    display_node(first);

return 0;
}