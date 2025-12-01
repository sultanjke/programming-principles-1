#include <iostream>

using namespace std;

int main() {

    long long n, k;

    cin >> n;

    long long max = -1000000000000;

    int position = 0;

    for (long long i = 1; i <= n; ++i) {

        cin >> k;

        if (k > max) {

            max = k;

            position = i;

        }
        
    }

    cout << position;

    return 0;

}