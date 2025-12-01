#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int winner = 0;
    long long bestThrow = -1, bestSum = -1;
    for (int i = 0; i < n; i++) {
        long long sum = 0, maxThrow = -1;
        for (int j = 0; j < m; j++) {
            long long x;
            cin >> x;
            sum += x;
            if (x > maxThrow) maxThrow = x;
        }
        if (maxThrow > bestThrow || (maxThrow == bestThrow && sum > bestSum)) {
            bestThrow = maxThrow;
            bestSum = sum;
            winner = i;
        }
    }
    cout << winner;
    return 0;
}