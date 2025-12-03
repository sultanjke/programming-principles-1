#include <iostream>

using namespace std;

int main() {

    long long n, k;

    cin >> n >> k;

    long long max = k;

    for (long long i = 2; i <= n; ++i) {

        cin >> k;

        if (k > max) {

            max = k; 

        }
        
    }

    cout << max;

    return 0;

}