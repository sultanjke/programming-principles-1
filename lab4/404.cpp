#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int max_value = INT_MIN;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > max_value)
            max_value = x;
    }

    cout << max_value;
    return 0;
}