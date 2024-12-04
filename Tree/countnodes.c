// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int data;
//     struct node* left;
//     struct node* right;
// };

// struct node* newNode(int data) {
//     struct node* node = (struct node*)malloc(sizeof(struct node));
//     node->data = data;
//     node->left = NULL;
//     node->right = NULL;
//     return node;
// }

// int countNodes(struct node* root) {
//     if (root == NULL)
//         return 0;
//     return 1 + countNodes(root->left) + countNodes(root->right);
// }

// int main() {
//     struct node* root = newNode(1);
//     root->left = newNode(2);
//     root->right = newNode(3);
//     root->left->left = newNode(4);
//     root->left->right = newNode(5);

//     int count = countNodes(root);
//     printf("Total number of nodes: %d\n", count);

//     return 0;
// }
