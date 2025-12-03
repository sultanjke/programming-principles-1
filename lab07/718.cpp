#include <iostream>
#include <string>
using namespace std;

void decToHex(int n) {
    if (n == 0) {
        cout << "0";
        return;
    }

    string hex = "";
    while (n > 0) {
        int r = n % 16;
        if (r < 10) hex += char('0' + r);
        else hex += char('A' + (r - 10));
        n /= 16;
    }

    for (int i = hex.size() - 1; i >= 0; i--)
        cout << hex[i];
}

int main() {
    int n;
    cin >> n;

    decToHex(n);

    return 0;
}
