#include <bits/stdc++.h>
using namespace std;

unsigned long long make_positive(long long x) {
    return x < 0 ? 0 - (unsigned long long)x : (unsigned long long)x;
}

int main() {
    long long x;
    if (cin >> x) cout << make_positive(x);
    return 0;
}