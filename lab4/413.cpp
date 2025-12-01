#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int pos = n;
    for (int i = 0; i < n; i++) {
        if (a[i] >= target) {
            pos = i;
            break;
        }
    }

    cout << pos;
    return 0;
}