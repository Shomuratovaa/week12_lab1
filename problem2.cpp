#include <iostream>
using namespace std;

void swapNums(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    cout<<"Enter two numbers: ";
    cin >> a >> b;
    swapNums(&a, &b);
    cout<<"Result of swapping: ";
    cout << "a=" << a << ", b=" << b;

    return 0;
}