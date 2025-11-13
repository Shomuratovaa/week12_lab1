#include <iostream>
using namespace std;

int cstrLength(char* c) {
    int len = 0;
    char* p = c;

    while (*p != '\0') {
        ++len;
        ++p;
    }
    return len;
}

int main() {
    const int SIZE = 1000;
    char text[SIZE];
    cout<<"Enter a string: ";
    cin.getline(text, SIZE);
    cout <<"Length of the string is "<< cstrLength(text);
    return 0;
}