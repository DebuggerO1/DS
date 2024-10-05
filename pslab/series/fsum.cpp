#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int fac = 1;
    int sum = 0; 
   for(int i= 1 ; i<= n ;i++){
    fac *=i;
    sum += fac;
   }
   cout<<sum<<endl;
   return 0;
}