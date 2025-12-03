#include <iostream>
#include <string>
using namespace std;

bool isValid(const string& s, int k) {
    int curr = 0;
    for (char c : s) {
        if (c >= '0' && c <= '9') {
            curr++;
            if (curr >= k) return true;
        } else {
            curr = 0;
        }
    }
    return false;
}

int main() {
    string s;
    int k;
    cin >> s >> k;

    if (isValid(s, k)) cout << "Valid";
    else cout << "Not valid";

    return 0;
}