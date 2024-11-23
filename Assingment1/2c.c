// #include <stdio.h>
// #include <stdbool.h>
// char stack[100];
// int MAX_SIZE = 100 , top = -1; 
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
// // Function to check if parentheses are balanced:
// bool areParenthesesBalanced(const char expression[]){
//     for (int i = 0; expression[i] != '\0'; i++) {
//         char ch = expression[i];
//         if (ch == '(' || ch == '[' || ch == '{'){
//             push(ch);
//         } 
//         else if (ch == ')' || ch == ']' || ch == '}'){
//             if (isEmpty()){
//                 return false;
//             }
//             char topChar = pop();
//             if ((ch == ')' && topChar != '(') ||(ch == ']' && topChar != '[') || (ch == '}' && topChar != '{')){
//                 return false;
//             }
//         }
//     }
//     return isEmpty();
// }
// int main() {
//     char expression[MAX_SIZE];
//     printf("Enter an expression with parentheses: ");
//     scanf("%s", expression);

//     if (areParenthesesBalanced(expression)) {
//         printf("Parentheses are balanced!\n");
//     }
//      else {
//         printf("Parentheses are not balanced.\n");
//     }
//     return 0;
// }
