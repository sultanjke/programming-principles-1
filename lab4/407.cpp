#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, l, r;
    cin >> n >> l >> r;           // read size and range positions

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long sum = 0;
    // sum elements from position l to r (1-based indexing)
    for (int i = l - 1; i <= r - 1; i++) {
        sum += a[i];
    }

    cout << sum;
    return 0;
}