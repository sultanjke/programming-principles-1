#include <iostream>
#include <string>
using namespace std;

bool isPal(const string &s, int l, int r) {
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}

int main() {
    string s;
    cin >> s;

    int i = 0, j = s.size() - 1;

    while (i < j && s[i] == s[j]) {
        i++;
        j--;
    }

    if (i >= j) {
        cout << "YES";
        return 0;
    }

    if (isPal(s, i+1, j) || isPal(s, i, j-1)) cout << "YES";
    else cout << "NO";

    return 0;
}