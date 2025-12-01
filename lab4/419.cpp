#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long root = sqrt(n);
    if (root * root == n)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}