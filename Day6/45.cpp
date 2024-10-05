#include<bits/stdc++.h>
using namespace std;
int toh(int n, char s, char m ,char d){
    if(n==1){
        cout<<"move disk from "<<s<<" to "<<d<<endl;
    }
    else{
        toh(n-1,s,d,m);
        cout<<"move disk from "<<s<<" to "<<d<<endl;
        toh(n-1 ,m ,s,d);
    }
    return 0;
}
int main(){
int n ;
cin>>n;
char s= 'S';
char m = 'M';
char d ='D';
toh(n,s,m,d);
}