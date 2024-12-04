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

// int height(struct node* root) {
//     if (root == NULL)
//         return 0;
//     else {
//         int leftHeight = height(root->left);
//         int rightHeight = height(root->right);
        
//         if (leftHeight > rightHeight)
//             return(leftHeight + 1);
//         else 
//             return(rightHeight + 1);
//     }
// }

// int main() {
//     struct node* root = newNode(1);
//     root->left = newNode(2);
//     root->right = newNode(3);
//     root->left->left = newNode(4);
//     root->left->right = newNode(5);

//     int treeHeight = height(root);
//     printf("Height of the binary tree: %d\n", treeHeight);

//     return 0;
// }
