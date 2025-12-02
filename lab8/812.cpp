#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    set<long long> seen;

    for (int x : v) {
        if (seen.count(x) == 0) {
            cout << "YES\n";
            seen.insert(x);
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}