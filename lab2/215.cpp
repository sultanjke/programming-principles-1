#include <iostream>

using namespace std;

int main() {

    long long n1;

    long long sum = 0;

    cin >> n1;

    for (long long i = 1; i <= n1; i += 1) {

        long long n2;

        cin >> n2;

        sum += n2;

    }

    cout << sum;

    return 0;
}