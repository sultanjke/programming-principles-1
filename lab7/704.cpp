#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (char c : s) {
        int d = c - '0';
        if (d % 2 != 0) {
            cout << "Not valid";
            return 0;
        }
    }

    cout << "Valid";
    return 0;
}