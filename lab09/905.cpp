#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<int,int> mp;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }

    auto it = mp.rbegin();
    int max1 = it->first;
    it++;
    int max2 = it->first;

    cout << mp[max2];

    return 0;
}