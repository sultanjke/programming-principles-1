#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> mp;
    string s;
    int k;

    for (int i = 0; i < n; i++) {
        cin >> s >> k;
        mp[s] += k;
    }

    for (auto &p : mp)
        cout << p.first << " " << p.second << "\n";

    return 0;
}