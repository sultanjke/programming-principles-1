#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<long long> v;
    long long x;

    while (cin >> x && x != 0) v.push_back(x);

    int n = v.size();
    int l = 0, r = n - 1;

    while (l < r) {
        cout << v[l] + v[r] << " ";
        l++;
        r--;
    }

    if (l == r) cout << v[l];

    return 0;
}