#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const pair<int,int>& a, const pair<int,int>& b) {
    if (a.first != b.first)
        return a.first < b.first;
    return a.second < b.second;
}

int main() {
    int n;
    cin >> n;

    vector<pair<int,int>> v;
    v.reserve(n);

    for (int i = 1; i <= n; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back({x + y, i});
    }

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < n; i++) {
        cout << v[i].second << " ";
    }

    return 0;
}