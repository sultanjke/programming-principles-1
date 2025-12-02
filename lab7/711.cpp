#include <iostream>
#include <vector>
using namespace std;

void diffArrays(const vector<int>& a, const vector<int>& b, int n) {
    for (int i = 0; i < n; i++) {
        int d = a[i] - b[i];
        if (d < 0) d = -d;
        cout << d << " ";
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    diffArrays(a, b, n);

    return 0;
}