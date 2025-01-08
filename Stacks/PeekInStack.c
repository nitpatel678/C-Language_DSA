#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    int *array;
};

int is_empty(struct stack *ptr) {
    return (ptr->top == -1);
}

int is_full(struct stack *ptr) {
    return (ptr->top == ptr->size - 1);
}

int peek_stack(struct stack *ptr, int index) {
    if (index < 0 || index > ptr->top) {
        printf("Invalid index\n");
        return -1; // Return an error value
    } else {
        return ptr->array[index];
    }
}

int main() {
    int i, n;

    printf("Enter the size of stack: ");
    scanf("%d", &n);

    struct stack *stack1 = (struct stack *)malloc(sizeof(struct stack));
    stack1->size = n;
    stack1->top = -1;  // Initialize top to -1
    stack1->array = (int *)malloc(stack1->size * sizeof(int));

    printf("Now enter the elements in stack:\n");
    for (i = 0; i < n; i++) {
        printf("Enter element: ");
        scanf("%d", &stack1->array[i]);
        stack1->top++;  // Increment top after each insertion
    }

    int index;
    printf("Enter the index of the element (upto %d): ", stack1->top);
    scanf("%d", &index);

    int value = peek_stack(stack1, index);
    if (value != -1) {
        printf("Stored value is: %d\n", value);
    }

    // Freeing allocated memory
    free(stack1->array);
    free(stack1);

    return 0;
}
