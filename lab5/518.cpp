#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[100][100];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    cout << "coordinates of min elements: \n";
    long long sum = 0;
    for (int j = 0; j < m; j++) {
        int minVal = a[0][j], row = 1;
        for (int i = 1; i < n; i++) {
            if (a[i][j] < minVal) {
                minVal = a[i][j];
                row = i + 1;
            }
        }
        cout << row << ";" << j + 1 << "\n";
        sum += minVal;
    }
    cout << "\nTheir sum:\n" << sum;
    return 0;
}