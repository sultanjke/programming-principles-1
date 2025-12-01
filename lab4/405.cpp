#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int max_value = INT_MIN;
    int position = 0;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (x > max_value) {
            max_value = x;
            position = i; 
        }
    }

    cout << position;
    return 0;
}