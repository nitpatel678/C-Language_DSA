#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

void display_node(struct Node * node){
    while (node != NULL)
    {
        printf("Element : %d\n", node->data);
        node = node->next;
    }
    
}

struct Node * create_node(struct Node * head, int n){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    int i,j,k;
    printf("The first element : ");
    scanf("%d", &j);
    head->data = j;
    head->next = NULL;

    ptr = head;

    int a = 0;
    while (a < n)
    { 
      struct Node * new = (struct Node *)malloc(sizeof(struct Node));
    

        printf("Enter the next element : " );
        scanf("%d", &k);
        
        new->data = k;
        new->next = NULL;

        ptr->next = new;
        ptr = ptr->next;

        a++;


    }

    return head;
    
}
int main () {

    struct Node * first = (struct Node *)malloc(sizeof(struct Node));
    int i;
    printf("Enter the size of list : ");
    scanf("%d", &i);

    create_node(first, i);
    printf("ENTERED LINKED LIST:\n");
    display_node(first);
    
    
return 0;
}