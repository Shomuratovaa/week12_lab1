#include <iostream>
using namespace std;

void factorial(int n, int* fact) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    *fact = result;
}

int main() {
    int n;
    cout<<"n=";
    cin >> n;

    int fact;
    factorial(n, &fact);
    cout<<"Factorial " <<n<<" is "<<fact;
    return 0;
}