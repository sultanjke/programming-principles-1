#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int row[100];
        int maxVal;
        cin >> row[0];
        maxVal = row[0];
        for (int j = 1; j < n; j++) {
            cin >> row[j];
            if (row[j] > maxVal) maxVal = row[j];
        }
        for (int j = 0; j < n; j++) cout << maxVal << " ";
        cout << "\n";
    }
    return 0;
}