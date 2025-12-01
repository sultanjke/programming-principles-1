#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
           c=='A' || c=='E' || c=='I' || c=='O' || c=='U';
}

int main() {
    string s;
    getline(cin, s);

    for (char c : s) {
        if (!isVowel(c)) cout << c;
    }

    return 0;
}