#include <stdio.h>
#include <stdlib.h>

struct queue {
    int size;
    int front;
    int back;
    int *array;
};

int is_empty(struct queue *queue) {
    return queue->front == queue->back;
}

int is_full(struct queue *queue) {
    return (queue->back + 1) % queue->size == queue->front;
}

void display_queue(struct queue *queue) {
    if (is_empty(queue)) {
        printf("Queue is empty.\n");
        return;
    }

    int temp = queue->front + 1; // Start from the first valid element
    printf("Elements: ");
    while (temp != (queue->back + 1) % queue->size) { // Wrap-around condition
        printf("%d ", queue->array[temp]);
        temp = (temp + 1) % queue->size; // Increment circularly
    }
    printf("\n");
}

struct queue *enqueue_insert(struct queue *queue, int value) {
    if (is_full(queue)) {
        printf("Queue is Overflowed\n");
        return queue;
    } else {
        queue->back = (queue->back + 1) % queue->size; // Increment circularly
        queue->array[queue->back] = value;
        printf("Enqueued: %d\n", value);
    }
    return queue;
}

int main() {
    int n;

    printf("Enter the size of the queue: ");
    scanf("%d", &n);

    struct queue *a = (struct queue *)malloc(sizeof(struct queue));
    a->size = n + 1; // Circular queue needs one extra space
    a->array = (int *)malloc(a->size * sizeof(int));
    a->front = a->back = 0; // Circular queue initialization

    // Adding elements to the queue
    for (int i = 0; i < n; i++) {
        int k;
        printf("Enter the element: ");
        scanf("%d", &k);
        enqueue_insert(a, k);
    }

    printf("\nTraversal before enqueue:\n");
    display_queue(a);

    printf("\nEnter the value you want to enqueue: ");
    int z;
    scanf("%d", &z);
    enqueue_insert(a, z);

    printf("\nTraversal after enqueue:\n");
    display_queue(a);

    // Free allocated memory
    free(a->array);
    free(a);

    return 0;
}
