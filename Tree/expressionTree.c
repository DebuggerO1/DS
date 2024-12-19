#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct node {
    char data;
    struct node* left;
    struct node* right;
};
struct node* newNode(char data){
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
int isOperator(char c){
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

struct node* createExpressionTree(char* postfix) {
    struct node* stack[100];
    int top = -1;
    for (int i = 0; postfix[i] != '\0'; i++){
        if (isdigit(postfix[i])) {
            stack[++top] = newNode(postfix[i]);
        } else if (isOperator(postfix[i])) {
            struct node* operatorNode = newNode(postfix[i]);
            operatorNode->right = stack[top--];
            operatorNode->left  = stack[top--];
            stack[++top] = operatorNode;
        }
    }
    return stack[top--];
}
void inorderTraversal(struct node* root){
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%c ", root->data);
        inorderTraversal(root->right);
    }
}
int main(){
    char postfix[100];

    printf("Enter a postfix expression: ");
    scanf("%s", postfix);

    struct node* root = createExpressionTree(postfix);

    printf("Inorder traversal of the expression tree: ");
    inorderTraversal(root);
    printf("\n");
    return 0;
}
