#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    int *array;
};

void display_stack(struct stack *ptr) {
    if (is_empty(ptr)) {
        printf("Stack is empty\n");
        return;
    }
    for (int i = 0; i <= ptr->top; i++) {  // Use ptr->top to control how many elements to display
        printf("Element : %d\n", ptr->array[i]);
    }
}


int is_full(struct stack *ptr) {  // Corrected to return an integer
    return ptr->top == ptr->size - 1;
}

int is_empty(struct stack *ptr) {  // Corrected to return an integer
    return ptr->top == -1;
}

void push_stack(struct stack *ptr, int value) {
    if (is_full(ptr)) {  // Check if the stack is full
        printf("Stack Overflow\n");
    } else {
        ptr->top++;  // Move the top pointer up
        ptr->array[ptr->top] = value;  // Insert the value at the new top position
    }
}

int pop_stack(struct stack *ptr) {
    if (is_empty(ptr)) {  // Check if the stack is full
        printf("Stack Underflow\n");
    } else {
        int value = ptr->array[ptr->top];
        ptr->top--;

        return value;
    }
}

int main() {
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    
    int a, n;
    printf("Enter the array size : ");
    scanf("%d", &a);

    s->size = a;
    s->top = -1;
    s->array = (int *)malloc(s->size * sizeof(int));  // Corrected memory allocation for array size

    printf("Enter the number of elements to push: ");
    scanf("%d", &n);  // Corrected missing value assignment for 'n'

    for (int i = 0; i < n; i++) {
        int value;
        printf("Enter element %d: ", i + 1);
        scanf("%d", &value);
        push_stack(s, value);  // Push values onto the stack
    }


    display_stack(s);  // Display stack elements
    int b = pop_stack(s);

    printf("Popped Value : %d\n", b);

    display_stack(s);


    return 0;
}
