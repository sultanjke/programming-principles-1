#include <iostream>

using namespace std;

int main() {

    long long n1;

    long long count = 0;

    cin >> n1;

    for (long long i = 1; i <= n1; i++) {

        long long n2;

        cin >> n2;

        if (n2 > 0) {

            count += 1;

        }

    }

    cout << count;

    return 0;

}