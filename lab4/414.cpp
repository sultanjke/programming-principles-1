#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        cout << x * x << " ";
    }

    return 0;
}