#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const pair<string, int> &a, const pair<string, int> &b) {
    if (a.second != b.second)
        return a.second > b.second; 
    return a.first < b.first;
}

int main() {
    string line;
    getline(cin, line);

    map<string, int> mp;

    stringstream ss(line);
    string word;
    while (ss >> word) {
        mp[word]++;
    }

    vector<pair<string, int>> v;
    for (auto &entry : mp) {
        v.push_back({entry.first, entry.second});
    }

    sort(v.begin(), v.end(), cmp);

    for (auto &p : v) {
        cout << p.first << " : " << p.second << "\n";
    }

    return 0;
}
