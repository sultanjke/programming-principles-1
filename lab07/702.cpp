#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    if (!(cin >> a >> b)) return 0;

    long double h = hypot((long double)a, (long double)b);

    if (h < 10000.0L) {
        cout.setf(ios::fixed);
        cout << setprecision(3) << (double)h;
    } else {
        cout.setf(ios::scientific);
        cout << setprecision(3) << (double)h;
    }
    return 0;
}
