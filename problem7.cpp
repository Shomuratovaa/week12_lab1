#include <iostream>
using namespace std;

int findLargestElement(const int* arr, int size) {
    const int* ptr = arr;
    int largest = *arr;
    for (int i = 0; i < size; i++, ptr++) {
        if (*ptr > largest)
            largest = *ptr;
    }

    return largest;
}

int main() {
    int n;
    cout<<"Enter number of elemets n=";
    cin >> n;
    int arr[n];
    cout<<"Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Largest element of the array is "<<findLargestElement(arr, n);

    return 0;
}
