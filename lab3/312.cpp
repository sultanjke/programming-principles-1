#include <iostream>
#include <cmath>   
using namespace std;

int main() {

    long long num;
    cin >> num;

    long long decimal = 0;
    long long power = 0;

    while (num > 0) {

        long long digit = num % 10;          
        decimal += digit * pow(2, power);

        num /= 10;                       
        power++;         

    }

    cout << decimal;

    return 0;

}