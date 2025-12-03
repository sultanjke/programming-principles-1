#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];

    // Merge arrays
    vector<int> c;
    c.reserve(n + m);                  // reserve space for performance
    c.insert(c.end(), a.begin(), a.end());
    c.insert(c.end(), b.begin(), b.end());

    sort(c.begin(), c.end());          // sort merged array

    // Output merged sorted array
    for (int x : c)
        cout << x << " ";

    return 0;
}