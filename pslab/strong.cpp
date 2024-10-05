#include <bits/stdc++.h>
using namespace std;
int fac(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
        return num * fac(num - 1);
}
int strong(int num)
{
    while (num != 0)
    {
        return fac(num % 10) + strong(num / 10);
    }
}
int main()
{
    int num;
    cin >> num;
    int n = num;
    int strongnum = strong(num);
    if (num == strongnum)
    {
        cout << "It is strong number = " << strongnum << endl;
    }
    else
        cout << "It is not strong number = " << strongnum << endl;
    return 0;
}