#include <iostream>
#include <string>
using namespace std;

bool hasDigit(const string &w) {
    for (char c : w)
        if (c >= '0' && c <= '9') return true;
    return false;
}

int main() {
    string s;
    getline(cin, s);

    string word = "";
    for (char c : s) {
        if (c == ' ') {
            if (!word.empty() && !hasDigit(word))
                cout << word << "\n";
            word.clear();
        } else {
            word += c;
        }
    }

    if (!word.empty() && !hasDigit(word))
        cout << word;

    return 0;
}