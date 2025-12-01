#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    char mx = s[0];
    for (int i = 1; i < s.size(); i++) {
        if (s[i] > mx) mx = s[i];
    }

    cout << mx;
    return 0;
}