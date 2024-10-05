#include <iostream>
using namespace std;
int getSumDivisors(long num, int i) {
    if (i <= num / 2) {
        if (num % i == 0)
            return i + getSumDivisors(num, i + 1);
        else
            return getSumDivisors(num, i + 1);
    }
    return 0;
}
bool isPerfect(long num) {
    return (num != 0) && (getSumDivisors(num, 1) == num);
}

int main() {
    int lowerLimit, upperLimit;
    cout << "Enter the starting element of the range: ";
    cin >> lowerLimit;
    
    cout << "Enter the ending element of the range: ";
    cin >> upperLimit;
    
    cout << "Perfect numbers between " << lowerLimit << " and " << upperLimit << ":\n";
    for (int i = lowerLimit; i <= upperLimit; ++i) {
        if (isPerfect(i))
            cout << i << " ";
    }
    cout << endl;
    return 0;
}
