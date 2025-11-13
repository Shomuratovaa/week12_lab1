#include <iostream>
using namespace std;

int sumArray(int* arr, int size) {
    int sum = 0;
    int* ptr = arr;
    for (int i = 0; i < size; i++) {
        sum += *(ptr + i);
    }
    return sum;
}

int main() {
    int size;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];}

    cout << sumArray(arr, size);
    return 0;
}