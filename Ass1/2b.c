// #include <stdio.h>
// #include <stdbool.h> 
// #include <ctype.h>
// int stack[100];
// int MAX_SIZE = 100;
// int top = -1; 

// bool isEmpty() {
//     return top == -1;
// }

// void push(int value) {
//     if (top == MAX_SIZE - 1) {
//         printf("Stack overflow! Cannot push more elements.\n");
//         return;
//     }
//     stack[++top] = value;
// }

// int pop() {
//     if (top == -1) {
//         printf("Stack underflow! Cannot pop from an empty stack.\n");
//         return -1;
//     }
//     return stack[top--];
// }
// // Function to evaluate a postfix expression:

// int evaluatePostfix(char postfix[]) {
//     for (int i = 0; postfix[i] != '\0'; i++) {
//         char ch = postfix[i];
//         if (isdigit(ch)) {
//             push(ch - '0'); 
//         } else {
//             int operand2 = pop();
//             int operand1 = pop();
//             switch (ch) {
//                 case '+':
//                     push(operand1 + operand2);
//                     break;
//                 case '-':
//                     push(operand1 - operand2);
//                     break;
//                 case '*':
//                     push(operand1 * operand2);
//                     break;
//                 case '/':
//                     push(operand1 / operand2);
//                     break;
//                 default:
//                     printf("Invalid operator: %c\n", ch);
//                     return -1; 
//             }
//         }
//     }
//     return pop() ;
// }

// int main() {
//    char postfix[MAX_SIZE];
//     printf("Enter a postfix expression: ");
//     scanf("%s", postfix); 
//     int result = evaluatePostfix(postfix);
//     if (result != -1) {
//         printf("Result of postfix expression: %d\n", result);
//     }

//     return 0;
// }
