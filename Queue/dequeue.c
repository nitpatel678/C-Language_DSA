#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int front;
    int back;
    int *array;
};


void display_queue(struct queue *queue)
{
    int temp;
    printf("\nElement :\n");
    while (temp < queue->back)
    {
        {
            printf("%d ", queue->array[temp]);
            temp++;
        }
    }
}

struct queue * dequeue_delete(struct queue * queue){
    if (queue->back <= 0) {
        printf("Queue is empty. Nothing to delete.\n");
        return queue;
    }


    printf("\nDeleting the first element in the queue......\n");
    printf("\nStill working...\n");
    for (int i = 0; i < queue->back; i++)
    {
        queue->array[i] = queue->array[i+1];

    }
    
    queue->back--;
    
    return queue;
}
int main()
{
    int n;
    printf("Enter the size of the queue:");
    scanf("%d", &n);

    struct queue * a = (struct queue *) malloc(sizeof(struct queue));
    a->size = n;
    a->array =(int *)malloc(sizeof(a->size * sizeof(int)));
    a->front = a->back = -1;


    for (int i = 0; i < n; i++)
    {
        int k;
        printf("Enter the %d element:", i+1);
        scanf("%d", &k);
        a->array[i] = k;
        a->back++;
    }

    printf("\nBefore deleting the element.\n");
    display_queue(a);

    dequeue_delete(a);

    printf("\nAfter deleting the element.\n");
    display_queue(a);
    

    return 0;
}