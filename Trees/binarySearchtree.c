/*
Properties Of Binary Search Trees:-
1. All nodes of left subtree are lesser (compared to roo node).
2. All nodes of right subtree are greater (compared to root node).
3. Left and right subtree are also BST.
4. There are no duplicate nodes.
5. INORDER TRAVERSAL OF A BST GIVES A SORTED ARRAY...........

*/

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{
    int data;
    struct node * left;
    struct node * right;
};


struct node * create_node(int data){
    struct node * p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}


void print_node(struct node * node ){
    if(node == NULL){
        return;
    }
    printf("%d", node->data);
    if (node->left)
    {
        printf("%d", node->left->data);
    }
    if(node->right){
        printf("%d", node->right->data);
    }
    
}

int main () {
    struct node * p = create_node(4);
    struct node * p1 = create_node(3);
    struct node * p2 = create_node(7);
    struct node * p3 = create_node(1);
    struct node * p4 = create_node(4);
    struct node * q = create_node(9);
    struct node * r = create_node(8);


    
return 0;
}