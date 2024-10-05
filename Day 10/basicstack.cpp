#include<bits/stdc++.h>
using namespace std;
void pop(int stack[],int top,int size){
    int base = top;
    for(int j = size ;j>top; j--){
    if(top == -1 ){
    cout<<"stack under flow"<<endl;
    }
    else{
        cout<<stack[j]<<" "<<endl;
        top = top-1;
    }

    }

}
void push(int stack[] , int top , int size ){
for(int i =top ; i <= size ; i++){
if(top == size-1){
cout<<"stack overload"<<endl;
break;
}
else 
top = top+1;
cin>>stack[top];
}
}
int main(){
    int stack[50];
    int top=-1;
    cout<<"enter the size of the stack :"<<endl;
    int size;
    cin>>size;
    push(stack , top , size);
    cout<<"stack contains : "<<endl;
    for(int i = top ; i<size-1 ; i++){
        top = top+1;
        cout<<stack[top]<<" ";
    }
    cout<<endl;
    cout<<"stack pop :"<<endl;
    pop(stack , top , size);
    return 0;
}