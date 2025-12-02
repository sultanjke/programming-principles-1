#include <iostream>
#include <vector>
using namespace std;

int findMissing(const vector<int>& v, int n) {
    int total = n * (n + 1) / 2;
    int sum = 0;
    for (int x : v) sum += x;
    return total - sum;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    cout << findMissing(v, n);
    return 0;
}