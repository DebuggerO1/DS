// #include <stdio.h>
// int main()
// {
//     int a[5][5], at[5][5], m, n;
//     printf("enter the order of matrix :\n");
//     scanf("%d %d", &m, &n);
//     printf("enter the elements : \n");
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             at[j][i] = a[i][j];
//         }
//     }
//     printf(" transpose of the matrix : \n");
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (a[i][j] == at[i][j])
//             {
//                 count++;
//             }
//             printf("%d ", at[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }