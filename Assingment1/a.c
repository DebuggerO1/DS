// #include <stdio.h>
// int main() {
//     int n; 
//     printf("Enter the number of elements : ");
//     scanf("%d", &n);
//     int arr[n];
//     int pos, value;
//     printf("Enter elements: ");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     //Insertion:
//     printf("Enter the position where you want to insert: ");
//     scanf("%d", &pos);
    
//     printf("Enter the value to insert: ");
//     scanf("%d", &value);

//     for (int i = n; i > pos; i--) {
//         arr[i] = arr[i - 1];
//     }
//     arr[pos] = value;
//     n++;

//     printf("Updated array after insertion:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     //Deletion:
//     printf("Enter the position where you want to delete: ");
//     scanf("%d", &pos);
//     for (int i = pos; i < n - 1; i++) {
//     arr[i] = arr[i + 1];
//     }
//     n--; 
    
//      printf("Updated array after deletion:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
   

//     return 0;
// }

