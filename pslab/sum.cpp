#include<bits/stdc++.h>
using namespace std;
static int r =0;
static int sd =0;
int sum(int n){
if(n==0){
    return 0;
}
else{
     r= n%10;
     sd += r;
    sum(n/10);
    return sd;
}
}
int main(){
    int n ;
     cin>>n;
cout<<sum(n);
    return 0;
}