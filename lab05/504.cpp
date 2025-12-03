#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long maxVal;
    int maxRow = 1, maxCol = 1;

    cin >> maxVal;

    for (int j = 2; j <= n; j++) {
        long long x;
        cin >> x;
        if (j == 2 && n == 1) break;
    }

    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            long long x;
            cin >> x;

            if (i == j && x > maxVal) {
                maxVal = x;
                maxRow = i;
                maxCol = j;
            }
        }
    }

    cout << "Maximum element is: " << maxVal
         << " with coordinates: " << maxRow << ";" << maxCol;
    return 0;
}