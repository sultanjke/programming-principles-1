#include <iostream>
#include <string>
using namespace std;

bool isValid(const string& s, int k) {
    int cnt = 0;
    for (char c : s) {
        if (c >= '0' && c <= '9') cnt++;
    }
    return cnt >= k;
}

int main() {
    string s;
    int k;
    cin >> s >> k;

    if (isValid(s, k)) cout << "YES";
    else cout << "NO";

    return 0;
}