#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, l, r;
    cin >> n >> l >> r;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long sum = 0;

    for (int i = l - 1; i <= r - 1; i++) {
        sum += a[i];
    }

    cout << sum;
    return 0;
}