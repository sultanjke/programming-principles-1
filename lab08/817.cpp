#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> mp;
    string s;

    for (int i = 0; i < n; i++) {
        cin >> s;
        mp[s]++;
    }

    int cnt = 0;
    for (auto &p : mp)
        if (p.second == 3) cnt++;

    cout << cnt;
    return 0;
}