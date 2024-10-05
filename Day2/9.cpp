// #include <bits/stdc++.h>
// using namespace std;
// void merge(int arr1[], int arr2[], int arr3[], int l , int m , int n)
// {
//     int i = 0, j = 0, k = 0;
//     while (i < m)
//     {
//         arr3[k++] = arr1[i++];
//     }
//     while (j < n)
//     {
//         arr3[k++] = arr2[j++];
//     }
//     sort(arr3, arr3 + l);
// }
// int main()
// {
//     int n;
//     cout << "eneter size of set1 : ";
//     cin >> n;
//     int arr1[n];
//     cout << "enter ekements of set1 :\n ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr1[i];
//     }
//     int m;
//     cout << "eneter size of set2 : ";
//     cin >> m;
//     int arr2[m];
//     cout << "enter ekements of set2 : \n";
//     for (int j = 0; j < m; j++)
//     {
//         cin >> arr2[j];
//     }
//     int l1 = sizeof(arr1)/sizeof(arr1[0]); 
//     int l2 = sizeof(arr2)/sizeof(arr2[0]);
//     int l = l1+l2;
//     int arr3[l];
//     merge(arr1, arr2, arr3, l , l1 , l2);
//     for (int j = 0; j < l; j++)
//     {
//         if (arr3[j] != arr3[j + 1])
//         {
//             cout << arr3[j] <<" ";
//         }
//     }
//     return 0;
// }
