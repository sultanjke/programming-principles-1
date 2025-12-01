#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int minRow = 1;     // index (1-based)
    int minSum = 0;

    // Read first row separately to initialize minSum
    for (int j = 0; j < m; j++) {
        int x;
        cin >> x;
        minSum += x;
    }

    // Check the rest of the rows
    for (int i = 2; i <= n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            sum += x;
        }

        if (sum < minSum) {
            minSum = sum;
            minRow = i;
        }
    }

    cout << minRow;
    return 0;
}