#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[1000];           // assuming n ≤ 1000 (safe for standard limits)

    for (int i = 0; i < n; i++)
        cin >> a[i];

    // Generate and print all distinct pairs (i < j)
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            cout << a[i] << " " << a[j] << "\n";
        }
    }

    return 0;
}