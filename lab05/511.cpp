#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int minRow = 1;
    int minSum = 0;

    for (int j = 0; j < m; j++) {
        int x;
        cin >> x;
        minSum += x;
    }

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
