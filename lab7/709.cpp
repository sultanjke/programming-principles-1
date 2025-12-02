#include <iostream>
#include <vector>
using namespace std;

void printReverse(const vector<int>& a, int n) {
    for (int i = n - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    printReverse(a, n);

    return 0;
}