#include <iostream>

using namespace std;

int main() {

    unsigned short x;

    cin >> x;

    unsigned short y = ~x;

    unsigned short z = 511;

    cout << (y & z);

    return 0;

}