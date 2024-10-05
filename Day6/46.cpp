#include<bits/stdc++.h>
using namespace std;
static int r =0;
static int sum = 0;
int rev(int n){
if(n==0){
    return 0;
}
else
r = n%10;
sum = sum*10 + r;
rev(n/10);
return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<rev(n);
    return 0;
}