#include <iostream>
using namespace std;

int main() {
    long long x, sum = 0;

    // Read until end of input (unknown number of elements)
    while (cin >> x) {
        sum += x;
    }

    cout << sum;
    return 0;
}