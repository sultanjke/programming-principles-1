#include <iostream>
#include <cmath>
using namespace std;

int main() {

    string bin;
    cin >> bin;

    int sumOdd = 0;
    int sumEven = 0;

    for (int i = 0; i < bin.length(); ++i){
        int digit = bin[i];
        if((i +1) % 2 == 1) {
            sumOdd += digit;
        } else {
            sumEven += digit;
        }
    }

    if (sumOdd == sumEven) {
        cout << "YES";
    } else {
        cout << "NO";
    }


    return 0;
}