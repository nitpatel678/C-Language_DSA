// Implementation Using Array.

#include<stdio.h>
#include<stdlib.h>

struct queue {
    int size;
    int front;
    int back;
    int *array;
};


void print_queue(struct queue * queue){
    for (int i = queue->front; i <= queue->back; i++)
    {
        printf("Element : %d\n", queue->array[i]);
    }
    
}

int main () {
    struct queue * a = (struct queue *)malloc(sizeof(struct queue));
    a->front = - 1;
    a->back = - 1;
    int n;
    printf("Enter the size of the queue : ");
    scanf("%d", &n);

    a->size = n;
    a->array = (int *)malloc(a->size * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        int k;
        printf("Enter the %d element :", i+1);
        scanf("%d", &k);

        a->array[i] = k;
        a->back++;
    }
    
    // Printing the queue 

    print_queue(a);


return 0;
}