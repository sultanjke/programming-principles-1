#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> mp;
    string s;

    for (int i = 1; i <= n; i++) {
        cin >> s;
        if (!mp.count(s)) mp[s] = i;
    }

    for (auto &p : mp)
        cout << p.first << " " << p.second << "\n";

    return 0;
}