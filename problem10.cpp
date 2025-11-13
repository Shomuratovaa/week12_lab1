#include <iostream>
#include <cctype>   // for tolower() and isalpha()
using namespace std;

void countChar(const char* str, int& vowelCount, int& consonantCount) {
    vowelCount = 0;
    consonantCount = 0;

    while (*str != '\0') {
        char ch = tolower(*str);

        if (isalpha(ch)) {
            if (ch == 'a'|| ch == 'e'||  ch == 'i'||  ch == 'o'|| ch == 'u') {
                vowelCount++;
            }else {
                consonantCount++;
            }
        }
        str++;
    }
}

int main() {
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str, 100);

    int vowels, consonants;
    countChar(str, vowels, consonants);

    cout << "vowels: " << vowels << endl;
    cout << "consonants: " << consonants << endl;

    return 0;
}