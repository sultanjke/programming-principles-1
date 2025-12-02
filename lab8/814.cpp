#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    set<long long> sums;

    for (int i = 0; i + 1 < n; i++)
        sums.insert(v[i] + v[i+1]);

    cout << sums.size();
    return 0;
}