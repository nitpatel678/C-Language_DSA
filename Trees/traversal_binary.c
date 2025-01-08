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

    printf("%d ", node->data);
    print_tree(node->left);
    print_tree(node->right);
}

void preorder_traversal(struct node *node)
{
    if (node == NULL)
        return;

    printf("%d\t", node->data);      // Visit the root
    preorder_traversal(node->left);  // Recur on left subtree
    preorder_traversal(node->right); // Recur on right subtree
}

void postorder_traversal(struct node *node)
{
    if (node == NULL)
        return;

    postorder_traversal(node->left);  // Recur on left subtree
    postorder_traversal(node->right); // Recur on right subtree
    printf("%d\t", node->data);       // Visit the root
}

struct node* create_tree(struct node* node) {
    int n;
    printf("Enter the size of the tree:\n");
    scanf("%d", &n);

    printf("Enter the value of the root node: ");
    scanf("%d", &node->data);
    node->left = NULL;
    node->right = NULL;

    for (int i = 1; i < n; i++) { // Start from 1 since the root node is already created
        struct node* current = node;
        char path[100]; // To store the path (e.g., "llr" means left -> left -> right)
        int value;

        printf("Enter the value of the node: ");
        scanf("%d", &value);

        printf("Enter the path to the node (use 'l' for left and 'r' for right, e.g., 'll' or 'r'): ");
        scanf("%s", path);

        for (int j = 0; path[j] != '\0'; j++) {
            if (path[j] == 'l') {
                if (current->left == NULL) {
                    current->left = (struct node*)malloc(sizeof(struct node));
                    current->left->left = NULL;
                    current->left->right = NULL;
                }
                current = current->left;
            } else if (path[j] == 'r') {
                if (current->right == NULL) {
                    current->right = (struct node*)malloc(sizeof(struct node));
                    current->right->left = NULL;
                    current->right->right = NULL;
                }
                current = current->right;
            }
        }

        current->data = value; // Assign the value to the appropriate position
    }

    return node;
}


int main()
{
    // struct node *s = (struct node *)malloc(sizeof(struct node));
    // struct node *s1 = (struct node *)malloc(sizeof(struct node));
    // struct node *s2 = (struct node *)malloc(sizeof(struct node));
    // struct node *s3 = (struct node *)malloc(sizeof(struct node));
    // struct node *s4 = (struct node *)malloc(sizeof(struct node));
    // struct node *s5 = (struct node *)malloc(sizeof(struct node));
    // struct node *s6 = (struct node *)malloc(sizeof(struct node));

    // s->data = 67;
    // s->left = s1;
    // s->right = s2;

    // s1->data = 68;
    // s1->left = s3;
    // s1->right = s4;

    // s2->data = 69;
    // s2->left = s5;
    // s2->right = s6;

    // s3->data = 34;
    // s3->left = s3->right = NULL;

    // s4->data = 35;
    // s4->left = s4->right = NULL;

    // s5->data = 78;
    // s5->left = s5->right = NULL;

    // s6->data = 0;
    // s6->left = s6->right = NULL;

    struct node * s = (struct node *)malloc(sizeof(struct node));
    create_tree(s);

    printf("Printing Tree (Preorder Traversal Style):\n");
    print_tree(s);

    printf("\n\nPrinting Preorder Tree Traversal:\n");
    preorder_traversal(s);

    printf("\n\nPrinting Postorder Tree Traversal:\n");
    postorder_traversal(s);

    return 0;
}
