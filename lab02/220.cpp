#include <iostream>

#include <cmath>

using namespace std;

int main() {

    int n;

    cin >> n;

    long long k = 1;

    while (k <= n) {

        cout << k << " ";
        
        k *= 2;

    }

    return 0;

}