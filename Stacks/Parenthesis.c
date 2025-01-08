#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    char *arr;
};

void fill_stack(struct stack *ptr, int n) {
    ptr->top = -1;
    ptr->size = n;
    ptr->arr = (char *)malloc(ptr->size * sizeof(char));

    printf("Now enter the elements in the stack:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr->arr[i]);
        ptr->top++;
    }
}


int main () {
    int n;
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));

    printf("Enter the size of the stack:");
    scanf("%d", &n);


    return 0;
}
