// #include <iostream>
// using namespace std;
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
//     int l1 = sizeof(arr1) / sizeof(arr1[0]);
//     int l2 = sizeof(arr2) / sizeof(arr2[0]);
//     int l = l1+l2;
//     int arr3[l];
//     int difsize = 0;
//     for (int i = 0; i < l1; i++)
//     {
//         bool found = false;
//         for (int j = 0; j < l2; j++)
//         {
//             if (arr1[i] == arr2[j])
//             {
//                 found = true;
//                 break;
//             }
//         }
//         if (!found)
//         {
//             arr3[difsize++] = arr1[i];
//         }
//     }
//         for (int i = 0; i < l1; i++)
//     {
//         bool found = false;
//         for (int j = 0; j < l2; j++)
//         {
//             if (arr2[i] == arr1[j])
//             {
//                 found = true;
//                 break;
//             }
//         }
//         if (!found)
//         {
//             arr3[difsize++] = arr2[i];
//         }

//     }
//     cout << "Difference of Set 1 - Set 2:\n ";
//     for (int i = 0; i < difsize; i++)
//     {
//         cout << arr3[i] << " ";
//     }
//     return 0;
// }