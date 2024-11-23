#include<bits/stdc++.h>
#include<string>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main(){
    cout<<"enter string : ";
    string str;
    cin>>str;
    //string size:
    cout<<"size of string : "<<str.size()<<endl;
    int count =0;
    //substring :
    cout<<"substrings are : "<<endl;
    for(int i =0 ; i<= str.size(); i++){
        for(int j = 1 ; j<= str.size()-i;j++){
        cout<<str.substr(i,j)<<endl;
        count++;
        }
    }
     cout<<"total number of substring : "<<count<<endl;
     //reverse:
     cout<<"reverse of string : ";
     reverse(str.begin(),str.end());
     cout<<str<<endl;
     //sort:
     cout<<"sorted string : ";
     sort(str.begin(),str.end());
     cout<<str<<endl;
    //concatination :
     string str1 = "abes" , str2 ="ec" , str3;
     str3 = str1+str2;
     cout<<str3<<endl;
}
// a string compromises of lower case alphabates and multiplication division modolus plus and minus signs 
//sort the string such that the special character appear first followed by the lower caes alpha in decending order
//given two strings that represent two number wap to add the two number represented by the string :
