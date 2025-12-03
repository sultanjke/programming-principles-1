#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int sum = 0;
    for (char c : s) sum += c - '0';

    int last = s.back() - '0';

    if (last == 0) {
        cout << "No";
        return 0;
    }

    if (sum % last == 0) cout << "Yes";
    else cout << "No";

    return 0;
}