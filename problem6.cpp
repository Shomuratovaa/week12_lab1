#include <iostream>
using namespace std;

void findMinMax(const int* arr, int size, int& minVal, int& maxVal) {
    minVal = arr[0];
    maxVal = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal)
            minVal = arr[i];
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
}

int main() {
    int size;
    cout<<"Enter number of elements: ";
    cin >> size;

    int arr[size];
    cout<<"Enter elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int minVal, maxVal;
    findMinMax(arr, size, minVal, maxVal);

    cout << "Min=" << minVal << endl;
    cout << "Max=" << maxVal << endl;

    return 0;
}