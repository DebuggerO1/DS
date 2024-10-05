#include <iostream>
#include <algorithm> 

using namespace std;
int mean(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return (sum) / size;
}
int median(int arr[], int size) {
    sort(arr, arr + size); 

    if (size % 2 != 0) {
        return (arr[size / 2]);
    } else {
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    }
}

int main() {
    int arr[5];
    for(int i =0;i<5;i++){
        cin>>arr[i];
    }
    int size = 5;
    cout << "Mean is: " << mean(arr, size) << endl;
    cout << "Median is: " << median(arr, size) << endl;

    return 0;
}
