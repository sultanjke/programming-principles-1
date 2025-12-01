#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, l, r;
    cin >> n >> l >> r;         // array size and positions l, r

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // Reverse subarray between positions l and r (1-based → 0-based)
    reverse(a.begin() + (l - 1), a.begin() + r);

    // Output the modified array
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}