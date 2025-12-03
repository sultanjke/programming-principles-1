#include <iostream>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        long long t;
        cin >> t;
        if (t == x) cnt++;
    }

    cout << cnt;
    return 0;
}