#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            long long x;
            cin >> x;
            long long r = sqrt(x);
            if (r * r == x) cout << r << " ";
            else cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}