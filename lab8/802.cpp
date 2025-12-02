#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<long long> v;
    long long x;

    while (cin >> x) v.push_back(x);

    long long mn = *min_element(v.begin(), v.end());
    long long mx = *max_element(v.begin(), v.end());

    for (long long &a : v)
        if (a == mn) a = mx;

    for (long long a : v) cout << a << " ";

    return 0;
}