#include <iostream>
#include <map>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, set<int>> mp;

    for (int i = 0; i < n; i++) {
        string name;
        int day;
        cin >> name >> day;
        mp[name].insert(day);
    }

    for (auto &p : mp) {
        if (p.second.size() >= 3)
            cout << p.first << " +1\n";
        else
            cout << p.first << " NO BONUS\n";
    }

    return 0;
}