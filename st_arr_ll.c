#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

void print_list(struct Node * ptr){
    while (ptr!=NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
    
}

struct Node * create_node(int data){
    struct Node * new_node = (struct Node *) malloc(sizeof(struct Node));
    if (new_node->next==NULL)
    {
        printf("Memory Allocation Failed.");
        return NULL;
    }

    new_node->data = data;
    new_node->next = NULL;

    return new_node;

}
struct Node * insert_first(struct Node * head, int data){
    struct Node * ptr = (struct Node * )malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;

    return ptr;
}

struct Node * insert_mid(struct Node * head , int pos, int data){
    struct Node * ptr = (struct Node * )malloc(sizeof(struct Node));
    ptr = head;
    for (int i = 0; i < pos; i++)
    {
        ptr = ptr->next;
    }

    struct Node * q = (struct Node *)malloc(sizeof(struct Node));
    q->data = data;
    q->next = ptr->next;
    ptr->next = q;

    return head;
    
}

void enter_node(int n){
    printf("Enter elements upto %d size " , n);
    for (int  i = 0; i < n; i++)
    {
        int k;
        scanf("%d", &k);;
        create_node(k);
    }
    
}

int main () {
    int i, j, k, n, pos;

    printf("Enter the size of the linked list: ");
    scanf("%d", &n);

    struct Node* head = NULL;  // Initialize the head of the list as NULL

    // Create the initial linked list
    for (i = 0; i < n; i++) {
        int val;
        printf("Enter value for element %d: ", i+1);
        scanf("%d", &val);
        head = insert_first(head, val);  // Insert at the beginning for simplicity
    }

    // Display the current list
    printf("Current List: \n");
    print_list(head);

    printf("Enter the value to be entered: ");
    scanf("%d", &k);

    printf("Enter the position to enter the element (starting from 0): ");
    scanf("%d", &pos);

    // Insertion at the specified position
    if (pos == 0) {
        head = insert_first(head, k);  // Insert at the head
    } else {
        head = insert_mid(head, pos, k);  // Insert at the middle
    }

    // Display the updated list
    printf("Updated List: \n");
    print_list(head);

    return 0;
}
