#include <iostream>

using namespace std;

int func(int a, int b) {

    int c = a + b;

    return c;

}

int main() {

    int k, i;

    cin >> k >> i;

    cout << func(k, i);

    return 0;

}