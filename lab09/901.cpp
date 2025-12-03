#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool desc(int a, int b) {
    return a > b;   // sort in descending order
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), desc);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}