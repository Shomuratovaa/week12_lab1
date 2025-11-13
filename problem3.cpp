#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int *ptrA;
    int arr[10]={1,2,3,4,5,6,7,8,9};
    ptrA=arr;

    for (int i=0; i<10; i++) {
        cout<<"Adress: "<<ptrA<<" Value: "<<*ptrA<<endl;
        ptrA++;
    }

    return 0;
}
