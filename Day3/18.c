// #include<stdio.h>
// int main(){
//   int a[5][5],m,n,i,j,b[5][5],p,q,c[5][5];
//   printf("enter the order of 1st the matrix :");
//   scanf("%d %d",&m,&n);
//   printf("enter the order of 2nd the matrix :");
//   scanf("%d %d",&p,&q);
//   printf("enter the elements of 1st matrix : ");
//   for(i= 0 ; i < m ; i++){
//     for (j = 0 ; j < n ; j++){
//       scanf("%d",&a[i][j]);
//     }
//   }
//   printf("enter the elements of 2nd matrix : ");
//   for(i = 0 ; i < p ; i++){
//     for(j = 0 ; j < q ; j++){
//       scanf("%d",&b[i][j]);
//     }
//   }
  
//   if(n==p){
//     for(i = 0 ; i<m ; i++){
//       for(j = 0 ; j < q ; j++){
//         c[i][j] = 0;
//         for(int k = 0; k < n ; k++){
//         c[i][j] = c[i][j]+(a[i][k]*b[k][j]);
//         }
//       }
//     }
//     for(i = 0 ; i < m ; i++){
//       for(j = 0 ; j < q ; j++){
//         printf("%d ",c[i][j]);
//       }
//       printf("\n");
//     }
//   }
    
//   else printf("multiplication is not possible");
  
//   return 0;
// }