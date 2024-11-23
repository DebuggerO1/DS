// #include <stdio.h>
// int stack[100], i, j, size, choice = 0, top = -1, val, value;
// void push()
// {
//   if (top == size - 1)
//   {
//     printf("Stack is overfollow");
//   }
//   else
//   {
//     printf("Enter the element:");
//     scanf("%d", &val);
//     top ++;
//     stack[top] = val;
//   }
// }

// void pop()
// {
//   if (top == -1)
//   {
//     printf("Underflow");
//   }
//   else
//   {
//     value = stack[top];
//     top --;;
//     printf("%d elements had been popped", value);
//   }
// }

// void peek()
// {
//   if (top == -1)
//   {
//     printf("Stack is empty");
//   }
//   else
//   {
//     printf("stack elements are :");
//     for (i = top; i >= 0; i--)
//     {
//       printf("%d ", stack[i]);
//     }
//   }
// }

// void end()
// {
//   printf("You are OUT of stack");
// }

// int main()
// {
//   printf("Enter the size of stack:");
//   scanf("%d", &size);
//   while (choice != 4)
//   {
//     printf("\n 1.Push\n 2.Pop\n 3.Peek\n 4.End\n");
//     printf("Enter choice:");
//     scanf("%d", &choice);
//     switch (choice)
//     {
//     case 1:
//       push();
//       break;
//     case 2:
//       pop();
//       break;
//     case 3:
//       peek();
//       break;
//     case 4:
//       end();
//       break;
//     default:
//       printf("Invalid choice, Please enter valid choice\n");
//     }
//   }
//   return 0;
// }