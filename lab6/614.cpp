#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    char bestChar = s[0];
    int bestLen = 1;

    char currChar = s[0];
    int currLen = 1;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == currChar) {
            currLen++;
        } else {
            if (currLen > bestLen) {
                bestLen = currLen;
                bestChar = currChar;
            }
            currChar = s[i];
            currLen = 1;
        }
    }

    if (currLen > bestLen) {
        bestLen = currLen;
        bestChar = currChar;
    }

    cout << bestChar << " " << bestLen;
    return 0;
}