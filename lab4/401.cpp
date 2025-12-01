#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;                   // read array size
    long long sum = 0;          // use long long to handle large sums
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;               // read each element
        sum += x;               // add to total
    }
    cout << sum;                // output the result
    return 0;
}