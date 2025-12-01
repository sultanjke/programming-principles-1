#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[50][50];  // as given: 1 ≤ n, m ≤ 50

    // Read matrix
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    // Output transposed matrix
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++)
            cout << a[i][j] << " ";
        cout << "\n";
    }

    return 0;
}