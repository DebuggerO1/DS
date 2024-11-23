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
//     top += 1;
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
//     top = top - 1;
//     printf("%d elements had been popped", value);
//   }
// }

// void display()
// {
//   if (top == -1)
//   {
//     printf("Stack is empty");
//   }
//   else
//   {
//     printf("Enter stack element:");
//     for (i = top; i >= 0; i--)
//     {
//       printf("%d ", stack[i]);
//     }
//   }
// }

// void exit()
// {
//   printf("Stack is empty");
// }

// int main()
// {
//   printf("Enter the size of stack:");
//   scanf("%d", &size);
//   while (choice != 4)
//   {
//     printf("\n 1.push\n 2.pop\n 3.display\n 4.exit\n");
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
//       display();
//       break;
//     case 4:
//       exit();
//       break;
//     default:
//       printf("Invalid choice,please enter valid choice\n");
//     }
//   }
//   return 0;
// }