#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;                      // number of elements
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 != 0)            // if x is odd
            cout << x << " ";
    }
    return 0;
}