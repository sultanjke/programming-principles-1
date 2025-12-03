#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int n;
    cin >> n;
    long long a[1000];  // assuming n ≤ 1000 for simplicity

    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long maxGCD = 0;

    // find GCD of every distinct pair (i < j)
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long g = gcd(a[i], a[j]);
            if (g > maxGCD)
                maxGCD = g;
        }
    }

    cout << maxGCD;
    return 0;
}