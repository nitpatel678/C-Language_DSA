#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * right;
    struct node * left;
};


struct node * create_node(int data){
    struct node * new_node = (struct node *) malloc(sizeof(struct node));
    new_node->data = data;
    new_node->right = NULL;
    new_node->left = NULL;

    return new_node;
}

void display_node(struct node * node){
    if (node == NULL)
    {
        return;
    }
    
    printf("%d\n", node->data);
    
    if (node->right)
    {
        printf("|---%d", node->right->data);
    }
    
    
    if (node->left)
    {
        printf("|---%d", node->left->data);
    }

    if (node->right)
    {
        if (node->right->data)
        {
            display_node(node->right);
        }
        
    }

    if (node->left)
    {
        if (node->left->data)
        {
            display_node(node->left);
        }
        
    }       
}


int main () {
    struct node * p = (struct node *) malloc (sizeof (struct node));
    struct node * p1 = (struct node *) malloc (sizeof (struct node));
    struct node * p2 = (struct node *) malloc (sizeof (struct node));
   /* p->left = p1;
    p->right = p2;

    p1->left = NULL;
    p1->right = NULL;

    p2->left = NULL;
    p2->right = NULL;
    p->data = 8;
    p2->data = 5;
    p1->data = 11;
    */
    p = create_node(4);
    p1 = create_node(5);
    p2 = create_node(2);

    p->left = p1;
    p->right = p2;

    display_node(p);


return 0;
}