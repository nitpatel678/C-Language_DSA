#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node * next;
};

void display_trasversal(struct Node * ptr){
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    
}

int main () {
struct Node * first;
struct Node * second;      
struct Node * third;  
struct Node * fourth;

first = (struct Node *)malloc(sizeof(struct Node));
second = (struct Node *)malloc(sizeof(struct Node));
third = (struct Node *)malloc(sizeof(struct Node)); 
fourth = (struct Node *)malloc(sizeof(struct Node));
// Allocating first value of the head
first->data = 4;
first->next = second;
// allocating the value to second value 
second->data = 7;
second->next = third;
// allocating third value 
third->data = 11;
third->next = fourth;
// allocating fourth value
fourth->data = 13;
fourth->next = NULL;

display_trasversal(first);

return 0;
}