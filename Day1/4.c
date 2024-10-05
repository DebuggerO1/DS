// #include<stdio.h>
// int main(){ 
//     int n;
//     printf("enter the number of elements : ");
//     scanf("%d",&n);
//     int arr[n];
//      printf("enter the sorted array : ");
//     for(int i =0 ; i<n ; i++){
//         scanf("%d",&arr[i]);
//     }
//     int position = 0;
//     int item;
//     printf("enter the number: ");
//     scanf("%d",&item);
//     for(int i = 0 ; i <n ; i++){
//         if(item <= arr[i]){
//         position = i;
//         break;
//         }
//     }
//     for(int i = n ; i>= position ; i--){
//       arr[i] = arr[i-1];
//     }
//     arr[position-1] = item;
//     for(int i = 0 ; i<=n; i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }