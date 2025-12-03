#include <iostream>
#include <vector>
using namespace std;

void transpose(const vector<vector<int>>& a, int n, int m) {
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    transpose(a, n, m);

    return 0;
}