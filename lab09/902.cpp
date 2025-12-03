#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
    bool a_even = (a % 2 == 0);
    bool b_even = (b % 2 == 0);

    if (a_even != b_even)
        return a_even;

    if (a_even)
        return a > b;

    return a < b;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), cmp);

    for (int x : arr)
        cout << x << " ";

    return 0;
}
