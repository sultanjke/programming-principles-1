#include <iostream>
#include <vector>
using namespace std;

bool hasBook(const vector<int>& a, int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int x;
    cin >> x;

    if (hasBook(a, n, x)) cout << "Yes";
    else cout << "No";

    return 0;
}