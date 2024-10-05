#include<bits/stdc++.h>
#include<stdlib.h>
#include<string>
using namespace std;
void mergearray(int arr1[], int arr2[], int arr3[] ,int m ,int n,int p){
int i =0 , j= 0,k=0;
while(i<m){
arr3[k++]= arr1[i++];
}
while (j<n){
    arr3[k++]= arr2[j++];
}
    sort(arr3 , arr3+p);

}
int main(){
    int arr1[] = {1,2,3,7};
    int arr2[] = {2,5,6,10};
    int l = {sizeof(arr1)/sizeof(arr1[0])};
    int k ={sizeof(arr2)/sizeof(arr2[0])};
    int j =k+l;
    int arr3[4];
    int m = sizeof(arr1[0]) ;
    int n = sizeof(arr2[0]) ;
    mergearray(arr1,arr2,arr3,m,n,j);
    for(int i =0 ; i<j; i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}