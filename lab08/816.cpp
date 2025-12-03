#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<long long, int> mp;
    long long x;

    for (int i = 0; i < n; i++) {
        cin >> x;
        mp[x]++;
    }

    auto it = mp.begin();
    it++;
    cout << it->second;

    return 0;
}