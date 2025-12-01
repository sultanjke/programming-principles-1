#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n;
    cin >> n;

    int base = 16;

    string res = "";

    string digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while (n > 0){
        int rem = n % base;
        n /= base;
        res = digits[rem] + res;
    }

    cout << res << endl;

    return 0;
}