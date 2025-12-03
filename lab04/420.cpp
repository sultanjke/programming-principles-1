#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n < 2) {
        cout << "No";
        return 0;
    }

    bool prime = true;
    for (long long i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            prime = false;
            break;
        }
    }

    if (prime)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}