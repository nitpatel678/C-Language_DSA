#include<stdio.h>
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
struct Node* end_insert(struct Node * head, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    ptr->data = data;

    while(p != NULL){
        p = p->next;

    }
    p->next = ptr;
    ptr->next = NULL;
    return head;

};

struct Node * create_list(){
      struct Node*head = NULL;
      int n,data;
      printf("Enter the size of the list:");
      scanf("%d", &n);
      for (int i = 0; i < n; i++)
      {
        scanf("%d", &data);
        head = end_insert(head,data);
      }
      
};


int main () {
    struct Node *head = create_list();
    display_node(head);
return 0;
}