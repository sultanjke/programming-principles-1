#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<long long> v;
    long long x, sum = 0;

    while (cin >> x) {
        v.push_back(x);
    }

    for (long long num : v) sum += num;

    cout << sum;
    return 0;
}