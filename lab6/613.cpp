#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    char c = t[0];
    int first = -1, last = -1;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            if (first == -1) first = i;
            last = i;
        }
    }

    if (first == -1) return 0;

    if (first == last) cout << first;
    else cout << first << " " << last;

    return 0;
}