#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            long long x;
            cin >> x;
            if (i + j == n - 1)  // condition for secondary diagonal
                sum += x;
        }
    }

    cout << sum;
    return 0;
}