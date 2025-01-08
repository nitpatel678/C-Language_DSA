#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *right;
    struct node *left;
};

void print_tree(struct node *node)
{
    if (node == NULL)
        return;

    printf("%d", node->data);

    if (node->left)
    {
        printf("%d", node->left->data);
    }
    if (node->right)
    {
        printf("%d", node->right->data);
    }
}


struct node * preorder_traversal(struct node *node){
    while (node != NULL)
    {
        printf("%d\t", node->data);
        preorder_traversal(node->left);
        preorder_traversal(node->right);
    }
    
}



struct node * postorder_traversal(struct node *node){
    while (node != NULL)
    {
        postorder_traversal(node->left);
        postorder_traversal(node->right);
        printf("%d\t", node->data);
    }
    
}

int main()
{
    struct node *s = (struct node *)malloc(sizeof(struct node));
    struct node *s1 = (struct node *)malloc(sizeof(struct node));
    struct node *s2 = (struct node *)malloc(sizeof(struct node));
    struct node *s3 = (struct node *)malloc(sizeof(struct node));
    struct node *s4 = (struct node *)malloc(sizeof(struct node));
    struct node *s5 = (struct node *)malloc(sizeof(struct node));
    struct node *s6 = (struct node *)malloc(sizeof(struct node));

    s->data = 67;
    s->left = s1;
    s->right = s2;

    s1->data = 68;
    s1->left = s3;
    s1->right = s4;

    s2->data = 69;
    s2->left = s5;
    s2->right = s6;

    s3->data = 34;
    s3->left = s3->right =NULL;
    

    s4->data = 35;
    s4->left = s4->right =NULL;
    

    s5->data = 78;
    s5->left = s5->right = NULL;
   

    s6->data = 0;
    s6->left = s6->right = NULL;
   

    printf("Printing Tree...........\n");
    print_tree(s);

    printf("\nPrinting Pre order tree traversal...\n");
    preorder_traversal(s);

    printf("\nPrinting Post order tree traversal...\n");
    postorder_traversal(s);

    return 0;
}
