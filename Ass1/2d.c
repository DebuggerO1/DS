// #include <stdio.h>
// #include <stdbool.h> 
// #include <ctype.h>   


// char stack[100];
// int MAX_SIZE = 100;
// int top = -1; 
// bool isEmpty() {
//     return top == -1;
// }
// void push(char value) {
//     if (top == MAX_SIZE - 1) {
//         printf("Stack overflow! Cannot push more elements.\n");
//         return;
//     }
//     stack[++top] = value;
// }
// char pop() {
//     if (top == -1) {
//         printf("Stack underflow! Cannot pop from an empty stack.\n");
//         return '\0';
//     }
//     return stack[top--];
// }
// // Function to get the precedence of an operator
// int getPrecedence(char op) {
//     switch (op) {
//         case '+':
//         case '-':
//             return 1;
//         case '*':
//         case '/':
//             return 2;
//         default:
//             return 0; 
//     }
// }
// // Function to convert infix to postfix
// void infixToPostfix(char infix[]) {
//     char postfix[MAX_SIZE];
//     int postfixIndex = 0;
//     for (int i = 0; infix[i] != '\0'; i++) {
//         char ch = infix[i];
//         if (isdigit(ch)) {
//             postfix[postfixIndex++] = ch;
//         } else if (ch == '(') {
//             push(ch);
//         } 
//         else if (ch == ')') {
//             while (!isEmpty() && stack[top] != '(') {
//                 postfix[postfixIndex++] = pop();
//             }
//             if (!isEmpty() && stack[top] == '(') {
//                 pop();
//             }
//         } 
//         else {
//             while (!isEmpty() && getPrecedence(stack[top]) >= getPrecedence(ch)) {
//                 postfix[postfixIndex++] = pop();
//             }
//             push(ch);
//         }
//     }
//     while (!isEmpty()) {
//         postfix[postfixIndex++] = pop();
//     }
//     postfix[postfixIndex] = '\0';

//     printf("Postfix expression: %s\n", postfix);
// }

// int main() {
//     char infix[MAX_SIZE];
//     printf("Enter an infix expression: ");
//     scanf("%s", infix);

//     infixToPostfix(infix);

//     return 0;
// }
