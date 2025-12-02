#include <iostream>
#include <set>
#include <string>
using namespace std;

bool strong(const string& s) {
    bool low = false, up = false, dig = false;
    for (char c : s) {
        if (c >= 'a' && c <= 'z') low = true;
        else if (c >= 'A' && c <= 'Z') up = true;
        else if (c >= '0' && c <= '9') dig = true;
    }
    return low && up && dig;
}

int main() {
    int n;
    cin >> n;

    set<string> strongSet;
    string p;

    for (int i = 0; i < n; i++) {
        cin >> p;
        if (strong(p)) strongSet.insert(p);
    }

    cout << strongSet.size() << "\n";
    for (const string& s : strongSet) cout << s << "\n";

    return 0;
}