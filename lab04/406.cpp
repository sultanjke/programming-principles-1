#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    int max_val = INT_MIN;
    int min_val = INT_MAX;

    // Read elements and find max and min
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > max_val) max_val = a[i];
        if (a[i] < min_val) min_val = a[i];
    }

    // Replace all max elements with min
    for (int i = 0; i < n; i++) {
        if (a[i] == max_val)
            a[i] = min_val;
    }

    // Output the modified array
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}