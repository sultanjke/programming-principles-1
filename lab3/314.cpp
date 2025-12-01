#include <iostream>
#include <cmath>
using namespace std;

int main() {

    string n;
    cin >> n;

    long long sumOdd = 0;
    long long sumEven = 0;

    for (int i = 0; i < n.length(); ++i){
        int dig = n[i];
        if ((i + 1) % 2 == 0){
            sumEven += dig;
        } else {
            sumOdd += dig;
        }
    }

    cout << sumEven - sumOdd << endl;

    return 0;
}