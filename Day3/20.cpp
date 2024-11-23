// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr1[n][n];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> arr1[i][j];
//         }
//     }
//     cout << endl;
//     int arr2[n][n];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> arr2[i][j];
//         }
//     }
//     cout << endl;
//     int arr3[n][n];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             arr3[i][j]=0;
//             arr3[i][j] += (arr2[i][j] - arr1[i][j]);
//         }
//     }
//      cout<<"subtracted array (arr2-arr1):"<<endl; 
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << arr3[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }