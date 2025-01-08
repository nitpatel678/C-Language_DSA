#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

void print_node(struct Node * head){
    while (head != NULL)
    {
        printf("Element : %d\n", head->data);
        head = head->next;
    }
}

struct Node * create_list(struct Node * head, int size) {
    if (head == NULL) {
        return NULL;
    }

    struct Node *temp = head;
    for (int i = 0; i < size; i++) {
        printf("Enter the element: ");
        scanf("%d", &temp->data);
        
        if (i != size - 1) {
            temp->next = (struct Node *)malloc(sizeof(struct Node));
            temp = temp->next;
        }
    }
    temp->next = NULL;
    return head;
}

struct Node * insert_beg(struct Node * head, int data){
    struct Node * temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = head;
    head = temp;
    return head;
}

struct Node * insert_mid(struct Node * head, int index, int data){
    struct Node * temp = head;
    int a = 0;
    while (a < index - 1) {
        temp = temp->next;
        a++;
    }
    struct Node * p = (struct Node *)malloc(sizeof(struct Node));
    p->data = data;
    p->next = temp->next;
    temp->next = p;
    return head;
}

struct Node * insert_end(struct Node * head, int data) {
    struct Node * temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    struct Node * p = (struct Node *)malloc(sizeof(struct Node));
    p->data = data;
    temp->next = p;
    p->next = NULL;
    return head;
}


struct Node * delete_start(struct Node * head){
    
}

int main() {
    struct Node * sp = (struct Node *)malloc(sizeof(struct Node));  // Fix 1
    int n;
    printf("Enter the size of the linked list: ");
    scanf("%d", &n);

    printf("----Forming the linked list----\n");
    create_list(sp, n);

    int a, index, c;
    printf("Enter the element to insert at the start: ");
    scanf("%d", &a);
    sp = insert_beg(sp, a);

    printf("Enter the index to insert the element < %d: ", n);
    scanf("%d", &index);

    printf("Enter the data to insert: ");
    scanf("%d", &c);
    sp = insert_mid(sp, index, c);

    int last_data;
    printf("Enter the data to insert at the end: ");
    scanf("%d", &last_data);
    sp = insert_end(sp, last_data);  // Fix 2

    printf("Displaying the linked list:\n");
    print_node(sp);

    return 0;
}
