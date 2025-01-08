#include<stdio.h>
#include<stdlib.h>

struct queue {
    int size;
    int front;
    int back;
    int * array;
};

// Printing the array
void print_queue(struct queue * queue){
    int temp = 0;
    printf("Element : \n");
    while (temp <= queue->back)
    {
        printf("%d ", queue->array[temp]);
        temp++;
    }
    
}

// Equeue the array
struct queue * enqueue_insert(struct queue *queue, int val) {
    queue->back++;
    for (int i = queue->back; i > 0; i--) {
        queue->array[i] = queue->array[i - 1];
    }
    queue->array[0] = val; // Insert the value at the front
    return queue;
}

int main () {
    struct queue * a = (struct queue *)malloc(sizeof(struct queue));
    int n;
    printf("Enter the size of the queue : ");
    scanf("%d", &n);

    a->size = n;
    a->front = -1;
    a->back = -1;
    a->array = (int *)malloc(a->size * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        int k;
        printf("Enter the %d element", i+1);
        scanf("%d", &k);

        a->array[i] = k;
        a->back++;
    }

    // Print the array : 
    print_queue(a);

    // int value;
    // printf("\nEnter the value you want to enqueue in the queue : ");
    // scanf("%d", &value);

    // enqueue_insert(a, value);

    // printf("Queue after insertion : \n");
    // print_queue(a);

    // CHEFCKING THE COMPLEXITY OF TIME USING FOR LOOP
    int z;
    printf("\nEnter the no of times you want element to enter : \n");
    scanf("%d", &z);
    for (int  i = 0; i < z; i++)
    {
        int k;
        scanf("%d", &k);
        enqueue_insert(a,k);
    }

    // Now printing the array.
    print_queue(a);

return 0;
}