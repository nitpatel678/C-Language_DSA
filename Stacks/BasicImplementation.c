//            USING ARRAY
#include <stdio.h>
#include <stdlib.h>

// TO FORM THE STACK DATA TYPE USING STRUCTURE

struct stack
{
    int size;
    int top;
    int *arr;
};

// FORMING A FUNCTION TO CHECK IF THE STACK IS EMPTY

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// TO CHECK IF THE STACK IS FULL


int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


// FUNCTION TO PRINT THE ALL THE ELEMENT IN THE stack

void print_stack(struct stack *ptr, int n){
    
    for (int i = 0; i < n; i++)
    {
        printf("Element : %d\n", ptr->arr[i]);
        
    }
    

}



int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // Pushing element manually in the  stack

    int j, k;
    printf("Enter the size of the stack:");
    scanf("%d", &j);

    for (int i = 0; i < j; i++)
    {
        printf("Enter the element in stack:");
        scanf("%d", &k);

        s->arr[i] = k;
        s->top += 1;
    }




    if (isEmpty(s))
    {
        printf("The stack is empty\n");
    }
    else
    {
        printf("The stack is not empty\n");
    }



    if (isFull(s))
    {
        printf("The stack is full\n");
    }
    else{
        printf("The stack is not full\n");
    }

    print_stack(s,j);


    return 0;
}