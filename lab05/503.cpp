#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    long long first, second, x;
    cin >> first;
    second = first;

    for (int i = 1; i < n * n; i++) {
        cin >> x;

        if (x > first) {
            second = first;
            first = x;
        } else if (x > second && x < first) {
            second = x;
        }
    }

    if (first == second)
        cout << 0;
    else
        cout << second;

    return 0;

}